// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2015 The Bitcoin Core developers
// Copyright (c) 2021 The PIVX Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef PIVX_BLOCKASSEMBLER_H
#define PIVX_BLOCKASSEMBLER_H

#include "primitives/block.h"
#include "txmempool.h"

#include <stdint.h>
#include <memory>

class CBlockIndex;
class CChainParams;
class CReserveKey;
class CStakeableOutput;
class CScript;
class CWallet;

namespace Consensus { struct Params; };

struct CBlockTemplate
{
    CBlock block;
    std::vector<CAmount> vTxFees;
    std::vector<int64_t> vTxSigOps;
};

/** Generate a new block */
class BlockAssembler
{
private:
    // The constructed block template
    std::unique_ptr<CBlockTemplate> pblocktemplate;
    // A convenience pointer that always refers to the CBlock in pblocktemplate
    CBlock* pblock;

    // Configuration parameters for the block size
    unsigned int nBlockMaxSize, nBlockMinSize;

    // Information on the current status of the block
    uint64_t nBlockSize{0};
    uint64_t nBlockTx{0};
    unsigned int nBlockSigOps{0};
    CAmount nFees{0};
    CTxMemPool::setEntries inBlock;

    // Chain context for the block
    int nHeight{0};
    const CChainParams& chainparams;

    // Variables used for addScoreTxs and addPriorityTxs
    int lastFewTxs{0};
    bool blockFinished{false};

    // Keep track of block space used for shield txes
    unsigned int nSizeShielded = 0;

    // Whether should print priority by default or not
    const bool defaultPrintPriority;

public:
    BlockAssembler(const CChainParams& chainparams, const bool defaultPrintPriority);
    /** Construct a new block template with coinbase to scriptPubKeyIn */
    std::unique_ptr<CBlockTemplate> CreateNewBlock(const CScript& scriptPubKeyIn,
                                   CWallet* pwallet,
                                   bool fProofOfStake,
                                   std::vector<CStakeableOutput>* availableCoins = nullptr);

private:
    // utility functions
    /** Clear the block's state and prepare for assembling a new block */
    void resetBlock();
    /** Add a tx to the block */
    void AddToBlock(CTxMemPool::txiter iter);

    // Methods for how to add transactions to a block.
    /** Add transactions based on modified feerate */
    void addScoreTxs();
    /** Add transactions based on tx "priority" */
    void addPriorityTxs();
    /** Add the tip updated incremental merkle tree to the header */
    void appendSaplingTreeRoot();

    // helper function for addScoreTxs and addPriorityTxs
    /** Test if tx will still "fit" in the block */
    bool TestForBlock(CTxMemPool::txiter iter);
    /** Test if tx still has unconfirmed parents not yet in block */
    bool isStillDependent(CTxMemPool::txiter iter);
};

/** Modify the extranonce in a block */
void IncrementExtraNonce(std::shared_ptr<CBlock>& pblock, const CBlockIndex* pindexPrev, unsigned int& nExtraNonce);
int64_t UpdateTime(CBlockHeader* pblock, const Consensus::Params& consensusParams, const CBlockIndex* pindexPrev);
int32_t ComputeBlockVersion(const Consensus::Params& consensusParams, int nHeight);

// Visible for testing purposes only
bool CreateCoinbaseTx(CBlock* pblock, const CScript& scriptPubKeyIn, CBlockIndex* pindexPrev);

// Visible for testing purposes only
uint256 CalculateSaplingTreeRoot(CBlock* pblock, int nHeight, const CChainParams& chainparams);

#endif // PIVX_BLOCKASSEMBLER_H
