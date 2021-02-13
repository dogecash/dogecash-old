// Copyright (c) 2020 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "zerocoin_verify.h"

#include "chainparams.h"
#include "consensus/consensus.h"
#include "guiinterface.h"        // for ui_interface
#include "init.h"                // for ShutdownRequested()
#include "invalid.h"
#include "script/interpreter.h"
#include "spork.h"               // for sporkManager
#include "txdb.h"
#include "upgrades.h"            // for IsActivationHeight
#include "utilmoneystr.h"        // for FormatMoney
#include "../validation.h"
#include "zpiv/zpivmodule.h"


bool CheckZerocoinSpend(const CTransaction& tx, bool fVerifySignature, CValidationState& state, bool fFakeSerialAttack)
{
    //max needed non-mint outputs should be 2 - one for redemption address and a possible 2nd for change
    if (tx.vout.size() > 2) {
        int outs = 0;
        for (const CTxOut& out : tx.vout) {
            if (out.IsZerocoinMint())
                continue;
            outs++;
        }
        if (outs > 2 && !tx.IsCoinStake())
            return state.DoS(100, error("CheckZerocoinSpend(): over two non-mint outputs in a zerocoinspend transaction"));
    }

    //compute the txout hash that is used for the zerocoinspend signatures
    CMutableTransaction txTemp;
    for (const CTxOut& out : tx.vout) {
        txTemp.vout.push_back(out);
    }
    uint256 hashTxOut = txTemp.GetHash();

    bool fValidated = false;
    const Consensus::Params& consensus = Params().GetConsensus();
    std::set<CBigNum> serials;
    CAmount nTotalRedeemed = 0;
    for (const CTxIn& txin : tx.vin) {

        //only check txin that is a zcspend
        bool isPublicSpend = txin.IsZerocoinPublicSpend();
        if (!txin.IsZerocoinSpend() && !isPublicSpend)
            continue;

        libzerocoin::CoinSpend newSpend;
        CTxOut prevOut;
        if (isPublicSpend) {
            if(!GetOutput(txin.prevout.hash, txin.prevout.n, state, prevOut)){
                return state.DoS(100, error("CheckZerocoinSpend(): public zerocoin spend prev output not found, prevTx %s, index %d", txin.prevout.hash.GetHex(), txin.prevout.n));
            }
            libzerocoin::ZerocoinParams* params = consensus.Zerocoin_Params(false);
            PublicCoinSpend publicSpend(params);
            if (!ZPIVModule::parseCoinSpend(txin, tx, prevOut, publicSpend)){
                return state.DoS(100, error("CheckZerocoinSpend(): public zerocoin spend parse failed"));
            }
            newSpend = publicSpend;
        } else {
            newSpend = TxInToZerocoinSpend(txin);
        }

        //check that the denomination is valid
        if (newSpend.getDenomination() == libzerocoin::ZQ_ERROR)
            return state.DoS(100, error("Zerocoinspend does not have the correct denomination"));

        //check that denomination is what it claims to be in nSequence
        if (newSpend.getDenomination() != txin.nSequence)
            return state.DoS(100, error("Zerocoinspend nSequence denomination does not match CoinSpend"));

        //make sure the txout has not changed
        if (newSpend.getTxOutHash() != hashTxOut)
            return state.DoS(100, error("Zerocoinspend does not use the same txout that was used in the SoK"));

        if (isPublicSpend) {
            libzerocoin::ZerocoinParams* params = consensus.Zerocoin_Params(false);
            PublicCoinSpend ret(params);
            if (!ZPIVModule::validateInput(txin, prevOut, tx, ret)){
                return state.DoS(100, error("CheckZerocoinSpend(): public zerocoin spend did not verify"));
            }
        }

        if (serials.count(newSpend.getCoinSerialNumber()))
            return state.DoS(100, error("Zerocoinspend serial is used twice in the same tx"));
        serials.insert(newSpend.getCoinSerialNumber());

        //make sure that there is no over redemption of coins
        nTotalRedeemed += libzerocoin::ZerocoinDenominationToAmount(newSpend.getDenomination());
        fValidated = true;
    }

    if (!tx.IsCoinStake() && nTotalRedeemed < tx.GetValueOut()) {
        LogPrintf("redeemed = %s , spend = %s \n", FormatMoney(nTotalRedeemed), FormatMoney(tx.GetValueOut()));
        return state.DoS(100, error("Transaction spend more than was redeemed in zerocoins"));
    }

    return fValidated;
}

bool isBlockBetweenFakeSerialAttackRange(int nHeight)
{
    if (Params().NetworkIDString() != CBaseChainParams::MAIN)
        return false;

    return nHeight <= Params().GetConsensus().height_last_ZC_WrappedSerials;
}

bool CheckPublicCoinSpendEnforced(int blockHeight, bool isPublicSpend)
{
    if (Params().GetConsensus().NetworkUpgradeActive(blockHeight, Consensus::UPGRADE_ZC_PUBLIC)) {
        // reject old coin spend
        if (!isPublicSpend) {
            return error("%s: failed to add block with older zc spend version", __func__);
        }

    } else {
        if (isPublicSpend) {
            return error("%s: failed to add block, public spend enforcement not activated", __func__);
        }
    }
    return true;
}

int CurrentPublicCoinSpendVersion() {
    return sporkManager.IsSporkActive(SPORK_18_ZEROCOIN_PUBLICSPEND_V4) ? 4 : 3;
}

bool CheckPublicCoinSpendVersion(int version) {
    return version == CurrentPublicCoinSpendVersion();
}

bool ContextualCheckZerocoinSpend(const CTransaction& tx, const libzerocoin::CoinSpend* spend, int nHeight, const uint256& hashBlock)
{
    if(!ContextualCheckZerocoinSpendNoSerialCheck(tx, spend, nHeight, hashBlock)){
        return false;
    }

    //Reject serial's that are already in the blockchain
    int nHeightTx = 0;
    if (IsSerialInBlockchain(spend->getCoinSerialNumber(), nHeightTx))
        return error("%s : zPIV spend with serial %s is already in block %d\n", __func__,
                     spend->getCoinSerialNumber().GetHex(), nHeightTx);

    return true;
}

bool ContextualCheckZerocoinSpendNoSerialCheck(const CTransaction& tx, const libzerocoin::CoinSpend* spend, int nHeight, const uint256& hashBlock)
{
    const Consensus::Params& consensus = Params().GetConsensus();
    //Check to see if the zPIV is properly signed
    if (consensus.NetworkUpgradeActive(nHeight, Consensus::UPGRADE_ZC_V2)) {
        try {
            if (!spend->HasValidSignature())
                return error("%s: V2 zPIV spend does not have a valid signature\n", __func__);
        } catch (const libzerocoin::InvalidSerialException& e) {
            // Check if we are in the range of the attack
            if(!isBlockBetweenFakeSerialAttackRange(nHeight))
                return error("%s: Invalid serial detected, txid %s, in block %d\n", __func__, tx.GetHash().GetHex(), nHeight);
            else
                LogPrintf("%s: Invalid serial detected within range in block %d\n", __func__, nHeight);
        }

        libzerocoin::SpendType expectedType = libzerocoin::SpendType::SPEND;
        if (tx.IsCoinStake())
            expectedType = libzerocoin::SpendType::STAKE;
        if (spend->getSpendType() != expectedType) {
            return error("%s: trying to spend zPIV without the correct spend type. txid=%s\n", __func__,
                         tx.GetHash().GetHex());
        }
    }

    bool fUseV1Params = spend->getCoinVersion() < libzerocoin::PrivateCoin::PUBKEY_VERSION;

    //Reject serial's that are not in the acceptable value range
    if (!spend->HasValidSerial(consensus.Zerocoin_Params(fUseV1Params)))  {
        // Up until this block our chain was not checking serials correctly..
        if (!isBlockBetweenFakeSerialAttackRange(nHeight))
            return error("%s : zPIV spend with serial %s from tx %s is not in valid range\n", __func__,
                     spend->getCoinSerialNumber().GetHex(), tx.GetHash().GetHex());
        else
            LogPrintf("%s:: HasValidSerial :: Invalid serial detected within range in block %d\n", __func__, nHeight);
    }


    return true;
}

