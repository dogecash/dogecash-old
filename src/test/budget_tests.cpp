// Copyright (c) 2018-2020 The PIVX developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "test_pivx.h"

#include "budget/budgetmanager.h"
#include "tinyformat.h"
#include "utilmoneystr.h"
#include "validation.h"

#include <boost/test/unit_test.hpp>

class BudgetManagerTest : CBudgetManager
{
public:
    void ForceAddFinalizedBudget(CFinalizedBudget& finalizedBudget)
    {
        LOCK(cs_budgets);
        const uint256& nHash = finalizedBudget.GetHash();
        mapFinalizedBudgets.emplace(nHash, finalizedBudget);
        mapFeeTxToBudget.emplace(finalizedBudget.GetFeeTXHash(), nHash);
    }

    bool IsBlockValueValid(int nHeight, CAmount& nExpectedValue, CAmount nMinted, bool fSporkActive = true)
    {
        // suppose masternodeSync is complete
        if (fSporkActive) {
            // add current payee amount to the expected block value
            CAmount expectedPayAmount;
            if (GetExpectedPayeeAmount(nHeight, expectedPayAmount)) {
                nExpectedValue += expectedPayAmount;
            }
        }
        return nMinted <= nExpectedValue;
    }
};

BOOST_FIXTURE_TEST_SUITE(budget_tests, TestingSetup)

void CheckBudgetValue(int nHeight, std::string strNetwork, CAmount nExpectedValue)
{
    CBudgetManager budget;
    CAmount nBudget = g_budgetman.GetTotalBudget(nHeight);
    std::string strError = strprintf("Budget is not as expected for %s. Result: %s, Expected: %s", strNetwork, FormatMoney(nBudget), FormatMoney(nExpectedValue));
    BOOST_CHECK_MESSAGE(nBudget == nExpectedValue, strError);
}

BOOST_AUTO_TEST_CASE(budget_value)
{
    SelectParams(CBaseChainParams::TESTNET);
    int nHeightTest = Params().GetConsensus().vUpgrades[Consensus::UPGRADE_ZC_V2].nActivationHeight + 1;
    CheckBudgetValue(nHeightTest-1, "testnet", 7200*COIN);
    CheckBudgetValue(nHeightTest, "testnet", 144*COIN);

    SelectParams(CBaseChainParams::MAIN);
    nHeightTest = Params().GetConsensus().vUpgrades[Consensus::UPGRADE_ZC_V2].nActivationHeight + 1;
    CheckBudgetValue(nHeightTest, "mainnet", 43200*COIN);
}

BOOST_AUTO_TEST_CASE(block_value)
{
    BudgetManagerTest t_budgetman;
    SelectParams(CBaseChainParams::TESTNET);
    std::string strError;

    // regular block
    int nHeight = 100;
    CAmount nExpected = GetBlockValue(nHeight);
    BOOST_CHECK(t_budgetman.IsBlockValueValid(nHeight, nExpected, nExpected-1));
    BOOST_CHECK(t_budgetman.IsBlockValueValid(nHeight, nExpected, nExpected));
    BOOST_CHECK(!t_budgetman.IsBlockValueValid(nHeight, nExpected, nExpected+1));

    // superblock - create the finalized budget with a proposal, and vote on it
    nHeight = 144;
    nExpected = GetBlockValue(nHeight);
    const CTxIn mnVin(GetRandHash(), 0);
    const CScript payee = GetScriptForDestination(CKeyID(uint160(ParseHex("816115944e077fe7c803cfa57f29b36bf87c1d35"))));
    const CAmount propAmt = 100 * COIN;
    const uint256& propHash = GetRandHash(), finTxId = GetRandHash();
    const CTxBudgetPayment txBudgetPayment(propHash, payee, propAmt);
    CFinalizedBudget fin("main (test)", 144, {txBudgetPayment}, finTxId);
    const CFinalizedBudgetVote fvote(mnVin, fin.GetHash());
    BOOST_CHECK(fin.AddOrUpdateVote(fvote, strError));
    t_budgetman.ForceAddFinalizedBudget(fin);

    // check superblock's block-value
    BOOST_CHECK(t_budgetman.IsBlockValueValid(nHeight, nExpected, nExpected));
    BOOST_CHECK(t_budgetman.IsBlockValueValid(nHeight, nExpected, nExpected+propAmt-1));
    BOOST_CHECK(t_budgetman.IsBlockValueValid(nHeight, nExpected, nExpected+propAmt));
    BOOST_CHECK(!t_budgetman.IsBlockValueValid(nHeight, nExpected, nExpected+propAmt+1));

    // check with spork disabled
    nExpected = GetBlockValue(nHeight);
    BOOST_CHECK(t_budgetman.IsBlockValueValid(nHeight, nExpected, nExpected-1, false));
    BOOST_CHECK(t_budgetman.IsBlockValueValid(nHeight, nExpected, nExpected, false));
    BOOST_CHECK(!t_budgetman.IsBlockValueValid(nHeight, nExpected, nExpected+1, false));
    BOOST_CHECK(!t_budgetman.IsBlockValueValid(nHeight, nExpected, nExpected+propAmt, false));
}

BOOST_AUTO_TEST_SUITE_END()
