// Copyright (c) 2019 The DogeCash developers
// Copyright (c) 2019 The DogeCash developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MASTERNODESWIDGET_H
#define MASTERNODESWIDGET_H

#include <QWidget>
#include "qt/dogecash/addressfilterproxymodel.h"
#include "qt/dogecash/pwidget.h"
#include "qt/dogecash/furabstractlistitemdelegate.h"
#include "qt/dogecash/mnmodel.h"
#include "qt/dogecash/mnrow.h"
#include "qt/dogecash/tooltipmenu.h"
#include <QTimer>
#include <atomic>

class DogeCashGUI;

namespace Ui {
class MasterNodesWidget;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

class MasterNodesWidget : public PWidget
{
    Q_OBJECT

public:

    explicit MasterNodesWidget(DogeCashGUI *parent = nullptr);
    ~MasterNodesWidget();

    void loadWalletModel() override;
    void run(int type) override;
    void onError(QString error, int type) override;
    void showEvent(QShowEvent *event) override;
    void hideEvent(QHideEvent *event) override;

private slots:
    void onCreateMNClicked();
    void changeTheme(bool isLightTheme, QString &theme) override;
    void onStartAllClicked(int type);
    void onMNClicked(const QModelIndex &index);
    void onEditMNClicked();
    void onDeleteMNClicked();
    void onInfoMNClicked();
    void updateListState();
    void updateModelAndInform(QString informText);
    void onSortChanged(int idx);
    void onSortOrderChanged(int idx);

private:
    Ui::MasterNodesWidget *ui;
    FurAbstractListItemDelegate *delegate;
    MNModel *mnModel = nullptr;
    TooltipMenu* menu = nullptr;
    QModelIndex index;
    QTimer *timer = nullptr;
    std::atomic<bool> isLoading;

    AddressTableModel* addressTableModel = nullptr;
    AddressFilterProxyModel *filter = nullptr;

    // Cached sort type and order
    AddressTableModel::ColumnIndex sortType = AddressTableModel::Label;
    Qt::SortOrder sortOrder = Qt::AscendingOrder;

    void startAlias(QString strAlias);
    bool startAll(QString& failedMN, bool onlyMissing);
    bool checkMNsNetwork();
    bool startMN(CMasternodeConfig::CMasternodeEntry mne, std::string& strError);
    void sortAddresses();
};

#endif // MASTERNODESWIDGET_H
