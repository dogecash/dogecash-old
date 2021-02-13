
// Copyright (c) 2017 The Dash Core developers
// Copyright (c) 2020 The PIVX Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "tiertwo/specialtx_validation.h"

#include "chain.h"
#include "chainparams.h"
#include "clientversion.h"
#include "consensus/validation.h"
#include "primitives/block.h"

bool CheckSpecialTx(const CTransaction& tx, CValidationState& state, bool fIsSaplingActive)
{
    bool hasExtraPayload = tx.hasExtraPayload();

    // Before Sapling activation, the tx has a single 32bit version and no type.
    // Versions > 1 are not standard, but still accepted. No TX can have extra payload.
    if (!fIsSaplingActive) {
        return !hasExtraPayload;
    }

    // After Sapling activation.
    // v1 can only be Type=0
    if (!tx.isSaplingVersion() && tx.nType != CTransaction::TxType::NORMAL) {
        return state.DoS(100, error("%s: Type %d not supported with version 0", __func__, tx.nType),
                         REJECT_INVALID, "bad-txns-type-version");
    }
    if (tx.nType == CTransaction::TxType::NORMAL) {
        // Type-0 txes don't have extra payload
        if (hasExtraPayload) {
            return state.DoS(100, error("%s: Type 0 doesn't support extra payload", __func__),
                             REJECT_INVALID, "bad-txns-type-payload");
        }
        // Normal transaction. Nothing to check
        return true;
    }

    // --- From here on, tx has nVersion>=2 and nType!=0

    // Special txes must have a non-empty payload
    if (!hasExtraPayload) {
        return state.DoS(100, error("%s: Special tx (type=%d) without extra payload", __func__, tx.nType),
                         REJECT_INVALID, "bad-txns-payload-empty");
    }

    // Size limits
    if (tx.extraPayload->size() > MAX_SPECIALTX_EXTRAPAYLOAD) {
        return state.DoS(100, error("%s: Special tx payload oversize (%d)", __func__, tx.extraPayload->size()),
                         REJECT_INVALID, "bad-txns-payload-oversize");
    }

    switch (tx.nType) {
    /* per-tx-type checking */
    }

    return state.DoS(10, error("%s : special tx %s with invalid type %d",
            __func__, tx.GetHash().ToString(), tx.nType), REJECT_INVALID, "bad-tx-type");
}

bool ProcessSpecialTxsInBlock(const CBlock& block, const CBlockIndex* pindexPrev, CValidationState& state)
{
    /* process special txes in batches */
    return true;
}

bool UndoSpecialTxsInBlock(const CBlock& block, const CBlockIndex* pindexPrev)
{
    /* undo special txes in batches */
    return true;
}
