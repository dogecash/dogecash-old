// Copyright (c) 2017-2018 The dogecash developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef zdogecCONTROLDIALOG_H
#define zdogecCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zdogec/zerocoin.h"
#include "privacydialog.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class zdogecControlDialog;
}

class CzdogecControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CzdogecControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CzdogecControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CzdogecControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class zdogecControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit zdogecControlDialog(QWidget *parent);
    ~zdogecControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::zdogecControlDialog *ui;
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
    friend class CzdogecControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // zdogecCONTROLDIALOG_H
