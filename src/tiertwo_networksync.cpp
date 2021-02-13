// Copyright (c) 2020 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#include "masternode-sync.h"

#include "spork.h"  // for sporkManager
#include "masternodeman.h" // for mnodeman
#include "netmessagemaker.h"
#include "net_processing.h" // for Misbehaving
#include "streams.h"  // for CDataStream


// Update in-flight message status if needed
bool CMasternodeSync::UpdatePeerSyncState(const NodeId& id, const char* msg, const int nextSyncStatus)
{
    auto it = peersSyncState.find(id);
    if (it != peersSyncState.end()) {
        auto peerData = it->second;
        auto msgMapIt = peerData.mapMsgData.find(msg);
        if (msgMapIt != peerData.mapMsgData.end()) {
            // exists, let's update the received status and the sync state.

            // future: these boolean will not be needed once the peer syncState status gets implemented.
            msgMapIt->second.second = true;
            LogPrintf("%s: %s message updated peer sync state\n", __func__, msgMapIt->first);

            // Only update sync status if we really need it. Otherwise, it's just good redundancy to verify data several times.
            if (RequestedMasternodeAssets < nextSyncStatus) {
                // todo: this should only happen if more than N peers have sent the data.
                // move overall tier two sync state to the next one if needed.
                LogPrintf("%s: moving to next assset %s\n", __func__, nextSyncStatus);
                RequestedMasternodeAssets = nextSyncStatus;
            }
            return true;
        }
    }
    return false;
}

bool CMasternodeSync::MessageDispatcher(CNode* pfrom, std::string& strCommand, CDataStream& vRecv)
{
    if (strCommand == NetMsgType::GETSPORKS) {
        // send sporks
        sporkManager.ProcessGetSporks(pfrom, strCommand, vRecv);
        return true;
    }

    if (strCommand == NetMsgType::GETMNLIST) {
        // Get Masternode list or specific entry
        CTxIn vin;
        vRecv >> vin;
        int banScore = mnodeman.ProcessGetMNList(pfrom, vin);
        if (banScore > 0) {
            LOCK(cs_main);
            Misbehaving(pfrom->GetId(), banScore);
        }
        return true;
    }

    if (strCommand == NetMsgType::SPORK) {
        // as there is no completion message, this is using a SPORK_INVALID as final message for now.
        // which is just a hack, should be replaced with another message, guard it until the protocol gets deployed on mainnet and
        // add compatibility with the previous protocol as well.
        CSporkMessage spork;
        vRecv >> spork;
        int banScore = sporkManager.ProcessSporkMsg(spork);
        if (banScore > 0) {
            LOCK(cs_main);
            Misbehaving(pfrom->GetId(), banScore);
            return true;
        }
        // All good, Update in-flight message status if needed
        if (!UpdatePeerSyncState(pfrom->GetId(), NetMsgType::GETSPORKS, MASTERNODE_SYNC_LIST)) {
            // This could happen because of the message thread is requesting the sporks alone..
            // So.. for now, can just update the peer status and move it to the next state if the end message arrives
            if (spork.nSporkID == SPORK_INVALID) {
                if (RequestedMasternodeAssets < MASTERNODE_SYNC_LIST) {
                    // future note: use internal cs for RequestedMasternodeAssets.
                    RequestedMasternodeAssets = MASTERNODE_SYNC_LIST;
                }
            }
        }
        return true;
    }

    if (strCommand == NetMsgType::SYNCSTATUSCOUNT) {
        // Nothing to do.
        if (RequestedMasternodeAssets >= MASTERNODE_SYNC_FINISHED) return true;

        // Sync status count
        int nItemID;
        int nCount;
        vRecv >> nItemID >> nCount;

        // this means we will receive no further communication on the first sync
        switch (nItemID) {
            case MASTERNODE_SYNC_LIST: {
                UpdatePeerSyncState(pfrom->GetId(), NetMsgType::GETMNLIST, MASTERNODE_SYNC_MNW);
                return true;
            }
            case MASTERNODE_SYNC_MNW: {
                UpdatePeerSyncState(pfrom->GetId(), NetMsgType::GETMNWINNERS, MASTERNODE_SYNC_BUDGET);
                return true;
            }
            case MASTERNODE_SYNC_BUDGET_PROP: {
                // TODO: This could be a MASTERNODE_SYNC_BUDGET_FIN as well, possibly should decouple the finalization budget sync
                //  from the MASTERNODE_SYNC_BUDGET_PROP (both are under the BUDGETVOTESYNC message)
                UpdatePeerSyncState(pfrom->GetId(), NetMsgType::BUDGETVOTESYNC, MASTERNODE_SYNC_FINISHED);
                return true;
            }
            case MASTERNODE_SYNC_BUDGET_FIN: {
                // No need to handle this one, is handled by the proposals sync message for now..
                return true;
            }
        }
    }

    return false;
}

template <typename... Args>
void CMasternodeSync::PushMessage(CNode* pnode, const char* msg, Args&&... args)
{
    g_connman->PushMessage(pnode, CNetMsgMaker(pnode->GetSendVersion()).Make(msg, std::forward<Args>(args)...));
}

template <typename... Args>
void CMasternodeSync::RequestDataTo(CNode* pnode, const char* msg, bool forceRequest, Args&&... args)
{
    const auto& it = peersSyncState.find(pnode->id);
    bool exist = it != peersSyncState.end();
    if (!exist || forceRequest) {
        // Erase it if this is a forced request
        if (exist) {
            peersSyncState.at(pnode->id).mapMsgData.erase(msg);
        }
        // send the message
        PushMessage(pnode, msg, std::forward<Args>(args)...);

        // Add data to the tier two peers sync state
        TierTwoPeerData peerData;
        peerData.mapMsgData.emplace(msg, std::make_pair(GetTime(), false));
        peersSyncState.emplace(pnode->id, peerData);
    } else {
        // Check if we have sent the message or not
        TierTwoPeerData& peerData = it->second;
        const auto& msgMapIt = peerData.mapMsgData.find(msg);

        if (msgMapIt == peerData.mapMsgData.end()) {
            // message doesn't exist, push it and add it to the map.
            PushMessage(pnode, msg, std::forward<Args>(args)...);
            peerData.mapMsgData.emplace(msg, std::make_pair(GetTime(), false));
        } else {
            // message sent, next step: need to check if it was already answered or not.
            // And, if needed, request it again every certain amount of time.

            // Check if the node answered the message or not
            if (!msgMapIt->second.second) {
                int64_t lastRequestTime = msgMapIt->second.first;
                if (lastRequestTime + 600 < GetTime()) {
                    // ten minutes passed. Let's ask it again.
                    RequestDataTo(pnode, msg, true, std::forward<Args>(args)...);
                }
            }

        }
    }
}

void CMasternodeSync::SyncRegtest(CNode* pnode)
{
    // Initial sync, verify that the other peer answered to all of the messages successfully
    if (RequestedMasternodeAssets == MASTERNODE_SYNC_SPORKS) {
        RequestDataTo(pnode, NetMsgType::GETSPORKS, false);
    } else if (RequestedMasternodeAssets == MASTERNODE_SYNC_LIST) {
        RequestDataTo(pnode, NetMsgType::GETMNLIST, false, CTxIn());
    } else if (RequestedMasternodeAssets == MASTERNODE_SYNC_MNW) {
        RequestDataTo(pnode, NetMsgType::GETMNWINNERS, false, mnodeman.CountEnabled());
    } else if (RequestedMasternodeAssets == MASTERNODE_SYNC_BUDGET) {
        // sync masternode votes
        RequestDataTo(pnode, NetMsgType::BUDGETVOTESYNC, false, uint256());
    } else if (RequestedMasternodeAssets == MASTERNODE_SYNC_FINISHED) {
        LogPrintf("REGTEST SYNC FINISHED!\n");
    }
}

