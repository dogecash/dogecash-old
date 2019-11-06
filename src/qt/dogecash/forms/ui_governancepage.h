/********************************************************************************
** Form generated from reading UI file 'governancepage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOVERNANCEPAGE_H
#define UI_GOVERNANCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GovernancePage
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_Content;
    QVBoxLayout *verticalLayout_21;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents2;
    QVBoxLayout *proposalGrid;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *UpdateButton;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *CreateProposalButton;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frame_budget_info;
    QGridLayout *gridLayout;
    QLabel *next_superblock_label;
    QLabel *next_superblock_value;
    QLabel *blocks_before_super_label;
    QLabel *blocks_before_super_value;
    QLabel *time_before_super_label;
    QLabel *time_before_super_value;
    QLabel *alloted_budget_label;
    QLabel *alloted_budget_value;
    QLabel *unallocated_budget_label;
    QLabel *unallocated_budget_value;
    QLabel *masternode_count_label;
    QLabel *masternode_count_value;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_21;

    void setupUi(QWidget *GovernancePage)
    {
        if (GovernancePage->objectName().isEmpty())
            GovernancePage->setObjectName(QStringLiteral("GovernancePage"));
        GovernancePage->resize(629, 406);
        horizontalLayout_2 = new QHBoxLayout(GovernancePage);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(GovernancePage);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, -1, -1);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(5);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        verticalLayout_8->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(left);
        labelSubtitle1->setObjectName(QStringLiteral("labelSubtitle1"));

        verticalLayout_8->addWidget(labelSubtitle1, 0, Qt::AlignTop);


        horizontalLayout_3->addLayout(verticalLayout_8);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(20, -1, 20, -1);
        horizontalLayout_Content = new QHBoxLayout();
        horizontalLayout_Content->setObjectName(QStringLiteral("horizontalLayout_Content"));
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        scrollArea = new QScrollArea(left);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setLineWidth(0);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents2 = new QWidget();
        scrollAreaWidgetContents2->setObjectName(QStringLiteral("scrollAreaWidgetContents2"));
        scrollAreaWidgetContents2->setGeometry(QRect(0, 0, 742, 282));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents2->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents2->setSizePolicy(sizePolicy1);
        proposalGrid = new QVBoxLayout(scrollAreaWidgetContents2);
        proposalGrid->setSpacing(0);
        proposalGrid->setContentsMargins(0, 0, 0, 0);
        proposalGrid->setObjectName(QStringLiteral("proposalGrid"));
        proposalGrid->setSizeConstraint(QLayout::SetDefaultConstraint);
        scrollArea->setWidget(scrollAreaWidgetContents2);

        verticalLayout_21->addWidget(scrollArea);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_21->addItem(verticalSpacer);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(0);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(-1, -1, 20, -1);
        UpdateButton = new QPushButton(left);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));

        horizontalLayout_20->addWidget(UpdateButton);

        horizontalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_11);

        CreateProposalButton = new QPushButton(left);
        CreateProposalButton->setObjectName(QStringLiteral("CreateProposalButton"));

        horizontalLayout_20->addWidget(CreateProposalButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_4);


        verticalLayout_21->addLayout(horizontalLayout_20);


        horizontalLayout_Content->addLayout(verticalLayout_21);

        frame_budget_info = new QFrame(left);
        frame_budget_info->setObjectName(QStringLiteral("frame_budget_info"));
        frame_budget_info->setFrameShape(QFrame::StyledPanel);
        frame_budget_info->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_budget_info);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        next_superblock_label = new QLabel(frame_budget_info);
        next_superblock_label->setObjectName(QStringLiteral("next_superblock_label"));

        gridLayout->addWidget(next_superblock_label, 0, 0, 1, 1);

        next_superblock_value = new QLabel(frame_budget_info);
        next_superblock_value->setObjectName(QStringLiteral("next_superblock_value"));

        gridLayout->addWidget(next_superblock_value, 0, 1, 1, 1, Qt::AlignRight);

        blocks_before_super_label = new QLabel(frame_budget_info);
        blocks_before_super_label->setObjectName(QStringLiteral("blocks_before_super_label"));

        gridLayout->addWidget(blocks_before_super_label, 1, 0, 1, 1);

        blocks_before_super_value = new QLabel(frame_budget_info);
        blocks_before_super_value->setObjectName(QStringLiteral("blocks_before_super_value"));

        gridLayout->addWidget(blocks_before_super_value, 1, 1, 1, 1, Qt::AlignRight);

        time_before_super_label = new QLabel(frame_budget_info);
        time_before_super_label->setObjectName(QStringLiteral("time_before_super_label"));

        gridLayout->addWidget(time_before_super_label, 2, 0, 1, 1);

        time_before_super_value = new QLabel(frame_budget_info);
        time_before_super_value->setObjectName(QStringLiteral("time_before_super_value"));

        gridLayout->addWidget(time_before_super_value, 2, 1, 1, 1, Qt::AlignRight);

        alloted_budget_label = new QLabel(frame_budget_info);
        alloted_budget_label->setObjectName(QStringLiteral("alloted_budget_label"));

        gridLayout->addWidget(alloted_budget_label, 3, 0, 1, 1);

        alloted_budget_value = new QLabel(frame_budget_info);
        alloted_budget_value->setObjectName(QStringLiteral("alloted_budget_value"));

        gridLayout->addWidget(alloted_budget_value, 3, 1, 1, 1, Qt::AlignRight);

        unallocated_budget_label = new QLabel(frame_budget_info);
        unallocated_budget_label->setObjectName(QStringLiteral("unallocated_budget_label"));

        gridLayout->addWidget(unallocated_budget_label, 4, 0, 1, 1);

        unallocated_budget_value = new QLabel(frame_budget_info);
        unallocated_budget_value->setObjectName(QStringLiteral("unallocated_budget_value"));

        gridLayout->addWidget(unallocated_budget_value, 4, 1, 1, 1, Qt::AlignRight);

        masternode_count_label = new QLabel(frame_budget_info);
        masternode_count_label->setObjectName(QStringLiteral("masternode_count_label"));

        gridLayout->addWidget(masternode_count_label, 5, 0, 1, 1);

        masternode_count_value = new QLabel(frame_budget_info);
        masternode_count_value->setObjectName(QStringLiteral("masternode_count_value"));

        gridLayout->addWidget(masternode_count_value, 5, 1, 1, 1, Qt::AlignRight);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 0, 1, 1);


        horizontalLayout_Content->addWidget(frame_budget_info);


        horizontalLayout_4->addLayout(horizontalLayout_Content);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_21 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_21);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_2->addWidget(left);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 1);

        retranslateUi(GovernancePage);

        QMetaObject::connectSlotsByName(GovernancePage);
    } // setupUi

    void retranslateUi(QWidget *GovernancePage)
    {
        GovernancePage->setWindowTitle(QApplication::translate("GovernancePage", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("GovernancePage", "TextLabel", Q_NULLPTR));
        labelSubtitle1->setText(QApplication::translate("GovernancePage", "TextLabel", Q_NULLPTR));
        UpdateButton->setText(QApplication::translate("GovernancePage", "Update Proposals", Q_NULLPTR));
        CreateProposalButton->setText(QApplication::translate("GovernancePage", "Create Proposals", Q_NULLPTR));
        next_superblock_label->setText(QApplication::translate("GovernancePage", "Next super block:", Q_NULLPTR));
        next_superblock_value->setText(QApplication::translate("GovernancePage", "0", Q_NULLPTR));
        blocks_before_super_label->setText(QApplication::translate("GovernancePage", "Blocks to next super block:", Q_NULLPTR));
        blocks_before_super_value->setText(QApplication::translate("GovernancePage", "0", Q_NULLPTR));
        time_before_super_label->setText(QApplication::translate("GovernancePage", "Days to budget payout (estimate):", Q_NULLPTR));
        time_before_super_value->setText(QApplication::translate("GovernancePage", "0", Q_NULLPTR));
        alloted_budget_label->setText(QApplication::translate("GovernancePage", "Allotted budget:", Q_NULLPTR));
        alloted_budget_value->setText(QApplication::translate("GovernancePage", "0", Q_NULLPTR));
        unallocated_budget_label->setText(QApplication::translate("GovernancePage", "Budget left:", Q_NULLPTR));
        unallocated_budget_value->setText(QApplication::translate("GovernancePage", "0", Q_NULLPTR));
        masternode_count_label->setText(QApplication::translate("GovernancePage", "Masternodes count:", Q_NULLPTR));
        masternode_count_value->setText(QApplication::translate("GovernancePage", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GovernancePage: public Ui_GovernancePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOVERNANCEPAGE_H
