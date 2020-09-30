//
// Created by furszy on 2019-10-04.
//

#ifndef FURSZY_DOGEC_GUITRANSACTIONSUTILS_H
#define FURSZY_DOGEC_GUITRANSACTIONSUTILS_H

#include "walletmodel.h"
#include "qt/dogecash/pwidget.h"


namespace GuiTransactionsUtils {

    // Process WalletModel::SendCoinsReturn and generate a pair consisting
    // of a message and message flags for use in emit message().
    // Additional parameter msgArg can be used via .arg(msgArg).
    void ProcessSendCoinsReturn(PWidget* parent, const WalletModel::SendCoinsReturn& sendCoinsReturn, WalletModel* walletModel, const QString& msgArg = QString(), bool fPrepare = false);

}


#endif //FURSZY_DOGEC_GUITRANSACTIONSUTILS_H