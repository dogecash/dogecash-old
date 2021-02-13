// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2020 The PIVX developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef FINALIZED_BUDGET_H
#define FINALIZED_BUDGET_H

#include "budget/budgetproposal.h"
#include "budget/finalizedbudgetvote.h"
#include "net.h"
#include "streams.h"

class CTxBudgetPayment;

static std::map<uint256, std::pair<uint256,int> > mapPayment_History;   // proposal hash --> (block hash, block height)

enum class TrxValidationStatus {
    InValid,         /** Transaction verification failed */
    Valid,           /** Transaction successfully verified */
    DoublePayment,   /** Transaction successfully verified, but includes a double-budget-payment */
    VoteThreshold    /** If not enough masternodes have voted on a finalized budget */
};

//
// Finalized Budget : Contains the suggested proposals to pay on a given block
//

class CFinalizedBudget
{
private:
    bool fAutoChecked; //If it matches what we see, we'll auto vote for it (masternode only)
    bool fValid;
    std::string strInvalid;

    // Functions used inside IsWellFormed/UpdateValid - setting strInvalid
    bool IsExpired(int nCurrentHeight);
    bool CheckStartEnd();
    bool CheckAmount(const CAmount& nTotalBudget);
    bool CheckName();

protected:
    std::map<uint256, CFinalizedBudgetVote> mapVotes;
    std::string strBudgetName;
    int nBlockStart;
    std::vector<CTxBudgetPayment> vecBudgetPayments;
    uint256 nFeeTXHash;
    std::string strProposals;

public:
    // Set in CBudgetManager::AddFinalizedBudget via CheckCollateral
    int64_t nTime;

    CFinalizedBudget();
    CFinalizedBudget(const std::string& name, int blockstart, const std::vector<CTxBudgetPayment>& vecBudgetPaymentsIn, const uint256& nfeetxhash);

    void CleanAndRemove();
    bool AddOrUpdateVote(const CFinalizedBudgetVote& vote, std::string& strError);
    UniValue GetVotesObject() const;
    void SetSynced(bool synced);    // sets fSynced on votes (true only if valid)

    // sync budget votes with a node
    void SyncVotes(CNode* pfrom, bool fPartial, int& nInvCount) const;

    // sets fValid and strInvalid, returns fValid
    bool UpdateValid(int nHeight);
    // Static checks that should be done only once - sets strInvalid
    bool IsWellFormed(const CAmount& nTotalBudget);
    bool IsValid() const  { return fValid; }
    void SetStrInvalid(const std::string& _strInvalid) { strInvalid = _strInvalid; }
    std::string IsInvalidReason() const { return strInvalid; }
    std::string IsInvalidLogStr() const { return strprintf("[%s (%s)]: %s", GetName(), GetProposalsStr(), IsInvalidReason()); }

    bool IsAutoChecked() const { return fAutoChecked; }
    void SetAutoChecked(bool _fAutoChecked) { fAutoChecked = _fAutoChecked; }

    void SetProposalsStr(const std::string _strProposals) { strProposals = _strProposals; }

    std::string GetName() const { return strBudgetName; }
    std::string GetProposalsStr() const { return strProposals; }
    std::vector<uint256> GetProposalsHashes() const;
    int GetBlockStart() const { return nBlockStart; }
    int GetBlockEnd() const { return nBlockStart + (int)(vecBudgetPayments.size() - 1); }
    const uint256& GetFeeTXHash() const { return nFeeTXHash;  }
    int GetVoteCount() const { return (int)mapVotes.size(); }
    std::vector<uint256> GetVotesHashes() const;
    bool IsPaidAlready(const uint256& nProposalHash, const uint256& nBlockHash, int nBlockHeight) const;
    TrxValidationStatus IsTransactionValid(const CTransaction& txNew, const uint256& nBlockHash, int nBlockHeight) const;
    bool GetBudgetPaymentByBlock(int64_t nBlockHeight, CTxBudgetPayment& payment) const;
    bool GetPayeeAndAmount(int64_t nBlockHeight, CScript& payee, CAmount& nAmount) const;

    // Check finalized budget proposals. Masternodes only (when voting on finalized budgets)
    bool CheckProposals(const std::map<uint256, CBudgetProposal>& mapWinningProposals) const;
    // Total amount paid out by this budget
    CAmount GetTotalPayout() const;

    uint256 GetHash() const
    {
        CHashWriter ss(SER_GETHASH, PROTOCOL_VERSION);
        ss << strBudgetName;
        ss << nBlockStart;
        ss << vecBudgetPayments;
        return ss.GetHash();
    }

    // Serialization for local DB
    ADD_SERIALIZE_METHODS;
    template <typename Stream, typename Operation>
    inline void SerializationOp(Stream& s, Operation ser_action)
    {
        READWRITE(LIMITED_STRING(strBudgetName, 20));
        READWRITE(nFeeTXHash);
        READWRITE(nTime);
        READWRITE(nBlockStart);
        READWRITE(vecBudgetPayments);
        READWRITE(fAutoChecked);
        READWRITE(mapVotes);
        READWRITE(strProposals);
    }

    // Serialization for network messages.
    bool ParseBroadcast(CDataStream& broadcast);
    CDataStream GetBroadcast() const;
    void Relay();

    // compare finalized budget by votes (sort tie with feeHash)
    bool operator>(const CFinalizedBudget& other) const;
    // compare finalized budget pointers
    static bool PtrGreater(CFinalizedBudget* a, CFinalizedBudget* b) { return *a > *b; }
};


/*
 * Budget Payment class
 */
class CTxBudgetPayment
{
public:
    uint256 nProposalHash;
    CScript payee;
    CAmount nAmount;

    CTxBudgetPayment()
    {
        payee = CScript();
        nAmount = 0;
        nProposalHash = UINT256_ZERO;
    }

    CTxBudgetPayment(const uint256& _nProposalHash, const CScript& _payee, const CAmount _nAmount) :
        nProposalHash(_nProposalHash),
        payee(_payee),
        nAmount(_nAmount)
    {}

    ADD_SERIALIZE_METHODS;

    //for saving to the serialized db
    template <typename Stream, typename Operation>
    inline void SerializationOp(Stream& s, Operation ser_action)
    {
        READWRITE(*(CScriptBase*)(&payee));
        READWRITE(nAmount);
        READWRITE(nProposalHash);
    }

    // compare payments by proposal hash
    inline bool operator>(const CTxBudgetPayment& other) const { return nProposalHash > other.nProposalHash; }

};

#endif
