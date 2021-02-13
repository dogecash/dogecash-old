    // Copyright (c) 2017 The Dash Core developers
// Copyright (c) 2020 The PIVX Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef PIVX_SPECIALTX_H
#define PIVX_SPECIALTX_H

#include "streams.h"
#include "version.h"
#include "primitives/transaction.h"

class CBlock;
class CBlockIndex;
class CValidationState;
class uint256;

/** The maximum allowed size of the extraPayload (for any TxType) */
static const unsigned int MAX_SPECIALTX_EXTRAPAYLOAD = 10000;

/** Context-independent validity checks */
// Note: for +v2, if the tx is not a special tx, this method returns true.
// Note2: This function only performs extra payload related checks, it does NOT checks regular inputs and outputs.
bool CheckSpecialTx(const CTransaction& tx, CValidationState& state, bool fIsSaplingActive);

// Update internal tiertwo data when blocks containing special txes get connected/disconnected
bool ProcessSpecialTxsInBlock(const CBlock& block, const CBlockIndex* pindexPrev, CValidationState& state);
bool UndoSpecialTxsInBlock(const CBlock& block, const CBlockIndex* pindexPrev);

#endif //PIVX_SAPLING_VALIDATION_H
