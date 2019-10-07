// Copyright (c) 2017-2018 The PIVX developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZDOGECCONTROLDIALOG_H
#define ZDOGECCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zdogec/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZDOGECControlDialog;
}

class CZDogeCControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZDogeCControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZDogeCControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZDogeCControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZDOGECControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZDOGECControlDialog(QWidget *parent);
    ~ZDOGECControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZDOGECControlDialog *ui;
    WalletModel* model;

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
    friend class CZDogeCControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZDOGECCONTROLDIALOG_H
