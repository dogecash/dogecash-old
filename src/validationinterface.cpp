// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Bitcoin Core developers
// Copyright (c) 2017-2019 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "validationinterface.h"

#include <unordered_map>
#include <boost/signals2/signal.hpp>

struct ValidationInterfaceConnections {
    boost::signals2::scoped_connection UpdatedBlockTip;
    boost::signals2::scoped_connection TransactionAddedToMempool;
    boost::signals2::scoped_connection BlockConnected;
    boost::signals2::scoped_connection BlockDisconnected;
    boost::signals2::scoped_connection NotifyTransactionLock;
    boost::signals2::scoped_connection UpdatedTransaction;
    boost::signals2::scoped_connection SetBestChain;
    boost::signals2::scoped_connection Broadcast;
    boost::signals2::scoped_connection BlockChecked;
};

struct MainSignalsInstance {

    /** Notifies listeners of updated block chain tip */
    boost::signals2::signal<void (const CBlockIndex *, const CBlockIndex *, bool fInitialDownload)> UpdatedBlockTip;
    /** Notifies listeners of a transaction having been added to mempool. */
    boost::signals2::signal<void (const CTransactionRef &)> TransactionAddedToMempool;
    /**
     * Notifies listeners of a block being connected.
     * Provides a vector of transactions evicted from the mempool as a result.
     */
    boost::signals2::signal<void (const std::shared_ptr<const CBlock> &, const CBlockIndex *pindex, const std::vector<CTransactionRef> &)> BlockConnected;
    /** Notifies listeners of a block being disconnected */
    boost::signals2::signal<void (const std::shared_ptr<const CBlock> &, int nBlockHeight)> BlockDisconnected;
    /** Notifies listeners of an updated transaction lock without new data. */
    boost::signals2::signal<void (const CTransaction &)> NotifyTransactionLock;
    /** Notifies listeners of an updated transaction without new data (for now: a coinbase potentially becoming visible). */
    boost::signals2::signal<bool (const uint256 &)> UpdatedTransaction;
    /** Notifies listeners of a new active block chain. */
    boost::signals2::signal<void (const CBlockLocator &)> SetBestChain;
    /** Tells listeners to broadcast their data. */
    boost::signals2::signal<void (CConnman* connman)> Broadcast;
    /** Notifies listeners of a block validation result */
    boost::signals2::signal<void (const CBlock&, const CValidationState&)> BlockChecked;

    std::unordered_map<CValidationInterface*, ValidationInterfaceConnections> m_connMainSignals;
};

static CMainSignals g_signals;

CMainSignals::CMainSignals() {
    m_internals.reset(new MainSignalsInstance());
}

CMainSignals& GetMainSignals()
{
    return g_signals;
}

void RegisterValidationInterface(CValidationInterface* pwalletIn)
{
    ValidationInterfaceConnections& conns = g_signals.m_internals->m_connMainSignals[pwalletIn];
    conns.UpdatedBlockTip = g_signals.m_internals->UpdatedBlockTip.connect(std::bind(&CValidationInterface::UpdatedBlockTip, pwalletIn, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));
    conns.TransactionAddedToMempool = g_signals.m_internals->TransactionAddedToMempool.connect(std::bind(&CValidationInterface::TransactionAddedToMempool, pwalletIn, std::placeholders::_1));
    conns.BlockConnected = g_signals.m_internals->BlockConnected.connect(std::bind(&CValidationInterface::BlockConnected, pwalletIn, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));
    conns.BlockDisconnected = g_signals.m_internals->BlockDisconnected.connect(std::bind(&CValidationInterface::BlockDisconnected, pwalletIn, std::placeholders::_1, std::placeholders::_2));
    conns.NotifyTransactionLock = g_signals.m_internals->NotifyTransactionLock.connect(std::bind(&CValidationInterface::NotifyTransactionLock, pwalletIn, std::placeholders::_1));
    conns.UpdatedTransaction = g_signals.m_internals->UpdatedTransaction.connect(std::bind(&CValidationInterface::UpdatedTransaction, pwalletIn, std::placeholders::_1));
    conns.SetBestChain = g_signals.m_internals->SetBestChain.connect(std::bind(&CValidationInterface::SetBestChain, pwalletIn, std::placeholders::_1));
    conns.Broadcast = g_signals.m_internals->Broadcast.connect(std::bind(&CValidationInterface::ResendWalletTransactions, pwalletIn, std::placeholders::_1));
    conns.BlockChecked = g_signals.m_internals->BlockChecked.connect(std::bind(&CValidationInterface::BlockChecked, pwalletIn, std::placeholders::_1, std::placeholders::_2));
}

void UnregisterValidationInterface(CValidationInterface* pwalletIn)
{
    if (g_signals.m_internals) {
        g_signals.m_internals->m_connMainSignals.erase(pwalletIn);
    }
}

void UnregisterAllValidationInterfaces()
{
    if (!g_signals.m_internals) {
        return;
    }
    g_signals.m_internals->m_connMainSignals.clear();
}

void CMainSignals::UpdatedBlockTip(const CBlockIndex* pindexNew, const CBlockIndex* pindexFork, bool fInitialDownload) {
    m_internals->UpdatedBlockTip(pindexNew, pindexFork, fInitialDownload);
}

void CMainSignals::TransactionAddedToMempool(const CTransactionRef &ptxn) {
    m_internals->TransactionAddedToMempool(ptxn);
}

void CMainSignals::BlockConnected(const std::shared_ptr<const CBlock> &block, const CBlockIndex *pindex, const std::vector<CTransactionRef> &txnConflicted) {
    m_internals->BlockConnected(block, pindex, txnConflicted);
}

void CMainSignals::BlockDisconnected(const std::shared_ptr<const CBlock> &block, int nBlockHeight) {
    m_internals->BlockDisconnected(block, nBlockHeight);
}

void CMainSignals::NotifyTransactionLock(const CTransaction& tx) {
    m_internals->NotifyTransactionLock(tx);
}

void CMainSignals::UpdatedTransaction(const uint256& hash) {
    m_internals->UpdatedTransaction(hash);
}

void CMainSignals::SetBestChain(const CBlockLocator& locator) {
    m_internals->SetBestChain(locator);
}

void CMainSignals::Broadcast(CConnman* connman) {
    m_internals->Broadcast(connman);
}

void CMainSignals::BlockChecked(const CBlock& block, const CValidationState& state) {
    m_internals->BlockChecked(block, state);
}
