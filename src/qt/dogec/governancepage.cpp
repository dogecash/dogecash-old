// Copyright (c) 2018-2019 The DogeCash developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "qt/dogecash/governancepage.h"
#include "qt/dogecash/forms/ui_governancepage.h"
#include "qt/dogecash/qtutils.h"
#include "qt/dogecash/proposaldialog.h"

#include "activemasternode.h"
#include "chainparams.h"
#include "masternode-budget.h"
#include "masternode-sync.h"
#include "masternodeconfig.h"
#include "masternodeman.h"
#include "utilmoneystr.h"
#include "askpassphrasedialog.h"
#include "qt/dogecash/proposalframe.h"

#include <QMessageBox>
#include <QString>
#include <QTimer>
#include <QToolButton>

GovernancePage::GovernancePage(DogeCashGUI *parent) :
        PWidget(parent),
        ui(new Ui::GovernancePage)
{
    ui->setupUi(this);

    this->setStyleSheet(parent->styleSheet());

    /* Containers */
    setCssProperty(ui->left, "container");
    ui->left->setContentsMargins(0,20,0,20);

    /* Scroll Area and grid*/
    setCssProperty(ui->scrollAreaWidgetContents2, "GovernancePage-scrollArea");
    setCssProperty(ui->scrollArea, "GovernancePage-scrollArea");
    ui->proposalGrid->setContentsMargins(0,0,35,0);

    /* Light Font */
    QFont fontLight;
    fontLight.setWeight(QFont::Light);

    /* Title */
    ui->labelTitle->setText(tr("Governance"));
    setCssTitleScreen(ui->labelTitle);
    ui->labelTitle->setFont(fontLight);

    /* Buttons */
    ui->UpdateButton->setProperty("cssClass", "btn-primary");
    ui->CreateProposalButton->setProperty("cssClass", "btn-primary");
    connect(ui->UpdateButton, SIGNAL(clicked()), this, SLOT(onUpdateButtonclicked()));
    connect(ui->CreateProposalButton, SIGNAL(clicked()), this, SLOT(onCreateProposalButtonclicked()));

    /* Stats */
    ui->next_superblock_value->setProperty("cssClass", "text-text");
    ui->blocks_before_super_value->setProperty("cssClass", "text-text");
    ui->time_before_super_value->setProperty("cssClass", "text-text");
    ui->alloted_budget_value->setProperty("cssClass", "text-text");
    ui->unallocated_budget_value->setProperty("cssClass", "text-text");
    ui->masternode_count_value->setProperty("cssClass", "text-text");
    ui->next_superblock_label->setProperty("cssClass", "text-text");
    ui->blocks_before_super_label->setProperty("cssClass", "text-text");
    ui->time_before_super_label->setProperty("cssClass", "text-text");
    ui->alloted_budget_label->setProperty("cssClass", "text-text");
    ui->unallocated_budget_label->setProperty("cssClass", "text-text");
    ui->masternode_count_label->setProperty("cssClass", "text-text");

    ui->labelSubtitle1->setText(tr("Full nodes that incentivize node operators to perform the core consensus functions\nand vote on the treasury system receiving a periodic reward."));
    setCssSubtitleScreen(ui->labelSubtitle1);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateProposalList()));
    timer->start(60000);
    fLockUpdating = false;
}


GovernancePage::~GovernancePage()
{
    delete ui;
}

void GovernancePage::lockUpdating(bool lock)
{
    fLockUpdating = lock;
}

struct sortProposalsByVotes
{
    bool operator() (const CBudgetProposal* left, const CBudgetProposal* right)
    {
        if (left != right)
            return (left->GetYeas() - left->GetNays() > right->GetYeas() - right->GetNays());
        return (left->nFeeTXHash > right->nFeeTXHash);
    }
};

void GovernancePage::updateProposalList()
{
    if (fLockUpdating) return;

    QLayoutItem* child;
    while ((child = ui->proposalGrid->takeAt(0)) != 0) {
        if (child->widget() != 0)
        {
            delete child->widget();
        }
        delete child;
    }

    std::vector<CBudgetProposal*> allotedProposals = budget.GetBudget();
    CAmount nTotalAllotted = 0;
    std::vector<CBudgetProposal*> proposalsList = budget.GetAllProposals();
    std::sort (proposalsList.begin(), proposalsList.end(), sortProposalsByVotes());
    int nRow = 0;
    CBlockIndex* pindexPrev;
    {
        LOCK(cs_main);
        pindexPrev = chainActive.Tip();
    }
    if (!pindexPrev) return;
    int nBlockStart = pindexPrev->nHeight - pindexPrev->nHeight % Params().GetBudgetCycleBlocks() + Params().GetBudgetCycleBlocks();
    int nBlocksLeft = nBlockStart - pindexPrev->nHeight;
    int nBlockEnd = nBlockStart + Params().GetBudgetCycleBlocks() - 1;
    int mnCount = mnodeman.CountEnabled(ActiveProtocol());

    for (CBudgetProposal* pbudgetProposal : proposalsList) {
        if (!pbudgetProposal->fValid) continue;
        if (pbudgetProposal->GetRemainingPaymentCount() < 1) continue;

        ProposalFrame* proposalFrame = new ProposalFrame();
        setCssProperty(proposalFrame, "GovernancePage-ProposalFrame");
        setCssProperty(proposalFrame, "GovernancePage-ProposalFrame-proposalFrame");
        proposalFrame->setProposal(pbudgetProposal);
        proposalFrame->setGovernancePage(this);

        if (std::find(allotedProposals.begin(), allotedProposals.end(), pbudgetProposal) != allotedProposals.end()) {
            nTotalAllotted += pbudgetProposal->GetAllotted();
            proposalFrame->setObjectName(QStringLiteral("proposalFramePassing"));
            setCssProperty(proposalFrame, "GovernancePage-ProposalFrame-proposalFramePassing");
        } else if (!pbudgetProposal->IsEstablished()) {
            proposalFrame->setObjectName(QStringLiteral("proposalFrameNotEstablished"));
        } else if (pbudgetProposal->IsPassing(pindexPrev, nBlockStart, nBlockEnd, mnCount)) {
            proposalFrame->setObjectName(QStringLiteral("proposalFramePassingUnfunded"));
        } else {
            proposalFrame->setObjectName(QStringLiteral("proposalFrame"));
        }
        proposalFrame->setFrameShape(QFrame::StyledPanel);

        if (extendedProposal == pbudgetProposal)
            proposalFrame->extend();
        proposalFrame->setMaximumHeight(150);
        ui->proposalGrid->addWidget(proposalFrame, nRow);

        ++nRow;
    }

    ui->next_superblock_value->setText(QString::number(nBlockStart));
    ui->blocks_before_super_value->setText(QString::number(nBlocksLeft));
    ui->time_before_super_value->setText(QString::number(nBlocksLeft/60/24));
    ui->alloted_budget_value->setText(QString::number(nTotalAllotted/COIN));
    ui->unallocated_budget_value->setText(QString::number((budget.GetTotalBudget(pindexPrev->nHeight) - nTotalAllotted)/COIN));
    ui->masternode_count_value->setText(QString::number(mnodeman.CountEnabled(ActiveProtocol())));

}

void GovernancePage::setExtendedProposal(CBudgetProposal* proposal)
{
    bool update = false;
    if (extendedProposal != proposal)
        update = true;
    extendedProposal = proposal;
    if (update)
        updateProposalList();
}

void GovernancePage::onUpdateButtonclicked()
{
    updateProposalList();
}

void GovernancePage::onCreateProposalButtonclicked()
{
    ProposalDialog dlg(ProposalDialog::PrepareProposal, this);
    if (QDialog::Accepted == dlg.exec())
    {
        updateProposalList();
    }
}
