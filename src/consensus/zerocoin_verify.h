// Copyright (c) 2020 The DogeCash developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DogeCash_CONSENSUS_ZEROCOIN_VERIFY_H
#define DogeCash_CONSENSUS_ZEROCOIN_VERIFY_H

#include "consensus/consensus.h"
#include "main.h"
#include "script/interpreter.h"
#include "zdogecchain.h"

/** Context-independent validity checks */
bool CheckZerocoinSpend(const CTransaction& tx, bool fVerifySignature, CValidationState& state, bool fFakeSerialAttack = false);
// Fake Serial attack Range
bool isBlockBetweenFakeSerialAttackRange(int nHeight);
// Public coin spend
bool CheckPublicCoinSpendEnforced(int blockHeight, bool isPublicSpend);
int CurrentPublicCoinSpendVersion();
bool CheckPublicCoinSpendVersion(int version);
bool ContextualCheckZerocoinSpend(const CTransaction& tx, const libzerocoin::CoinSpend* spend, int nHeight, const uint256& hashBlock);
bool ContextualCheckZerocoinSpendNoSerialCheck(const CTransaction& tx, const libzerocoin::CoinSpend* spend, int nHeight, const uint256& hashBlock);
bool RecalculateDOGECSupply(int nHeightStart, bool fSkipZdogec = true);
CAmount GetInvalidUTXOValue();

#endif //DogeCash_CONSENSUS_ZEROCOIN_VERIFY_H
