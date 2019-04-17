// Copyright (c) 2017-2018 The DogeCash developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef zDOGECCONTROLDIALOG_H
#define zDOGECCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zDOGEC/zerocoin.h"
#include "privacydialog.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class zDOGECControlDialog;
}

class CzDOGECControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CzDOGECControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CzDOGECControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CzDOGECControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class zDOGECControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit zDOGECControlDialog(QWidget *parent);
    ~zDOGECControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::zDOGECControlDialog *ui;
    WalletModel* model;
    PrivacyDialog* privacyDialog;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_PRECOMPUTE,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CzDOGECControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // zDOGECCONTROLDIALOG_H
