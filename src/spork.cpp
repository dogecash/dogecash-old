// Copyright (c) 2014-2016 The Dash developers
// Copyright (c) 2016-2018 The PIVX developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "spork.h"
#include "base58.h"
#include "key.h"
#include "main.h"
#include "masternode-budget.h"
#include "net.h"
#include "protocol.h"
#include "sync.h"
#include "sporkdb.h"
#include "util.h"


class CSporkMessage;
class CSporkManager;

std::vector<CSporkDef> sporkDefs = {
    MAKE_SPORK_DEF(SPORK_2_SWIFTTX,                         0),             // ON
    MAKE_SPORK_DEF(SPORK_3_SWIFTTX_BLOCK_FILTERING,         0),             // ON
    MAKE_SPORK_DEF(SPORK_5_MAX_VALUE,                       1000),          // 1000 PIV
    MAKE_SPORK_DEF(SPORK_8_MASTERNODE_PAYMENT_ENFORCEMENT,  4070908800ULL), // OFF
    MAKE_SPORK_DEF(SPORK_9_MASTERNODE_BUDGET_ENFORCEMENT,   4070908800ULL), // OFF
    MAKE_SPORK_DEF(SPORK_10_MASTERNODE_PAY_UPDATED_NODES,   0),             // OFF
    MAKE_SPORK_DEF(SPORK_13_ENABLE_SUPERBLOCKS,             4070908800ULL), // OFF
    MAKE_SPORK_DEF(SPORK_14_NEW_PROTOCOL_ENFORCEMENT,       4070908800ULL), // OFF
    MAKE_SPORK_DEF(SPORK_15_NEW_PROTOCOL_ENFORCEMENT_2,     4070908800ULL), // OFF
    MAKE_SPORK_DEF(SPORK_16_ZEROCOIN_MAINTENANCE_MODE,      4070908800ULL), // OFF
    MAKE_SPORK_DEF(SPORK_17_COLDSTAKING_ENFORCEMENT,        4070908800ULL), // OFF
};

std::map<uint256, CSporkMessage> mapSporks;
std::map<int, CSporkMessage> mapSporksActive;

// dogecash: on startup load spork values from previous session if they exist in the sporkDB
void LoadSporksFromDB()
{
    for (int i = SPORK_START; i <= SPORK_END; ++i) {
        // Since not all spork IDs are in use, we have to exclude undefined IDs
        std::string strSpork = sporkManager.GetSporkNameByID(i);
        if (strSpork == "Unknown") continue;

        // attempt to read spork from sporkDB
        CSporkMessage spork;
        if (!pSporkDB->ReadSpork(i, spork)) {
            LogPrintf("%s : no previous value for %s found in database\n", __func__, strSpork);
            continue;
        }

        // add spork to memory
        mapSporks[spork.GetHash()] = spork;
        mapSporksActive[spork.nSporkID] = spork;
        std::time_t result = spork.nValue;
        // If SPORK Value is greater than 1,000,000 assume it's actually a Date and then convert to a more readable format
        if (spork.nValue > 1000000) {
            LogPrintf("%s : loaded spork %s with value %d : %s", __func__,
                      sporkManager.GetSporkNameByID(spork.nSporkID), spork.nValue,
                      std::ctime(&result));
        } else {
            LogPrintf("%s : loaded spork %s with value %d\n", __func__,
                      sporkManager.GetSporkNameByID(spork.nSporkID), spork.nValue);
        }
    }
}

void ProcessSpork(CNode* pfrom, std::string& strCommand, CDataStream& vRecv)
{
    if (fLiteMode) return; //disable all obfuscation/masternode related functionality

    if (strCommand == "spork") {
        //LogPrintf("ProcessSpork::spork\n");
        CDataStream vMsg(vRecv);
        CSporkMessage spork;
        vRecv >> spork;

        if (chainActive.Tip() == NULL) return;

        // Ignore spork messages about unknown/deleted sporks
        std::string strSpork = sporkManager.GetSporkNameByID(spork.nSporkID);
        if (strSpork == "Unknown") return;

        // Do not accept sporks signed way too far into the future
        if (spork.nTimeSigned > GetAdjustedTime() + 2 * 60 * 60) {
            LOCK(cs_main);
            LogPrintf("%s : ERROR: too far into the future\n", __func__);
            Misbehaving(pfrom->GetId(), 100);
            return;
        }

        // reject old signatures 600 blocks after hard-fork
        if (spork.nMessVersion != MessageVersion::MESS_VER_HASH) {
            int nHeight;
            {
                LOCK(cs_main);
                nHeight = chainActive.Height();
            }
            if (Params().NewSigsActive(nHeight - 600)) {
                LogPrintf("%s : nMessVersion=%d not accepted anymore at block %d", __func__, spork.nMessVersion, nHeight);
                return;
            }
        }


        uint256 hash = spork.GetHash();
        if (mapSporksActive.count(spork.nSporkID)) {
            if (mapSporksActive[spork.nSporkID].nTimeSigned >= spork.nTimeSigned) {
                if (fDebug) LogPrintf("%s : seen %s block %d \n", __func__, hash.ToString(), chainActive.Tip()->nHeight);
                return;
            } else {
                if (fDebug) LogPrintf("%s : got updated spork %s block %d \n", __func__, hash.ToString(), chainActive.Tip()->nHeight);
            }
        }

        LogPrintf("%s : new %s ID %d Time %d bestHeight %d\n", __func__, hash.ToString(), spork.nSporkID, spork.nValue, chainActive.Tip()->nHeight);

        const bool fRequireNew = spork.nTimeSigned >= Params().NewSporkStart();
        bool fValidSig = spork.CheckSignature();
        if (!fValidSig && !fRequireNew) {
            // See if window is open that allows for old spork key to sign messages
            if (GetAdjustedTime() < Params().RejectOldSporkKey()) {
                CPubKey pubkeyold = spork.GetPublicKeyOld();
                fValidSig = spork.CheckSignature(pubkeyold);
            }
        }

        if (!fValidSig) {
            LOCK(cs_main);
            LogPrintf("%s : Invalid Signature\n", __func__);
            Misbehaving(pfrom->GetId(), 100);
            return;
        }

        mapSporks[hash] = spork;
        mapSporksActive[spork.nSporkID] = spork;
        sporkManager.Relay(spork);

        // PIVX: add to spork database.
        pSporkDB->WriteSpork(spork.nSporkID, spork);
    }
    if (strCommand == "getsporks") {
        std::map<int, CSporkMessage>::iterator it = mapSporksActive.begin();

        while (it != mapSporksActive.end()) {
            pfrom->PushMessage("spork", it->second);
            it++;
        }
    }
}


// grab the value of the spork on the network, or the default
int64_t GetSporkValue(int nSporkID)
{
    bool fNewSigs = false;
    {
        LOCK(cs_main);
        fNewSigs = chainActive.NewSigsActive();
    }


    CSporkMessage spork = CSporkMessage(nSporkID, nValue, GetTime());

    if(spork.Sign(strMasterPrivKey, fNewSigs)){
        spork.Relay();
        LOCK(cs);
        mapSporks[spork.GetHash()] = spork;
        mapSporksActive[nSporkID] = spork;
        return true;
    }

    return r;
}

// grab the spork value, and see if it's off
bool IsSporkActive(int nSporkID)
{
    int64_t r = GetSporkValue(nSporkID);
    if (r == -1) return false;
    return r < GetTime();
}


void ReprocessBlocks(int nBlocks)
{
    std::map<uint256, int64_t>::iterator it = mapRejectedBlocks.begin();
    while (it != mapRejectedBlocks.end()) {
        //use a window twice as large as is usual for the nBlocks we want to reset
        if ((*it).second > GetTime() - (nBlocks * 60 * 5)) {
            BlockMap::iterator mi = mapBlockIndex.find((*it).first);
            if (mi != mapBlockIndex.end() && (*mi).second) {
                LOCK(cs_main);

                CBlockIndex* pindex = (*mi).second;
                LogPrintf("ReprocessBlocks - %s\n", (*it).first.ToString());

                CValidationState state;
                ReconsiderBlock(state, pindex);
            }
        }
        ++it;
    }

    CValidationState state;
    {
        LOCK(cs_main);
        DisconnectBlocksAndReprocess(nBlocks);
    }

    if (state.IsValid()) {
        ActivateBestChain(state);
    }
}

bool CSporkManager::CheckSignature(CSporkMessage& spork, bool fCheckSigner)
{
    //note: need to investigate why this is failing
    std::string strMessage = std::to_string(spork.nSporkID) + std::to_string(spork.nValue) + std::to_string(spork.nTimeSigned);
    CPubKey pubkeynew(ParseHex(Params().SporkKey()));
    std::string errorMessage = "";

    spork.Sign(strPrivKey, true);

    bool fValidSig = spork.CheckSignature();
    if (fValidSig) {
        LOCK(cs);
        // Test signing successful, proceed
        LogPrintf("%s : Successfully initialized as spork signer\n", __func__);
        strMasterPrivKey = strPrivKey;
        return true;
    }

    return fValidWithNewKey;
}

bool CSporkManager::Sign(CSporkMessage& spork)
{
    std::string strMessage = std::to_string(spork.nSporkID) + std::to_string(spork.nValue) + std::to_string(spork.nTimeSigned);

uint256 CSporkMessage::GetSignatureHash() const
{
    CSporkMessage msg;
    msg.nSporkID = nSporkID;
    msg.nValue = nValue;
    msg.nTimeSigned = GetTime();

    spork.Sign(strPrivKey, true);
    const bool fRequireNew = GetTime() >= Params().NewSporkStart();
    bool fValidSig = spork.CheckSignature();
    if (!fValidSig && !fRequireNew) {
    // See if window is open that allows for old spork key to sign messages
    if (GetAdjustedTime() < Params().RejectOldSporkKey()) {
        CPubKey pubkeyold = spork.GetPublicKeyOld();
        fValidSig = spork.CheckSignature(pubkeyold);
        }
    }
    if (fValidSig) {
        LOCK(cs);
        // Test signing successful, proceed
        LogPrintf("%s : Successfully initialized as spork signer\n", __func__);
        strMasterPrivKey = strPrivKey;
        return true;
    }

    return false;
}

std::string CSporkMessage::GetStrMessage() const
{
    return std::to_string(nSporkID) +
            std::to_string(nValue) +
            std::to_string(nTimeSigned);
}

const CPubKey CSporkMessage::GetPublicKey(std::string& strErrorRet) const
{
    return CPubKey(ParseHex(Params().SporkPubKey()));
}

const CPubKey CSporkMessage::GetPublicKeyOld() const
{
    return CPubKey(ParseHex(Params().SporkPubKeyOld()));
}

std::string CSporkManager::GetSporkNameByID(int id)
{
    if (id == SPORK_2_SWIFTTX) return "SPORK_2_SWIFTTX";
    if (id == SPORK_3_SWIFTTX_BLOCK_FILTERING) return "SPORK_3_SWIFTTX_BLOCK_FILTERING";
    if (id == SPORK_5_MAX_VALUE) return "SPORK_5_MAX_VALUE";
    if (id == SPORK_7_MASTERNODE_SCANNING) return "SPORK_7_MASTERNODE_SCANNING";
    if (id == SPORK_8_MASTERNODE_PAYMENT_ENFORCEMENT) return "SPORK_8_MASTERNODE_PAYMENT_ENFORCEMENT";
    if (id == SPORK_9_MASTERNODE_BUDGET_ENFORCEMENT) return "SPORK_9_MASTERNODE_BUDGET_ENFORCEMENT";
    if (id == SPORK_10_MASTERNODE_PAY_UPDATED_NODES) return "SPORK_10_MASTERNODE_PAY_UPDATED_NODES";
    if (id == SPORK_13_ENABLE_SUPERBLOCKS) return "SPORK_13_ENABLE_SUPERBLOCKS";
    if (id == SPORK_14_NEW_PROTOCOL_ENFORCEMENT) return "SPORK_14_NEW_PROTOCOL_ENFORCEMENT";
    if (id == SPORK_15_NEW_PROTOCOL_ENFORCEMENT_2) return "SPORK_15_NEW_PROTOCOL_ENFORCEMENT_2";
    if (id == SPORK_16_ZEROCOIN_MAINTENANCE_MODE) return "SPORK_16_ZEROCOIN_MAINTENANCE_MODE";

    return "Unknown";
}
