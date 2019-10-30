// Copyright (c) 2014-2016 The Dash developers
// Copyright (c) 2016-2018 The PIVX developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SPORK_H
#define SPORK_H

#include "base58.h"
#include "key.h"
#include "main.h"
#include "net.h"
#include "sync.h"
#include "util.h"

#include "obfuscation.h"
#include "protocol.h"


class CSporkMessage;
class CSporkManager;

extern std::map<uint256, CSporkMessage> mapSporks;
extern std::map<int, CSporkMessage> mapSporksActive;
extern CSporkManager sporkManager;

void LoadSporksFromDB();
void ProcessSpork(CNode* pfrom, std::string& strCommand, CDataStream& vRecv);
int64_t GetSporkValue(int nSporkID);
bool IsSporkActive(int nSporkID);
void ReprocessBlocks(int nBlocks);

//
// Spork Class
// Keeps track of all of the network spork settings
//

class CSporkMessage
{
public:
    SporkId nSporkID;
    int64_t nValue;
    int64_t nTimeSigned;

    CSporkMessage() :
        CSignedMessage(),
        nSporkID((SporkId)0),
        nValue(0),
        nTimeSigned(0)
    {}

    CSporkMessage(SporkId nSporkID, int64_t nValue, int64_t nTimeSigned) :
        CSignedMessage(),
        nSporkID(nSporkID),
        nValue(nValue),
        nTimeSigned(nTimeSigned)
    { }

    uint256 GetHash() const { return HashQuark(BEGIN(nSporkID), END(nTimeSigned)); }

    // override CSignedMessage functions
    uint256 GetSignatureHash() const override;
    std::string GetStrMessage() const override;
    const CTxIn GetVin() const override { return CTxIn(); };

    // override GetPublicKey - gets Params().SporkPubkey()
    const CPubKey GetPublicKey(std::string& strErrorRet) const override;
    const CPubKey GetPublicKeyOld() const;

    void Relay();

    ADD_SERIALIZE_METHODS;

    template <typename Stream, typename Operation>
    inline void SerializationOp(Stream& s, Operation ser_action, int nType, int nVersion)
    {
        READWRITE(nSporkID);
        READWRITE(nValue);
        READWRITE(nTimeSigned);
        READWRITE(vchSig);
    }
};


class CSporkManager
{
private:
    std::vector<unsigned char> vchSig;
    std::string strMasterPrivKey;

public:
    CSporkManager()
    {
    }

    std::string GetSporkNameByID(int id);
    int GetSporkIDByName(std::string strName);
    bool UpdateSpork(int nSporkID, int64_t nValue);
    bool SetPrivKey(std::string strPrivKey);
    bool CheckSignature(CSporkMessage& spork, bool fCheckSigner = false);
    bool Sign(CSporkMessage& spork);
    void Relay(CSporkMessage& msg);
};

#endif
