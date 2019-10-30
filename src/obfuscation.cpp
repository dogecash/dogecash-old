// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2019 The PIVX developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "obfuscation.h"
#include "coincontrol.h"
#include "init.h"
#include "main.h"
#include "masternodeman.h"
#include "script/sign.h"
#include "swifttx.h"
#include "guiinterface.h"
#include "util.h"
#include <boost/algorithm/string/replace.hpp>
#include <boost/filesystem.hpp>
#include <boost/filesystem/fstream.hpp>
#include <boost/foreach.hpp>

#include <algorithm>
#include <boost/assign/list_of.hpp>
#include <openssl/rand.h>


// The main object for accessing Obfuscation
CObfuscationPool obfuScationPool;
// A helper object for signing messages from Masternodes
CObfuScationSigner obfuScationSigner;
// The current Obfuscations in progress on the network
std::vector<CObfuscationQueue> vecObfuscationQueue;
// Keep track of the used Masternodes
std::vector<CTxIn> vecMasternodesUsed;
// Keep track of the scanning errors I've seen
std::map<uint256, CObfuscationBroadcastTx> mapObfuscationBroadcastTxes;
// Keep track of the active Masternode
CActiveMasternode activeMasternode;

int randomizeList(int i) { return std::rand() % i; }

void CObfuscationPool::Reset()
{
    cachedLastSuccess = 0;
    lastNewBlock = 0;
    vecMasternodesUsed.clear();
    UnlockCoins();
    SetNull();
}

void CObfuscationPool::SetNull()
{
    // MN side
    sessionUsers = 0;
    vecSessionCollateral.clear();

    // Client side
    entriesCount = 0;
    lastEntryAccepted = 0;
    countEntriesAccepted = 0;

    // Both sides
    state = POOL_STATUS_IDLE;
    sessionID = 0;
    sessionDenom = 0;
    entries.clear();
    finalTransaction.vin.clear();
    finalTransaction.vout.clear();
    lastTimeChanged = GetTimeMillis();

    // -- seed random number generator (used for ordering output lists)
    unsigned int seed = 0;
    RAND_bytes((unsigned char*)&seed, sizeof(seed));
    std::srand(seed);
}

bool CObfuscationPool::SetCollateralAddress(std::string strAddress)
{
    CBitcoinAddress address;
    if (!address.SetString(strAddress)) {
        LogPrintf("CObfuscationPool::SetCollateralAddress - Invalid Obfuscation collateral address\n");
        return false;
    }
    collateralPubKey = GetScriptForDestination(address.Get());
    return true;
}

//
// Unlock coins after Obfuscation fails or succeeds
//
void CObfuscationPool::UnlockCoins()
{
    if (!pwalletMain)
        return;

    while (true) {
        TRY_LOCK(pwalletMain->cs_wallet, lockWallet);
        if (!lockWallet) {
            MilliSleep(50);
            continue;
        }
        for (CTxIn v : lockedCoins)
            pwalletMain->UnlockCoin(v.prevout);
        break;
    }

    lockedCoins.clear();
}

//
// Check the Obfuscation progress and send client updates if a Masternode
//
void CObfuscationPool::Check()
{
    if (fMasterNode) LogPrint("obfuscation", "CObfuscationPool::Check() - entries count %lu\n", entries.size());
    //printf("CObfuscationPool::Check() %d - %d - %d\n", state, anonTx.CountEntries(), GetTimeMillis()-lastTimeChanged);

    if (fMasterNode) {
        LogPrint("obfuscation", "CObfuscationPool::Check() - entries count %lu\n", entries.size());

        // If entries is full, then move on to the next phase
        if (state == POOL_STATUS_ACCEPTING_ENTRIES && (int)entries.size() >= GetMaxPoolTransactions()) {
            LogPrint("obfuscation", "CObfuscationPool::Check() -- TRYING TRANSACTION \n");
            UpdateState(POOL_STATUS_FINALIZE_TRANSACTION);
        }
    }

    // create the finalized transaction for distribution to the clients
    if (state == POOL_STATUS_FINALIZE_TRANSACTION) {
        LogPrint("obfuscation", "CObfuscationPool::Check() -- FINALIZE TRANSACTIONS\n");
        UpdateState(POOL_STATUS_SIGNING);

        if (fMasterNode) {
            CMutableTransaction txNew;

            // make our new transaction
            for (unsigned int i = 0; i < entries.size(); i++) {
                for (const CTxOut& v : entries[i].vout)
                    txNew.vout.push_back(v);

                for (const CTxDSIn& s : entries[i].sev)
                    txNew.vin.push_back(s);
            }

            // shuffle the outputs for improved anonymity
            std::random_shuffle(txNew.vin.begin(), txNew.vin.end(), randomizeList);
            std::random_shuffle(txNew.vout.begin(), txNew.vout.end(), randomizeList);


            LogPrint("obfuscation", "Transaction 1: %s\n", txNew.ToString());
            finalTransaction = txNew;

            // request signatures from clients
            RelayFinalTransaction(sessionID, finalTransaction);
        }
    }

    // If we have all of the signatures, try to compile the transaction
    if (fMasterNode && state == POOL_STATUS_SIGNING && SignaturesComplete()) {
        LogPrint("obfuscation", "CObfuscationPool::Check() -- SIGNING\n");
        UpdateState(POOL_STATUS_TRANSMISSION);

        CheckFinalTransaction();
    }

    // reset if we're here for 10 seconds
    if ((state == POOL_STATUS_ERROR || state == POOL_STATUS_SUCCESS) && GetTimeMillis() - lastTimeChanged >= 10000) {
        LogPrint("obfuscation", "CObfuscationPool::Check() -- timeout, RESETTING\n");
        UnlockCoins();
        SetNull();
        if (fMasterNode) RelayStatus(sessionID, GetState(), GetEntriesCount(), MASTERNODE_RESET);
    }
}

void CObfuscationPool::CheckFinalTransaction()
{
    if (!fMasterNode) return; // check and relay final tx only on masternode

    CWalletTx txNew = CWalletTx(pwalletMain, finalTransaction);

    LOCK2(cs_main, pwalletMain->cs_wallet);
    {
        LogPrint("obfuscation", "Transaction 2: %s\n", txNew.ToString());

        // See if the transaction is valid
        if (!txNew.AcceptToMemoryPool(false, true, true)) {
            LogPrintf("CObfuscationPool::Check() - CommitTransaction : Error: Transaction not valid\n");
            SetNull();

            // not much we can do in this case
            UpdateState(POOL_STATUS_ACCEPTING_ENTRIES);
            RelayCompletedTransaction(sessionID, true, ERR_INVALID_TX);
            return;
        }

        LogPrintf("CObfuscationPool::Check() -- IS MASTER -- TRANSMITTING OBFUSCATION\n");

        // sign a message

        int64_t sigTime = GetAdjustedTime();
        std::string strMessage = txNew.GetHash().ToString() + std::to_string(sigTime);
        std::string strError = "";
        std::vector<unsigned char> vchSig;
        CKey key2;
        CPubKey pubkey2;

        if (!obfuScationSigner.SetKey(strMasterNodePrivKey, strError, key2, pubkey2)) {
            LogPrintf("CObfuscationPool::Check() - ERROR: Invalid Masternodeprivkey: '%s'\n", strError);
            return;
        }

        if (!obfuScationSigner.SignMessage(strMessage, strError, vchSig, key2)) {
            LogPrintf("CObfuscationPool::Check() - Sign message failed\n");
            return;
        }

        if (!obfuScationSigner.VerifyMessage(pubkey2, vchSig, strMessage, strError)) {
            LogPrintf("CObfuscationPool::Check() - Verify message failed\n");
            return;
        }

        if (!mapObfuscationBroadcastTxes.count(txNew.GetHash())) {
            CObfuscationBroadcastTx dstx;
            dstx.tx = txNew;
            dstx.vin = activeMasternode.vin;
            dstx.vchSig = vchSig;
            dstx.sigTime = sigTime;

            mapObfuscationBroadcastTxes.insert(std::make_pair(txNew.GetHash(), dstx));
        }

        CInv inv(MSG_DSTX, txNew.GetHash());
        RelayInv(inv);

        // Tell the clients it was successful
        RelayCompletedTransaction(sessionID, false, MSG_SUCCESS);

        // Randomly charge clients
        ChargeRandomFees();

        // Reset
        LogPrint("obfuscation", "CObfuscationPool::Check() -- COMPLETED -- RESETTING\n");
        SetNull();
        RelayStatus(sessionID, GetState(), GetEntriesCount(), MASTERNODE_RESET);
    }
}

//
// Charge clients a fee if they're abusive
//
// Why bother? Obfuscation uses collateral to ensure abuse to the process is kept to a minimum.
// The submission and signing stages in Obfuscation are completely separate. In the cases where
// a client submits a transaction then refused to sign, there must be a cost. Otherwise they
// would be able to do this over and over again and bring the mixing to a hault.
//
// How does this work? Messages to Masternodes come in via "dsi", these require a valid collateral
// transaction for the client to be able to enter the pool. This transaction is kept by the Masternode
// until the transaction is either complete or fails.
//
void CObfuscationPool::ChargeFees()
{
    if (!fMasterNode) return;

    //we don't need to charge collateral for every offence.
    int offences = 0;
    int r = rand() % 100;
    if (r > 33) return;

    if (state == POOL_STATUS_ACCEPTING_ENTRIES) {
        for (const CTransaction& txCollateral : vecSessionCollateral) {
            bool found = false;
            for (const CObfuScationEntry& v : entries) {
                if (v.collateral == txCollateral) {
                    found = true;
                }
            }

            // This queue entry didn't send us the promised transaction
            if (!found) {
                LogPrintf("CObfuscationPool::ChargeFees -- found uncooperative node (didn't send transaction). Found offence.\n");
                offences++;
            }
        }
    }

    if (state == POOL_STATUS_SIGNING) {
        // who didn't sign?
        for (const CObfuScationEntry &v : entries) {
            for (const CTxDSIn &s : v.sev) {
                if (!s.fHasSig) {
                    LogPrintf("CObfuscationPool::ChargeFees -- found uncooperative node (didn't sign). Found offence\n");
                    offences++;
                }
            }
        }
    }

    r = rand() % 100;
    int target = 0;

    //mostly offending?
    if (offences >= Params().PoolMaxTransactions() - 1 && r > 33) return;

    //everyone is an offender? That's not right
    if (offences >= Params().PoolMaxTransactions()) return;

    //charge one of the offenders randomly
    if (offences > 1) target = 50;

    //pick random client to charge
    r = rand() % 100;

    if (state == POOL_STATUS_ACCEPTING_ENTRIES) {
        for (const CTransaction& txCollateral : vecSessionCollateral) {
            bool found = false;
            for (const CObfuScationEntry& v : entries) {
                if (v.collateral == txCollateral) {
                    found = true;
                }
            }

            // This queue entry didn't send us the promised transaction
            if (!found && r > target) {
                LogPrintf("CObfuscationPool::ChargeFees -- found uncooperative node (didn't send transaction). charging fees.\n");

                CWalletTx wtxCollateral = CWalletTx(pwalletMain, txCollateral);

                // Broadcast
                if (!wtxCollateral.AcceptToMemoryPool(true)) {
                    // This must not fail. The transaction has already been signed and recorded.
                    LogPrintf("CObfuscationPool::ChargeFees() : Error: Transaction not valid");
                }
                wtxCollateral.RelayWalletTransaction();
                return;
            }
        }
    }

    if (state == POOL_STATUS_SIGNING) {
        // who didn't sign?
        for (const CObfuScationEntry &v : entries) {
            for (const CTxDSIn &s : v.sev) {
                if (!s.fHasSig && r > target) {
                    LogPrintf("CObfuscationPool::ChargeFees -- found uncooperative node (didn't sign). charging fees.\n");

                    CWalletTx wtxCollateral = CWalletTx(pwalletMain, v.collateral);

                    // Broadcast
                    if (!wtxCollateral.AcceptToMemoryPool(false)) {
                        // This must not fail. The transaction has already been signed and recorded.
                        LogPrintf("CObfuscationPool::ChargeFees() : Error: Transaction not valid");
                    }
                    wtxCollateral.RelayWalletTransaction();
                    return;
                }
            }
        }
    }
}

// charge the collateral randomly
//  - Obfuscation is completely free, to pay miners we randomly pay the collateral of users.
void CObfuscationPool::ChargeRandomFees()
{
    if (fMasterNode) {
        int i = 0;

        for (const CTransaction& txCollateral : vecSessionCollateral) {
            int r = rand() % 100;

            /*
                Collateral Fee Charges:

                Being that Obfuscation has "no fees" we need to have some kind of cost associated
                with using it to stop abuse. Otherwise it could serve as an attack vector and
                allow endless transaction that would bloat PIVX and make it unusable. To
                stop these kinds of attacks 1 in 10 successful transactions are charged. This
                adds up to a cost of 0.001 PIV per transaction on average.
            */
            if (r <= 10) {
                LogPrintf("CObfuscationPool::ChargeRandomFees -- charging random fees. %u\n", i);

                CWalletTx wtxCollateral = CWalletTx(pwalletMain, txCollateral);

                // Broadcast
                if (!wtxCollateral.AcceptToMemoryPool(true)) {
                    // This must not fail. The transaction has already been signed and recorded.
                    LogPrintf("CObfuscationPool::ChargeRandomFees() : Error: Transaction not valid");
                }
                wtxCollateral.RelayWalletTransaction();
            }
        }
    }
}

//
// Check for various timeouts (queue objects, Obfuscation, etc)
//
void CObfuscationPool::CheckTimeout()
{
    if (!fEnableZeromint && !fMasterNode) return;

    // catching hanging sessions
    if (!fMasterNode) {
        switch (state) {
        case POOL_STATUS_TRANSMISSION:
            LogPrint("obfuscation", "CObfuscationPool::CheckTimeout() -- Session complete -- Running Check()\n");
            Check();
            break;
        case POOL_STATUS_ERROR:
            LogPrint("obfuscation", "CObfuscationPool::CheckTimeout() -- Pool error -- Running Check()\n");
            Check();
            break;
        case POOL_STATUS_SUCCESS:
            LogPrint("obfuscation", "CObfuscationPool::CheckTimeout() -- Pool success -- Running Check()\n");
            Check();
            break;
        }
    }

    // check Obfuscation queue objects for timeouts
    int c = 0;
    std::vector<CObfuscationQueue>::iterator it = vecObfuscationQueue.begin();
    while (it != vecObfuscationQueue.end()) {
        if ((*it).IsExpired()) {
            LogPrint("obfuscation", "CObfuscationPool::CheckTimeout() : Removing expired queue entry - %d\n", c);
            it = vecObfuscationQueue.erase(it);
        } else
            ++it;
        c++;
    }

    int addLagTime = 0;
    if (!fMasterNode) addLagTime = 10000; //if we're the client, give the server a few extra seconds before resetting.

    if (state == POOL_STATUS_ACCEPTING_ENTRIES || state == POOL_STATUS_QUEUE) {
        c = 0;

        // check for a timeout and reset if needed
        std::vector<CObfuScationEntry>::iterator it2 = entries.begin();
        while (it2 != entries.end()) {
            if ((*it2).IsExpired()) {
                LogPrint("obfuscation", "CObfuscationPool::CheckTimeout() : Removing expired entry - %d\n", c);
                it2 = entries.erase(it2);
                if (entries.size() == 0) {
                    UnlockCoins();
                    SetNull();
                }
                if (fMasterNode) {
                    RelayStatus(sessionID, GetState(), GetEntriesCount(), MASTERNODE_RESET);
                }
            } else
                ++it2;
            c++;
        }

        if (GetTimeMillis() - lastTimeChanged >= (OBFUSCATION_QUEUE_TIMEOUT * 1000) + addLagTime) {
            UnlockCoins();
            SetNull();
        }
    } else if (GetTimeMillis() - lastTimeChanged >= (OBFUSCATION_QUEUE_TIMEOUT * 1000) + addLagTime) {
        LogPrint("obfuscation", "CObfuscationPool::CheckTimeout() -- Session timed out (%ds) -- resetting\n", OBFUSCATION_QUEUE_TIMEOUT);
        UnlockCoins();
        SetNull();

        UpdateState(POOL_STATUS_ERROR);
        lastMessage = _("Session timed out.");
    }

    if (state == POOL_STATUS_SIGNING && GetTimeMillis() - lastTimeChanged >= (OBFUSCATION_SIGNING_TIMEOUT * 1000) + addLagTime) {
        LogPrint("obfuscation", "CObfuscationPool::CheckTimeout() -- Session timed out (%ds) -- restting\n", OBFUSCATION_SIGNING_TIMEOUT);
        ChargeFees();
        UnlockCoins();
        SetNull();

        UpdateState(POOL_STATUS_ERROR);
        lastMessage = _("Signing timed out.");
    }
}

//
// Check for complete queue
//
void CObfuscationPool::CheckForCompleteQueue()
{
    if (!fEnableZeromint && !fMasterNode) return;

    /* Check to see if we're ready for submissions from clients */
    //
    // After receiving multiple dsa messages, the queue will switch to "accepting entries"
    // which is the active state right before merging the transaction
    //
    if (state == POOL_STATUS_QUEUE && sessionUsers == GetMaxPoolTransactions()) {
        UpdateState(POOL_STATUS_ACCEPTING_ENTRIES);

        CObfuscationQueue dsq;
        dsq.nDenom = sessionDenom;
        dsq.vin = activeMasternode.vin;
        dsq.time = GetTime();
        dsq.ready = true;
        dsq.Sign();
        dsq.Relay();
    }
}


// Check to make sure everything is signed
bool CObfuscationPool::SignaturesComplete()
{
    for (const CObfuScationEntry& v : entries) {
        for (const CTxDSIn& s : v.sev) {
            if (!s.fHasSig) return false;
        }
    }
    return true;
}

void CObfuscationPool::NewBlock()
{
    LogPrint("obfuscation", "CObfuscationPool::NewBlock \n");

    //we we're processing lots of blocks, we'll just leave
    if (GetTime() - lastNewBlock < 10) return;
    lastNewBlock = GetTime();

    obfuScationPool.CheckTimeout();
}

// Obfuscation transaction was completed (failed or successful)
void CObfuscationPool::CompletedTransaction(bool error, int errorID)
{
    if (fMasterNode) return;

    if (error) {
        LogPrintf("CompletedTransaction -- error \n");
        UpdateState(POOL_STATUS_ERROR);

        Check();
        UnlockCoins();
        SetNull();
    } else {
        LogPrintf("CompletedTransaction -- success \n");
        UpdateState(POOL_STATUS_SUCCESS);

        UnlockCoins();
        SetNull();

        // To avoid race conditions, we'll only let DS run once per block
        cachedLastSuccess = chainActive.Tip()->nHeight;
    }
    lastMessage = GetMessageByID(errorID);
}

void CObfuscationPool::ClearLastMessage()
{
    lastMessage = "";
}

//
// Passively run Obfuscation in the background to anonymize funds based on the given configuration.
//
// This does NOT run by default for daemons, only for QT.
//
bool CObfuscationPool::DoAutomaticDenominating(bool fDryRun)
{
    return false;  // Disabled until Obfuscation is completely removed

    if (!fEnableZeromint) return false;
    if (fMasterNode) return false;
    if (state == POOL_STATUS_ERROR || state == POOL_STATUS_SUCCESS) return false;
    if (GetEntriesCount() > 0) {
        strAutoDenomResult = _("Mixing in progress...");
        return false;
    }

    TRY_LOCK(cs_obfuscation, lockDS);
    if (!lockDS) {
        strAutoDenomResult = _("Lock is already in place.");
        return false;
    }

    if (!masternodeSync.IsBlockchainSynced()) {
        strAutoDenomResult = _("Can't mix while sync in progress.");
        return false;
    }

    if (!fDryRun && pwalletMain->IsLocked()) {
        strAutoDenomResult = _("Wallet is locked.");
        return false;
    }

    if (chainActive.Tip()->nHeight - cachedLastSuccess < minBlockSpacing) {
        LogPrintf("CObfuscationPool::DoAutomaticDenominating - Last successful Obfuscation action was too recent\n");
        strAutoDenomResult = _("Last successful Obfuscation action was too recent.");
        return false;
    }

    if (mnodeman.size() == 0) {
        LogPrint("obfuscation", "CObfuscationPool::DoAutomaticDenominating - No Masternodes detected\n");
        strAutoDenomResult = _("No Masternodes detected.");
        return false;
    }

    // ** find the coins we'll use
    std::vector<CTxIn> vCoins;
    CAmount nValueMin = CENT;
    CAmount nValueIn = 0;

    CAmount nOnlyDenominatedBalance;
    CAmount nBalanceNeedsDenominated;

    // should not be less than fees in OBFUSCATION_COLLATERAL + few (lets say 5) smallest denoms
    CAmount nLowestDenom = OBFUSCATION_COLLATERAL + obfuScationDenominations[obfuScationDenominations.size() - 1] * 5;

    // if there are no OBF collateral inputs yet
    if (!pwalletMain->HasCollateralInputs())
        // should have some additional amount for them
        nLowestDenom += OBFUSCATION_COLLATERAL * 4;

    CAmount nBalanceNeedsAnonymized = nAnonymizedogecashAmount * COIN - pwalletMain->GetAnonymizedBalance();

    // if balanceNeedsAnonymized is more than pool max, take the pool max
    if (nBalanceNeedsAnonymized > OBFUSCATION_POOL_MAX) nBalanceNeedsAnonymized = OBFUSCATION_POOL_MAX;

    // if balanceNeedsAnonymized is more than non-anonymized, take non-anonymized
    CAmount nAnonymizableBalance = pwalletMain->GetAnonymizableBalance();
    if (nBalanceNeedsAnonymized > nAnonymizableBalance) nBalanceNeedsAnonymized = nAnonymizableBalance;

    if (nBalanceNeedsAnonymized < nLowestDenom) {
        LogPrintf("DoAutomaticDenominating : No funds detected in need of denominating \n");
        strAutoDenomResult = _("No funds detected in need of denominating.");
        return false;
    }

    LogPrint("obfuscation", "DoAutomaticDenominating : nLowestDenom=%d, nBalanceNeedsAnonymized=%d\n", nLowestDenom, nBalanceNeedsAnonymized);

    // select coins that should be given to the pool
    if (!pwalletMain->SelectCoinsDark(nValueMin, nBalanceNeedsAnonymized, vCoins, nValueIn, 0, nZeromintPercentage)) {
        nValueIn = 0;
        vCoins.clear();

        if (pwalletMain->SelectCoinsDark(nValueMin, 9999999 * COIN, vCoins, nValueIn, -2, 0)) {
            nOnlyDenominatedBalance = pwalletMain->GetDenominatedBalance(true) + pwalletMain->GetDenominatedBalance() - pwalletMain->GetAnonymizedBalance();
            nBalanceNeedsDenominated = nBalanceNeedsAnonymized - nOnlyDenominatedBalance;

            if (nBalanceNeedsDenominated > nValueIn) nBalanceNeedsDenominated = nValueIn;

            if (nBalanceNeedsDenominated < nLowestDenom) return false; // most likely we just waiting for denoms to confirm
            if (!fDryRun) return CreateDenominated(nBalanceNeedsDenominated);

            return true;
        } else {
            LogPrintf("DoAutomaticDenominating : Can't denominate - no compatible inputs left\n");
            strAutoDenomResult = _("Can't denominate: no compatible inputs left.");
            return false;
        }
    }

    if (fDryRun) return true;

    nOnlyDenominatedBalance = pwalletMain->GetDenominatedBalance(true) + pwalletMain->GetDenominatedBalance() - pwalletMain->GetAnonymizedBalance();
    nBalanceNeedsDenominated = nBalanceNeedsAnonymized - nOnlyDenominatedBalance;

    //check if we have should create more denominated inputs
    if (nBalanceNeedsDenominated > nOnlyDenominatedBalance) return CreateDenominated(nBalanceNeedsDenominated);

    //check if we have the collateral sized inputs
    if (!pwalletMain->HasCollateralInputs()) return !pwalletMain->HasCollateralInputs(false) && MakeCollateralAmounts();

    std::vector<CTxOut> vOut;

    // initial phase, find a Masternode
    if (!sessionFoundMasternode) {
        // Clean if there is anything left from previous session
        UnlockCoins();
        SetNull();

        int nUseQueue = rand() % 100;
        UpdateState(POOL_STATUS_ACCEPTING_ENTRIES);

        if (pwalletMain->GetDenominatedBalance(true) > 0) { //get denominated unconfirmed inputs
            LogPrintf("DoAutomaticDenominating -- Found unconfirmed denominated outputs, will wait till they confirm to continue.\n");
            strAutoDenomResult = _("Found unconfirmed denominated outputs, will wait till they confirm to continue.");
            return false;
        }

        //check our collateral nad create new if needed
        std::string strReason;
        CValidationState state;
        if (txCollateral == CMutableTransaction()) {
            if (!pwalletMain->CreateCollateralTransaction(txCollateral, strReason)) {
                LogPrintf("% -- create collateral error:%s\n", __func__, strReason);
                return false;
            }
        } else {
            if (!IsCollateralValid(txCollateral)) {
                LogPrintf("%s -- invalid collateral, recreating...\n", __func__);
                if (!pwalletMain->CreateCollateralTransaction(txCollateral, strReason)) {
                    LogPrintf("%s -- create collateral error: %s\n", __func__, strReason);
                    return false;
                }
            }
        }

        //if we've used 90% of the Masternode list then drop all the oldest first
        int nThreshold = (int)(mnodeman.CountEnabled(ActiveProtocol()) * 0.9);
        LogPrint("obfuscation", "Checking vecMasternodesUsed size %d threshold %d\n", (int)vecMasternodesUsed.size(), nThreshold);
        while ((int)vecMasternodesUsed.size() > nThreshold) {
            vecMasternodesUsed.erase(vecMasternodesUsed.begin());
            LogPrint("obfuscation", "  vecMasternodesUsed size %d threshold %d\n", (int)vecMasternodesUsed.size(), nThreshold);
        }

        //don't use the queues all of the time for mixing
        if (nUseQueue > 33) {
            // Look through the queues and see if anything matches
            BOOST_FOREACH (CObfuscationQueue& dsq, vecObfuscationQueue) {
                CService addr;
                if (dsq.time == 0) continue;

                if (!dsq.GetAddress(addr)) continue;
                if (dsq.IsExpired()) continue;

                int protocolVersion;
                if (!dsq.GetProtocolVersion(protocolVersion)) continue;
                if (protocolVersion < ActiveProtocol()) continue;

                //non-denom's are incompatible
                if ((dsq.nDenom & (1 << 4))) continue;

                bool fUsed = false;
                //don't reuse Masternodes
                BOOST_FOREACH (CTxIn usedVin, vecMasternodesUsed) {
                    if (dsq.vin == usedVin) {
                        fUsed = true;
                        break;
                    }
                }
                if (fUsed) continue;

                std::vector<CTxIn> vTempCoins;
                std::vector<COutput> vTempCoins2;
                // Try to match their denominations if possible
                if (!pwalletMain->SelectCoinsByDenominations(dsq.nDenom, nValueMin, nBalanceNeedsAnonymized, vTempCoins, vTempCoins2, nValueIn, 0, nZeromintPercentage)) {
                    LogPrintf("DoAutomaticDenominating --- Couldn't match denominations %d\n", dsq.nDenom);
                    continue;
                }

                CMasternode* pmn = mnodeman.Find(dsq.vin);
                if (pmn == NULL) {
                    LogPrintf("DoAutomaticDenominating --- dsq vin %s is not in masternode list!", dsq.vin.ToString());
                    continue;
                }

                LogPrintf("DoAutomaticDenominating --- attempt to connect to masternode from queue %s\n", pmn->addr.ToString());
                lastTimeChanged = GetTimeMillis();

                // connect to Masternode and submit the queue request
                CNode* pnode = ConnectNode((CAddress)addr, NULL, true);
                if (pnode != NULL) {
                    pSubmittedToMasternode = pmn;
                    vecMasternodesUsed.push_back(dsq.vin);
                    sessionDenom = dsq.nDenom;

                    pnode->PushMessage("dsa", sessionDenom, txCollateral);
                    LogPrintf("DoAutomaticDenominating --- connected (from queue), sending dsa for %d - %s\n", sessionDenom, pnode->addr.ToString());
                    strAutoDenomResult = _("Mixing in progress...");
                    dsq.time = 0; //remove node
                    return true;
                } else {
                    LogPrintf("DoAutomaticDenominating --- error connecting \n");
                    strAutoDenomResult = _("Error connecting to Masternode.");
                    dsq.time = 0; //remove node
                    continue;
                }
            }
        }

        // do not initiate queue if we are a liquidity proveder to avoid useless inter-mixing
        if (nLiquidityProvider) return false;

        int i = 0;

        // otherwise, try one randomly
        while (i < 10) {
            CMasternode* pmn = mnodeman.FindRandomNotInVec(vecMasternodesUsed, ActiveProtocol());
            if (pmn == NULL) {
                LogPrintf("DoAutomaticDenominating --- Can't find random masternode!\n");
                strAutoDenomResult = _("Can't find random Masternode.");
                return false;
            }

            if (pmn->nLastDsq != 0 &&
                pmn->nLastDsq + mnodeman.CountEnabled(ActiveProtocol()) / 5 > mnodeman.nDsqCount) {
                i++;
                continue;
            }

            lastTimeChanged = GetTimeMillis();
            LogPrintf("DoAutomaticDenominating --- attempt %d connection to Masternode %s\n", i, pmn->addr.ToString());
            CNode* pnode = ConnectNode((CAddress)pmn->addr, NULL, true);
            if (pnode != NULL) {
                pSubmittedToMasternode = pmn;
                vecMasternodesUsed.push_back(pmn->vin);

                std::vector<CAmount> vecAmounts;
                pwalletMain->ConvertList(vCoins, vecAmounts);
                // try to get a single random denom out of vecAmounts
                while (sessionDenom == 0)
                    sessionDenom = GetDenominationsByAmounts(vecAmounts);

                pnode->PushMessage("dsa", sessionDenom, txCollateral);
                LogPrintf("DoAutomaticDenominating --- connected, sending dsa for %d\n", sessionDenom);
                strAutoDenomResult = _("Mixing in progress...");
                return true;
            } else {
                vecMasternodesUsed.push_back(pmn->vin); // postpone MN we wasn't able to connect to
                i++;
                continue;
            }
        }

        strAutoDenomResult = _("No compatible Masternode found.");
        return false;
    }

    strAutoDenomResult = _("Mixing in progress...");
    return false;
}


bool CObfuscationPool::PrepareObfuscationDenominate()
{
    std::string strError = "";
    // Submit transaction to the pool if we get here
    // Try to use only inputs with the same number of rounds starting from lowest number of rounds possible
    for (int i = 0; i < nZeromintPercentage; i++) {
        strError = pwalletMain->PrepareObfuscationDenominate(i, i + 1);
        LogPrintf("DoAutomaticDenominating : Running Obfuscation denominate for %d rounds. Return '%s'\n", i, strError);
        if (strError == "") return true;
    }

    // We failed? That's strange but let's just make final attempt and try to mix everything
    strError = pwalletMain->PrepareObfuscationDenominate(0, nZeromintPercentage);
    LogPrintf("DoAutomaticDenominating : Running Obfuscation denominate for all rounds. Return '%s'\n", strError);
    if (strError == "") return true;

    // Should never actually get here but just in case
    strAutoDenomResult = strError;
    LogPrintf("DoAutomaticDenominating : Error running denominate, %s\n", strError);
    return false;
}

bool CObfuscationPool::SendRandomPaymentToSelf()
{
    int64_t nBalance = pwalletMain->GetBalance();
    int64_t nPayment = (nBalance * 0.35) + (rand() % nBalance);

    if (nPayment > nBalance) nPayment = nBalance - (0.1 * COIN);

    // make our change address
    CReserveKey reservekey(pwalletMain);

    CScript scriptChange;
    CPubKey vchPubKey;
    assert(reservekey.GetReservedKey(vchPubKey)); // should never fail, as we just unlocked
    scriptChange = GetScriptForDestination(vchPubKey.GetID());

    CWalletTx wtx;
    CAmount nFeeRet = 0;
    std::string strFail = "";
    vector<pair<CScript, CAmount> > vecSend;

    // ****** Add fees ************ /
    vecSend.push_back(make_pair(scriptChange, nPayment));

    CCoinControl* coinControl = NULL;
    bool success = pwalletMain->CreateTransaction(vecSend, wtx, reservekey, nFeeRet, strFail, coinControl, ONLY_DENOMINATED);
    if (!success) {
        LogPrintf("SendRandomPaymentToSelf: Error - %s\n", strFail);
        return false;
    }

    pwalletMain->CommitTransaction(wtx, reservekey);

    LogPrintf("SendRandomPaymentToSelf Success: tx %s\n", wtx.GetHash().GetHex());

    return true;
}

// Split up large inputs or create fee sized inputs
bool CObfuscationPool::MakeCollateralAmounts()
{
    CWalletTx wtx;
    CAmount nFeeRet = 0;
    std::string strFail = "";
    vector<pair<CScript, CAmount> > vecSend;
    CCoinControl coinControl;
    coinControl.fAllowOtherInputs = false;
    coinControl.fAllowWatchOnly = false;
    // make our collateral address
    CReserveKey reservekeyCollateral(pwalletMain);
    // make our change address
    CReserveKey reservekeyChange(pwalletMain);

    CScript scriptCollateral;
    CPubKey vchPubKey;
    assert(reservekeyCollateral.GetReservedKey(vchPubKey)); // should never fail, as we just unlocked
    scriptCollateral = GetScriptForDestination(vchPubKey.GetID());

    vecSend.push_back(make_pair(scriptCollateral, OBFUSCATION_COLLATERAL * 4));

    // try to use non-denominated and not mn-like funds
    bool success = pwalletMain->CreateTransaction(vecSend, wtx, reservekeyChange,
        nFeeRet, strFail, &coinControl, ONLY_NONDENOMINATED_NOT10000IFMN);
    if (!success) {
        // if we failed (most likeky not enough funds), try to use all coins instead -
        // MN-like funds should not be touched in any case and we can't mix denominated without collaterals anyway
        CCoinControl* coinControlNull = NULL;
        LogPrintf("MakeCollateralAmounts: ONLY_NONDENOMINATED_NOT10000IFMN Error - %s\n", strFail);
        success = pwalletMain->CreateTransaction(vecSend, wtx, reservekeyChange,
            nFeeRet, strFail, coinControlNull, ONLY_NOT10000IFMN);
        if (!success) {
            LogPrintf("MakeCollateralAmounts: ONLY_NOT10000IFMN Error - %s\n", strFail);
            reservekeyCollateral.ReturnKey();
            return false;
        }
    }

    reservekeyCollateral.KeepKey();

    LogPrintf("MakeCollateralAmounts: tx %s\n", wtx.GetHash().GetHex());

    // use the same cachedLastSuccess as for DS mixinx to prevent race
    if (!pwalletMain->CommitTransaction(wtx, reservekeyChange)) {
        LogPrintf("MakeCollateralAmounts: CommitTransaction failed!\n");
        return false;
    }

    cachedLastSuccess = chainActive.Tip()->nHeight;

    return true;
}

// Create denominations
bool CObfuscationPool::CreateDenominated(CAmount nTotalValue)
{
    CWalletTx wtx;
    CAmount nFeeRet = 0;
    std::string strFail = "";
    vector<pair<CScript, CAmount> > vecSend;
    CAmount nValueLeft = nTotalValue;

    // make our collateral address
    CReserveKey reservekeyCollateral(pwalletMain);
    // make our change address
    CReserveKey reservekeyChange(pwalletMain);
    // make our denom addresses
    CReserveKey reservekeyDenom(pwalletMain);

    CScript scriptCollateral;
    CPubKey vchPubKey;
    assert(reservekeyCollateral.GetReservedKey(vchPubKey)); // should never fail, as we just unlocked
    scriptCollateral = GetScriptForDestination(vchPubKey.GetID());

    // ****** Add collateral outputs ************ /
    if (!pwalletMain->HasCollateralInputs()) {
        vecSend.push_back(make_pair(scriptCollateral, OBFUSCATION_COLLATERAL * 4));
        nValueLeft -= OBFUSCATION_COLLATERAL * 4;
    }

    // ****** Add denoms ************ /
    BOOST_REVERSE_FOREACH (CAmount v, obfuScationDenominations) {
        int nOutputs = 0;

        // add each output up to 10 times until it can't be added again
        while (nValueLeft - v >= OBFUSCATION_COLLATERAL && nOutputs <= 10) {
            CScript scriptDenom;
            CPubKey vchPubKey;
            //use a unique change address
            assert(reservekeyDenom.GetReservedKey(vchPubKey)); // should never fail, as we just unlocked
            scriptDenom = GetScriptForDestination(vchPubKey.GetID());
            // TODO: do not keep reservekeyDenom here
            reservekeyDenom.KeepKey();

            vecSend.push_back(make_pair(scriptDenom, v));

            //increment outputs and subtract denomination amount
            nOutputs++;
            nValueLeft -= v;
            LogPrintf("CreateDenominated1 %d\n", nValueLeft);
        }

        if (nValueLeft == 0) break;
    }
    LogPrintf("CreateDenominated2 %d\n", nValueLeft);

    // if we have anything left over, it will be automatically send back as change - there is no need to send it manually

    CCoinControl* coinControl = NULL;
    bool success = pwalletMain->CreateTransaction(vecSend, wtx, reservekeyChange,
        nFeeRet, strFail, coinControl, ONLY_NONDENOMINATED_NOT10000IFMN);
    if (!success) {
        LogPrintf("CreateDenominated: Error - %s\n", strFail);
        // TODO: return reservekeyDenom here
        reservekeyCollateral.ReturnKey();
        return false;
    }

    // TODO: keep reservekeyDenom here
    reservekeyCollateral.KeepKey();

    // use the same cachedLastSuccess as for DS mixinx to prevent race
    if (pwalletMain->CommitTransaction(wtx, reservekeyChange))
        cachedLastSuccess = chainActive.Tip()->nHeight;
    else
        LogPrintf("CreateDenominated: CommitTransaction failed!\n");

    LogPrintf("CreateDenominated: tx %s\n", wtx.GetHash().GetHex());

    return true;
}

bool CObfuscationPool::IsCompatibleWithEntries(std::vector<CTxOut>& vout)
{
    if (GetDenominations(vout) == 0) return false;

    BOOST_FOREACH (const CObfuScationEntry v, entries) {
        LogPrintf(" IsCompatibleWithEntries %d %d\n", GetDenominations(vout), GetDenominations(v.vout));
        /*
        BOOST_FOREACH(CTxOut o1, vout)
            LogPrintf(" vout 1 - %s\n", o1.ToString());

        BOOST_FOREACH(CTxOut o2, v.vout)
            LogPrintf(" vout 2 - %s\n", o2.ToString());
*/
        if (GetDenominations(vout) != GetDenominations(v.vout)) return false;
    }

    return true;
}

bool CObfuscationPool::IsCompatibleWithSession(int64_t nDenom, CTransaction txCollateral, int& errorID)
{
    if (nDenom == 0) return false;

    LogPrintf("CObfuscationPool::IsCompatibleWithSession - sessionDenom %d sessionUsers %d\n", sessionDenom, sessionUsers);

    if (!unitTest && !IsCollateralValid(txCollateral)) {
        LogPrint("obfuscation", "CObfuscationPool::IsCompatibleWithSession - collateral not valid!\n");
        errorID = ERR_INVALID_COLLATERAL;
        return false;
    }

    if (sessionUsers < 0) sessionUsers = 0;

    if (sessionUsers == 0) {
        sessionID = 1 + (rand() % 999999);
        sessionDenom = nDenom;
        sessionUsers++;
        lastTimeChanged = GetTimeMillis();

        if (!unitTest) {
            //broadcast that I'm accepting entries, only if it's the first entry through
            CObfuscationQueue dsq;
            dsq.nDenom = nDenom;
            dsq.vin = activeMasternode.vin;
            dsq.time = GetTime();
            dsq.Sign();
            dsq.Relay();
        }

        UpdateState(POOL_STATUS_QUEUE);
        vecSessionCollateral.push_back(txCollateral);
        return true;
    }

    if ((state != POOL_STATUS_ACCEPTING_ENTRIES && state != POOL_STATUS_QUEUE) || sessionUsers >= GetMaxPoolTransactions()) {
        if ((state != POOL_STATUS_ACCEPTING_ENTRIES && state != POOL_STATUS_QUEUE)) errorID = ERR_MODE;
        if (sessionUsers >= GetMaxPoolTransactions()) errorID = ERR_QUEUE_FULL;
        LogPrintf("CObfuscationPool::IsCompatibleWithSession - incompatible mode, return false %d %d\n", state != POOL_STATUS_ACCEPTING_ENTRIES, sessionUsers >= GetMaxPoolTransactions());
        return false;
    }

    if (nDenom != sessionDenom) {
        errorID = ERR_DENOM;
        return false;
    }

    LogPrintf("CObfuScationPool::IsCompatibleWithSession - compatible\n");

    sessionUsers++;
    lastTimeChanged = GetTimeMillis();
    vecSessionCollateral.push_back(txCollateral);

    return true;
}

//create a nice string to show the denominations
void CObfuscationPool::GetDenominationsToString(int nDenom, std::string& strDenom)
{
    // Function returns as follows:
    //
    // bit 0 - 100DOGEC+1 ( bit on if present )
    // bit 1 - 10DOGEC+1
    // bit 2 - 1DOGEC+1
    // bit 3 - .1DOGEC+1
    // bit 3 - non-denom


    strDenom = "";

    if (nDenom & (1 << 0)) {
        if (strDenom.size() > 0) strDenom += "+";
        strDenom += "100";
    }

    if (nDenom & (1 << 1)) {
        if (strDenom.size() > 0) strDenom += "+";
        strDenom += "10";
    }

    if (nDenom & (1 << 2)) {
        if (strDenom.size() > 0) strDenom += "+";
        strDenom += "1";
    }

    if (nDenom & (1 << 3)) {
        if (strDenom.size() > 0) strDenom += "+";
        strDenom += "0.1";
    }
}

int CObfuscationPool::GetDenominations(const std::vector<CTxDSOut>& vout)
{
    std::vector<CTxOut> vout2;

    BOOST_FOREACH (CTxDSOut out, vout)
        vout2.push_back(out);

    return GetDenominations(vout2);
}

// return a bitshifted integer representing the denominations in this list
int CObfuscationPool::GetDenominations(const std::vector<CTxOut>& vout, bool fSingleRandomDenom)
{
    std::vector<pair<int64_t, int> > denomUsed;

    // make a list of denominations, with zero uses
    BOOST_FOREACH (int64_t d, obfuScationDenominations)
        denomUsed.push_back(make_pair(d, 0));

    // look for denominations and update uses to 1
    BOOST_FOREACH (CTxOut out, vout) {
        bool found = false;
        BOOST_FOREACH (PAIRTYPE(int64_t, int) & s, denomUsed) {
            if (out.nValue == s.first) {
                s.second = 1;
                found = true;
            }
        }
        if (!found) return 0;
    }

    int denom = 0;
    int c = 0;
    // if the denomination is used, shift the bit on.
    // then move to the next
    BOOST_FOREACH (PAIRTYPE(int64_t, int) & s, denomUsed) {
        int bit = (fSingleRandomDenom ? rand() % 2 : 1) * s.second;
        denom |= bit << c++;
        if (fSingleRandomDenom && bit) break; // use just one random denomination
    }

    // Function returns as follows:
    //
    // bit 0 - 100DOGEC+1 ( bit on if present )
    // bit 1 - 10DOGEC+1
    // bit 2 - 1DOGEC+1
    // bit 3 - .1DOGEC+1

    return denom;
}


int CObfuscationPool::GetDenominationsByAmounts(std::vector<CAmount>& vecAmount)
{
    CScript e = CScript();
    std::vector<CTxOut> vout1;

    // Make outputs by looping through denominations, from small to large
    BOOST_REVERSE_FOREACH (CAmount v, vecAmount) {
        CTxOut o(v, e);
        vout1.push_back(o);
    }

    return GetDenominations(vout1, true);
}

int CObfuscationPool::GetDenominationsByAmount(CAmount nAmount, int nDenomTarget)
{
    CScript e = CScript();
    CAmount nValueLeft = nAmount;

    std::vector<CTxOut> vout1;

    // Make outputs by looping through denominations, from small to large
    BOOST_REVERSE_FOREACH (CAmount v, obfuScationDenominations) {
        if (nDenomTarget != 0) {
            bool fAccepted = false;
            if ((nDenomTarget & (1 << 0)) && v == ((100 * COIN) + 100000)) {
                fAccepted = true;
            } else if ((nDenomTarget & (1 << 1)) && v == ((10 * COIN) + 10000)) {
                fAccepted = true;
            } else if ((nDenomTarget & (1 << 2)) && v == ((1 * COIN) + 1000)) {
                fAccepted = true;
            } else if ((nDenomTarget & (1 << 3)) && v == ((.1 * COIN) + 100)) {
                fAccepted = true;
            }
            if (!fAccepted) continue;
        }

        int nOutputs = 0;

        // add each output up to 10 times until it can't be added again
        while (nValueLeft - v >= 0 && nOutputs <= 10) {
            CTxOut o(v, e);
            vout1.push_back(o);
            nValueLeft -= v;
            nOutputs++;
        }
        LogPrintf("GetDenominationsByAmount --- %d nOutputs %d\n", v, nOutputs);
    }

    return GetDenominations(vout1);
}

std::string CObfuscationPool::GetMessageByID(int messageID)
{
    switch (messageID) {
    case ERR_ALREADY_HAVE:
        return _("Already have that input.");
    case ERR_DENOM:
        return _("No matching denominations found for mixing.");
    case ERR_ENTRIES_FULL:
        return _("Entries are full.");
    case ERR_EXISTING_TX:
        return _("Not compatible with existing transactions.");
    case ERR_FEES:
        return _("Transaction fees are too high.");
    case ERR_INVALID_COLLATERAL:
        return _("Collateral not valid.");
    case ERR_INVALID_INPUT:
        return _("Input is not valid.");
    case ERR_INVALID_SCRIPT:
        return _("Invalid script detected.");
    case ERR_INVALID_TX:
        return _("Transaction not valid.");
    case ERR_MAXIMUM:
        return _("Value more than Obfuscation pool maximum allows.");
    case ERR_MN_LIST:
        return _("Not in the Masternode list.");
    case ERR_MODE:
        return _("Incompatible mode.");
    case ERR_NON_STANDARD_PUBKEY:
        return _("Non-standard public key detected.");
    case ERR_NOT_A_MN:
        return _("This is not a Masternode.");
    case ERR_QUEUE_FULL:
        return _("Masternode queue is full.");
    case ERR_RECENT:
        return _("Last Obfuscation was too recent.");
    case ERR_SESSION:
        return _("Session not complete!");
    case ERR_MISSING_TX:
        return _("Missing input transaction information.");
    case ERR_VERSION:
        return _("Incompatible version.");
    case MSG_SUCCESS:
        return _("Transaction created successfully.");
    case MSG_ENTRIES_ADDED:
        return _("Your entries added successfully.");
    case MSG_NOERR:
    default:
        return "";
    }
}

bool CObfuScationSigner::IsVinAssociatedWithPubkey(CTxIn& vin, CPubKey& pubkey)
{
    CScript payee2;
    payee2 = GetScriptForDestination(pubkey.GetID());

    CTransaction txVin;
    uint256 hash;
    if (GetTransaction(vin.prevout.hash, txVin, hash, true)) {
        BOOST_FOREACH (CTxOut out, txVin.vout) {
            if (out.nValue == Params().MasternodeCollateralLimit() * COIN) {
                if (out.scriptPubKey == payee2) return true;
            }
        }
    }

    return false;
}

bool CObfuScationSigner::SetKey(std::string strSecret, std::string& errorMessage, CKey& key, CPubKey& pubkey)
{
    CBitcoinSecret vchSecret;
    bool fGood = vchSecret.SetString(strSecret);

    if (!fGood) {
        errorMessage = _("Invalid private key.");
        return false;
    }

    key = vchSecret.GetKey();
    pubkey = key.GetPubKey();

    return true;
}

bool CObfuScationSigner::GetKeysFromSecret(std::string strSecret, CKey& keyRet, CPubKey& pubkeyRet)
{
    CBitcoinSecret vchSecret;

    if (!vchSecret.SetString(strSecret)) return false;

    keyRet = vchSecret.GetKey();
    pubkeyRet = keyRet.GetPubKey();

    return true;
}

bool CObfuScationSigner::SignMessage(std::string strMessage, std::string& errorMessage, vector<unsigned char>& vchSig, CKey key)
{
    CHashWriter ss(SER_GETHASH, 0);
    ss << strMessageMagic;
    ss << strMessage;

    if (!key.SignCompact(ss.GetHash(), vchSig)) {
        errorMessage = _("Signing failed.");
        return false;
    }

    return true;
}

bool CObfuScationSigner::VerifyMessage(CPubKey pubkey, vector<unsigned char>& vchSig, std::string strMessage, std::string& errorMessage)
{
    CHashWriter ss(SER_GETHASH, 0);
    ss << strMessageMagic;
    ss << strMessage;

    CPubKey pubkey2;
    if (!pubkey2.RecoverCompact(ss.GetHash(), vchSig)) {
        errorMessage = _("Error recovering public key.");
        return false;
    }

    if (fDebug && pubkey2.GetID() != pubkey.GetID())
        LogPrintf("CObfuScationSigner::VerifyMessage -- keys don't match: %s %s\n", pubkey2.GetID().ToString(), pubkey.GetID().ToString());

    return (pubkey2.GetID() == pubkey.GetID());
}

bool CObfuscationQueue::Sign()
{
    if (!fMasterNode) return false;

    std::string strMessage = vin.ToString() + std::to_string(nDenom) + std::to_string(time) + std::to_string(ready);

    CKey key2;
    CPubKey pubkey2;
    std::string errorMessage = "";

    if (!obfuScationSigner.SetKey(strMasterNodePrivKey, errorMessage, key2, pubkey2)) {
        LogPrintf("CObfuscationQueue():Relay - ERROR: Invalid Masternodeprivkey: '%s'\n", errorMessage);
        return false;
    }

    if (!obfuScationSigner.SignMessage(strMessage, errorMessage, vchSig, key2)) {
        LogPrintf("CObfuscationQueue():Relay - Sign message failed");
        return false;
    }

    if (!obfuScationSigner.VerifyMessage(pubkey2, vchSig, strMessage, errorMessage)) {
        LogPrintf("CObfuscationQueue():Relay - Verify message failed");
        return false;
    }

    return true;
}

bool CObfuscationQueue::Relay()
{
    LOCK(cs_vNodes);
    for (CNode* pnode : vNodes) {
        // always relay to everyone
        pnode->PushMessage("dsq", (*this));
    }

    return true;
}

void CObfuscationPool::RelayFinalTransaction(const int sessionID, const CTransaction& txNew)
{
    LOCK(cs_vNodes);
    for (CNode* pnode : vNodes) {
        pnode->PushMessage("dsf", sessionID, txNew);
    }
}

void CObfuscationPool::RelayStatus(const int sessionID, const int newState, const int newEntriesCount, const int newAccepted, const int errorID)
{
    LOCK(cs_vNodes);
    for (CNode* pnode : vNodes)
        pnode->PushMessage("dssu", sessionID, newState, newEntriesCount, newAccepted, errorID);
}

void CObfuscationPool::RelayCompletedTransaction(const int sessionID, const bool error, const int errorID)
{
    LOCK(cs_vNodes);
    for (CNode* pnode : vNodes)
        pnode->PushMessage("dsc", sessionID, error, errorID);
}

//TODO: Rename/move to core
void ThreadCheckObfuScationPool()
{
    if (fLiteMode) return; //disable all Obfuscation/Masternode related functionality

    // Make this thread recognisable as the wallet flushing thread
    RenameThread("pivx-obfuscation");

    unsigned int c = 0;

    while (true) {
        MilliSleep(1000);
        //LogPrintf("ThreadCheckObfuScationPool::check timeout\n");

        // try to sync from all available nodes, one step at a time
        masternodeSync.Process();

        if (masternodeSync.IsBlockchainSynced()) {
            c++;

            // check if we should activate or ping every few minutes,
            // start right after sync is considered to be done
            if (c % MASTERNODE_PING_SECONDS == 1) activeMasternode.ManageStatus();

            if (c % 60 == 0) {
                mnodeman.CheckAndRemove();
                mnodeman.ProcessMasternodeConnections();
                masternodePayments.CleanPaymentList();
                CleanTransactionLocksList();
            }

            //if(c % MASTERNODES_DUMP_SECONDS == 0) DumpMasternodes();

            obfuScationPool.CheckTimeout();
            obfuScationPool.CheckForCompleteQueue();
        }
    }
}

bool CObfuScationSigner::VerifyMessage(CPubKey pubkey, std::vector<unsigned char>& vchSig, std::string strMessage, std::string& errorMessage)
{
    CHashWriter ss(SER_GETHASH, 0);
    ss << strMessageMagic;
    ss << strMessage;

    CPubKey pubkey2;
    if (!pubkey2.RecoverCompact(ss.GetHash(), vchSig)) {
        errorMessage = _("Error recovering public key.");
        return false;
    }

    if (fDebug && pubkey2.GetID() != pubkey.GetID())
        LogPrintf("CObfuScationSigner::VerifyMessage -- keys don't match: %s %s\n", pubkey2.GetID().ToString(), pubkey.GetID().ToString());

    return (pubkey2.GetID() == pubkey.GetID());
}
