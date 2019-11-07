// Copyright (c) 2019 The DogeCash developers
// Copyright (c) 2019 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "qt/dogecash/settings/settingsinformationwidget.h"
#include "qt/dogecash/settings/forms/ui_settingsinformationwidget.h"
#include "clientmodel.h"
#include "chainparams.h"
#include "db.h"
#include "util.h"
#include "guiutil.h"
#include "qt/dogecash/qtutils.h"
#include <QDir>

SettingsInformationWidget::SettingsInformationWidget(DogeCashGUI* _window,QWidget *parent) :
    PWidget(_window,parent),
    ui(new Ui::SettingsInformationWidget)
{
    ui->setupUi(this);

    this->setStyleSheet(parent->styleSheet());

    // Containers
    setCssProperty(ui->left, "container");
    ui->left->setContentsMargins(10,10,10,10);
    setCssProperty({ui->layoutOptions1, ui->layoutOptions2, ui->layoutOptions3}, "container-options");

    // Title
    ui->labelTitle->setText(tr("Information"));
    setCssTitleScreen(ui->labelTitle);

    ui->labelTitleGeneral->setText(tr("General"));
    ui->labelTitleClient->setText(tr("Client Version: "));
    ui->labelTitleAgent->setText(tr("User Agent:"));
    ui->labelTitleBerkeley->setText(tr("Using BerkeleyDB version:"));
    ui->labelTitleDataDir->setText(tr("Datadir: "));
    ui->labelTitleTime->setText(tr("Startup Time:  "));
    ui->labelTitleNetwork->setText(tr("Network"));
    ui->labelTitleName->setText(tr("Name:"));
    ui->labelTitleConnections->setText(tr("Number of Connections:"));
    ui->labelTitleMasternodes->setText(tr("Number of Masternodes:"));

    setCssProperty({
        ui->labelTitleDataDir,
        ui->labelTitleBerkeley,
        ui->labelTitleAgent,
        ui->labelTitleClient,
        ui->labelTitleTime,
        ui->labelTitleName,
        ui->labelTitleConnections,
        ui->labelTitleMasternodes,
        ui->labelTitleBlockNumber,
        ui->labelTitleBlockTime,
        ui->labelTitleBlockHash,
        ui->labelTitleNumberTransactions,
        ui->labelInfoNumberTransactions,
        ui->labelInfoClient,
        ui->labelInfoAgent,
        ui->labelInfoBerkeley,
        ui->labelInfoDataDir,
        ui->labelInfoTime,
        ui->labelInfoConnections,
        ui->labelInfoMasternodes,
        ui->labelInfoBlockNumber
        }, "text-main-settings");

    setCssProperty({
        ui->labelTitleGeneral,
        ui->labelTitleNetwork,
        ui->labelTitleBlockchain,
        ui->labelTitleMemory,

    },"text-title");

    ui->labelTitleBlockchain->setText(tr("Blockchain"));
    ui->labelTitleBlockNumber->setText(tr("Current Number of Blocks:"));
    ui->labelTitleBlockTime->setText(tr("Last Block Time:"));
    ui->labelTitleBlockHash->setText(tr("Last Block Hash:"));

    ui->labelTitleMemory->setText(tr("Memory Pool"));
    ui->labelTitleMemory->setVisible(false);

    ui->labelTitleNumberTransactions->setText(tr("Current Number of Transactions:"));
    ui->labelTitleNumberTransactions->setVisible(false);

    ui->labelInfoNumberTransactions->setText("0");
    ui->labelInfoNumberTransactions->setVisible(false);

    // Information Network
    ui->labelInfoName->setText(tr("Main"));
    ui->labelInfoName->setProperty("cssClass", "text-main-settings");
    ui->labelInfoConnections->setText("0 (In: 0 / Out:0)");
    ui->labelInfoMasternodes->setText("Total: 0 (IPv4: 0 / IPv6: 0 / Tor: 0 / Unknown: 0");

    // Information Blockchain
    ui->labelInfoBlockNumber->setText("0");
    ui->labelInfoBlockTime->setText("Sept 6, 2018. Thursday, 8:21:49 PM");
    ui->labelInfoBlockTime->setProperty("cssClass", "text-main-grey");
    ui->labelInfoBlockHash->setProperty("cssClass", "text-main-hash");

    // Buttons
    ui->pushButtonFile->setText(tr("Wallet Conf"));
    ui->pushButtonNetworkMonitor->setText(tr("Network Monitor"));
    ui->pushButtonBackups->setText(tr("Backups"));
    setCssBtnSecondary(ui->pushButtonBackups);
    setCssBtnSecondary(ui->pushButtonFile);
    setCssBtnSecondary(ui->pushButtonNetworkMonitor);

    // Data
#ifdef ENABLE_WALLET
    // Wallet data -- remove it with if it's needed
    ui->labelInfoBerkeley->setText(DbEnv::version(0, 0, 0));
    ui->labelInfoDataDir->setText(QString::fromStdString(GetDataDir().string() + QDir::separator().toLatin1() + GetArg("-wallet", "wallet.dat")));
#else
    ui->labelInfoBerkeley->setText(tr("No information"));
#endif

    connect(ui->pushButtonBackups, &QPushButton::clicked, [](){GUIUtil::showBackups();});
    connect(ui->pushButtonFile, &QPushButton::clicked, [](){GUIUtil::openConfigfile();});
    connect(ui->pushButtonNetworkMonitor, SIGNAL(clicked()), this, SLOT(openNetworkMonitor()));
}


void SettingsInformationWidget::loadClientModel(){
    if (clientModel && clientModel->getPeerTableModel() && clientModel->getBanTableModel()) {
        // Provide initial values
        ui->labelInfoClient->setText(clientModel->formatFullVersion());
        ui->labelInfoAgent->setText(clientModel->clientName());
        ui->labelInfoTime->setText(clientModel->formatClientStartupTime());
        ui->labelInfoName->setText(QString::fromStdString(Params().NetworkIDString()));

        setNumConnections(clientModel->getNumConnections());
        connect(clientModel, SIGNAL(numConnectionsChanged(int)), this, SLOT(setNumConnections(int)));

        setNumBlocks(clientModel->getNumBlocks());
        connect(clientModel, SIGNAL(numBlocksChanged(int)), this, SLOT(setNumBlocks(int)));

        setMasternodeCount(clientModel->getMasternodeCountString());
        connect(clientModel, &ClientModel::strMasternodesChanged, this, &SettingsInformationWidget::setMasternodeCount);
    }
}

void SettingsInformationWidget::setNumConnections(int count){
    if (!clientModel)
        return;

    QString connections = QString::number(count) + " (";
    connections += tr("In:") + " " + QString::number(clientModel->getNumConnections(CONNECTIONS_IN)) + " / ";
    connections += tr("Out:") + " " + QString::number(clientModel->getNumConnections(CONNECTIONS_OUT)) + ")";

    ui->labelInfoConnections->setText(connections);
}

void SettingsInformationWidget::setNumBlocks(int count){
    ui->labelInfoBlockNumber->setText(QString::number(count));
    if (clientModel) {
        ui->labelInfoBlockTime->setText(clientModel->getLastBlockDate().toString());
        ui->labelInfoBlockHash->setText(clientModel->getLastBlockHash());
    }
}

void SettingsInformationWidget::setMasternodeCount(const QString& strMasternodes)
{
    ui->labelInfoMasternodes->setText(strMasternodes);
}

void SettingsInformationWidget::openNetworkMonitor(){
    if(!rpcConsole){
        rpcConsole = new RPCConsole(0);
        rpcConsole->setClientModel(clientModel);
    }
    rpcConsole->showNetwork();
}

SettingsInformationWidget::~SettingsInformationWidget(){
    delete ui;
}
