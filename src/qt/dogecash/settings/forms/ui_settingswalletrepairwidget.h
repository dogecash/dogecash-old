/********************************************************************************
** Form generated from reading UI file 'settingswalletrepairwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWALLETREPAIRWIDGET_H
#define UI_SETTINGSWALLETREPAIRWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWalletRepairWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollStack;
    QWidget *scrollAreaWidgetStack;
    QVBoxLayout *verticalLayout_1;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayoutTitle;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonSalvage;
    QLabel *labelMessageSalvage;
    QSpacerItem *verticalSpacer_1;
    QHBoxLayout *horizontalRescan;
    QVBoxLayout *verticalRescan;
    QPushButton *pushButtonRescan;
    QLabel *labelMessageRescan;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalRecover1;
    QVBoxLayout *verticalRecover1;
    QPushButton *pushButtonRecover1;
    QLabel *labelMessageRecover1;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalRecover2;
    QVBoxLayout *verticalRecover2;
    QPushButton *pushButtonRecover2;
    QLabel *labelMessageRecover2;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalUpgrade;
    QVBoxLayout *verticalUpgrade;
    QPushButton *pushButtonUpgrade;
    QLabel *labelMessageUpgrade;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalRebuild;
    QVBoxLayout *verticalRebuild;
    QPushButton *pushButtonRebuild;
    QLabel *labelMessageRebuild;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalDelete;
    QVBoxLayout *verticalDelete;
    QPushButton *pushButtonDelete;
    QLabel *labelMessageDelete;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QWidget *SettingsWalletRepairWidget)
    {
        if (SettingsWalletRepairWidget->objectName().isEmpty())
            SettingsWalletRepairWidget->setObjectName(QStringLiteral("SettingsWalletRepairWidget"));
        SettingsWalletRepairWidget->resize(400, 622);
        horizontalLayout = new QHBoxLayout(SettingsWalletRepairWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsWalletRepairWidget);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout = new QVBoxLayout(left);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollStack = new QScrollArea(left);
        scrollStack->setObjectName(QStringLiteral("scrollStack"));
        scrollStack->setStyleSheet(QStringLiteral(""));
        scrollStack->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollStack->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollStack->setWidgetResizable(true);
        scrollStack->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetStack = new QWidget();
        scrollAreaWidgetStack->setObjectName(QStringLiteral("scrollAreaWidgetStack"));
        scrollAreaWidgetStack->setGeometry(QRect(0, 0, 398, 620));
        scrollAreaWidgetStack->setAutoFillBackground(true);
        verticalLayout_1 = new QVBoxLayout(scrollAreaWidgetStack);
        verticalLayout_1->setSpacing(0);
        verticalLayout_1->setObjectName(QStringLiteral("verticalLayout_1"));
        verticalLayout_1->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_1->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayoutTitle = new QVBoxLayout();
        verticalLayoutTitle->setSpacing(5);
        verticalLayoutTitle->setObjectName(QStringLiteral("verticalLayoutTitle"));
        labelTitle = new QLabel(scrollAreaWidgetStack);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        verticalLayoutTitle->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(scrollAreaWidgetStack);
        labelSubtitle1->setObjectName(QStringLiteral("labelSubtitle1"));
        labelSubtitle1->setWordWrap(true);

        verticalLayoutTitle->addWidget(labelSubtitle1);


        horizontalLayout_3->addLayout(verticalLayoutTitle);


        verticalLayout_1->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_1->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(20);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButtonSalvage = new QPushButton(scrollAreaWidgetStack);
        pushButtonSalvage->setObjectName(QStringLiteral("pushButtonSalvage"));
        pushButtonSalvage->setMinimumSize(QSize(0, 40));
        pushButtonSalvage->setMaximumSize(QSize(16777215, 40));

        verticalLayout_2->addWidget(pushButtonSalvage);


        horizontalLayout_6->addLayout(verticalLayout_2);

        labelMessageSalvage = new QLabel(scrollAreaWidgetStack);
        labelMessageSalvage->setObjectName(QStringLiteral("labelMessageSalvage"));
        labelMessageSalvage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelMessageSalvage->setWordWrap(true);

        horizontalLayout_6->addWidget(labelMessageSalvage);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);

        verticalLayout_1->addLayout(horizontalLayout_6);

        verticalSpacer_1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_1->addItem(verticalSpacer_1);

        horizontalRescan = new QHBoxLayout();
        horizontalRescan->setSpacing(20);
        horizontalRescan->setObjectName(QStringLiteral("horizontalRescan"));
        verticalRescan = new QVBoxLayout();
        verticalRescan->setSpacing(5);
        verticalRescan->setObjectName(QStringLiteral("verticalRescan"));
        pushButtonRescan = new QPushButton(scrollAreaWidgetStack);
        pushButtonRescan->setObjectName(QStringLiteral("pushButtonRescan"));
        pushButtonRescan->setMinimumSize(QSize(0, 40));
        pushButtonRescan->setMaximumSize(QSize(16777215, 40));

        verticalRescan->addWidget(pushButtonRescan);


        horizontalRescan->addLayout(verticalRescan);

        labelMessageRescan = new QLabel(scrollAreaWidgetStack);
        labelMessageRescan->setObjectName(QStringLiteral("labelMessageRescan"));
        labelMessageRescan->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelMessageRescan->setWordWrap(true);

        horizontalRescan->addWidget(labelMessageRescan);

        horizontalRescan->setStretch(0, 1);
        horizontalRescan->setStretch(1, 1);

        verticalLayout_1->addLayout(horizontalRescan);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_1->addItem(verticalSpacer_2);

        horizontalRecover1 = new QHBoxLayout();
        horizontalRecover1->setSpacing(20);
        horizontalRecover1->setObjectName(QStringLiteral("horizontalRecover1"));
        verticalRecover1 = new QVBoxLayout();
        verticalRecover1->setSpacing(5);
        verticalRecover1->setObjectName(QStringLiteral("verticalRecover1"));
        pushButtonRecover1 = new QPushButton(scrollAreaWidgetStack);
        pushButtonRecover1->setObjectName(QStringLiteral("pushButtonRecover1"));
        pushButtonRecover1->setMinimumSize(QSize(0, 40));
        pushButtonRecover1->setMaximumSize(QSize(16777215, 40));

        verticalRecover1->addWidget(pushButtonRecover1);


        horizontalRecover1->addLayout(verticalRecover1);

        labelMessageRecover1 = new QLabel(scrollAreaWidgetStack);
        labelMessageRecover1->setObjectName(QStringLiteral("labelMessageRecover1"));
        labelMessageRecover1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelMessageRecover1->setWordWrap(true);

        horizontalRecover1->addWidget(labelMessageRecover1);

        horizontalRecover1->setStretch(0, 1);
        horizontalRecover1->setStretch(1, 1);

        verticalLayout_1->addLayout(horizontalRecover1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_1->addItem(verticalSpacer_3);

        horizontalRecover2 = new QHBoxLayout();
        horizontalRecover2->setSpacing(20);
        horizontalRecover2->setObjectName(QStringLiteral("horizontalRecover2"));
        verticalRecover2 = new QVBoxLayout();
        verticalRecover2->setSpacing(5);
        verticalRecover2->setObjectName(QStringLiteral("verticalRecover2"));
        pushButtonRecover2 = new QPushButton(scrollAreaWidgetStack);
        pushButtonRecover2->setObjectName(QStringLiteral("pushButtonRecover2"));
        pushButtonRecover2->setMinimumSize(QSize(0, 40));
        pushButtonRecover2->setMaximumSize(QSize(16777215, 40));

        verticalRecover2->addWidget(pushButtonRecover2);


        horizontalRecover2->addLayout(verticalRecover2);

        labelMessageRecover2 = new QLabel(scrollAreaWidgetStack);
        labelMessageRecover2->setObjectName(QStringLiteral("labelMessageRecover2"));
        labelMessageRecover2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelMessageRecover2->setWordWrap(true);

        horizontalRecover2->addWidget(labelMessageRecover2);

        horizontalRecover2->setStretch(0, 1);
        horizontalRecover2->setStretch(1, 1);

        verticalLayout_1->addLayout(horizontalRecover2);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_1->addItem(verticalSpacer_4);

        horizontalUpgrade = new QHBoxLayout();
        horizontalUpgrade->setSpacing(20);
        horizontalUpgrade->setObjectName(QStringLiteral("horizontalUpgrade"));
        verticalUpgrade = new QVBoxLayout();
        verticalUpgrade->setSpacing(5);
        verticalUpgrade->setObjectName(QStringLiteral("verticalUpgrade"));
        pushButtonUpgrade = new QPushButton(scrollAreaWidgetStack);
        pushButtonUpgrade->setObjectName(QStringLiteral("pushButtonUpgrade"));
        pushButtonUpgrade->setMinimumSize(QSize(0, 40));
        pushButtonUpgrade->setMaximumSize(QSize(16777215, 40));

        verticalUpgrade->addWidget(pushButtonUpgrade);


        horizontalUpgrade->addLayout(verticalUpgrade);

        labelMessageUpgrade = new QLabel(scrollAreaWidgetStack);
        labelMessageUpgrade->setObjectName(QStringLiteral("labelMessageUpgrade"));
        labelMessageUpgrade->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelMessageUpgrade->setWordWrap(true);

        horizontalUpgrade->addWidget(labelMessageUpgrade);

        horizontalUpgrade->setStretch(0, 1);
        horizontalUpgrade->setStretch(1, 1);

        verticalLayout_1->addLayout(horizontalUpgrade);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_1->addItem(verticalSpacer_5);

        horizontalRebuild = new QHBoxLayout();
        horizontalRebuild->setSpacing(20);
        horizontalRebuild->setObjectName(QStringLiteral("horizontalRebuild"));
        verticalRebuild = new QVBoxLayout();
        verticalRebuild->setSpacing(5);
        verticalRebuild->setObjectName(QStringLiteral("verticalRebuild"));
        pushButtonRebuild = new QPushButton(scrollAreaWidgetStack);
        pushButtonRebuild->setObjectName(QStringLiteral("pushButtonRebuild"));
        pushButtonRebuild->setMinimumSize(QSize(0, 40));
        pushButtonRebuild->setMaximumSize(QSize(16777215, 40));

        verticalRebuild->addWidget(pushButtonRebuild);


        horizontalRebuild->addLayout(verticalRebuild);

        labelMessageRebuild = new QLabel(scrollAreaWidgetStack);
        labelMessageRebuild->setObjectName(QStringLiteral("labelMessageRebuild"));
        labelMessageRebuild->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelMessageRebuild->setWordWrap(true);

        horizontalRebuild->addWidget(labelMessageRebuild);

        horizontalRebuild->setStretch(0, 1);
        horizontalRebuild->setStretch(1, 1);

        verticalLayout_1->addLayout(horizontalRebuild);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_1->addItem(verticalSpacer_6);

        horizontalDelete = new QHBoxLayout();
        horizontalDelete->setSpacing(20);
        horizontalDelete->setObjectName(QStringLiteral("horizontalDelete"));
        verticalDelete = new QVBoxLayout();
        verticalDelete->setSpacing(0);
        verticalDelete->setObjectName(QStringLiteral("verticalDelete"));
        pushButtonDelete = new QPushButton(scrollAreaWidgetStack);
        pushButtonDelete->setObjectName(QStringLiteral("pushButtonDelete"));
        pushButtonDelete->setMinimumSize(QSize(0, 40));
        pushButtonDelete->setMaximumSize(QSize(16777215, 40));

        verticalDelete->addWidget(pushButtonDelete);


        horizontalDelete->addLayout(verticalDelete);

        labelMessageDelete = new QLabel(scrollAreaWidgetStack);
        labelMessageDelete->setObjectName(QStringLiteral("labelMessageDelete"));
        labelMessageDelete->setMinimumSize(QSize(0, 0));
        labelMessageDelete->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelMessageDelete->setWordWrap(true);

        horizontalDelete->addWidget(labelMessageDelete);

        horizontalDelete->setStretch(0, 1);
        horizontalDelete->setStretch(1, 1);

        verticalLayout_1->addLayout(horizontalDelete);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_1->addItem(verticalSpacer_7);

        scrollStack->setWidget(scrollAreaWidgetStack);

        verticalLayout->addWidget(scrollStack);


        horizontalLayout->addWidget(left);


        retranslateUi(SettingsWalletRepairWidget);

        QMetaObject::connectSlotsByName(SettingsWalletRepairWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsWalletRepairWidget)
    {
        SettingsWalletRepairWidget->setWindowTitle(QApplication::translate("SettingsWalletRepairWidget", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SettingsWalletRepairWidget", "TextLabel", Q_NULLPTR));
        labelSubtitle1->setText(QApplication::translate("SettingsWalletRepairWidget", "TextLabel", Q_NULLPTR));
        pushButtonSalvage->setText(QApplication::translate("SettingsWalletRepairWidget", "PushButton", Q_NULLPTR));
        labelMessageSalvage->setText(QApplication::translate("SettingsWalletRepairWidget", "TextLabel", Q_NULLPTR));
        pushButtonRescan->setText(QApplication::translate("SettingsWalletRepairWidget", "PushButton", Q_NULLPTR));
        labelMessageRescan->setText(QApplication::translate("SettingsWalletRepairWidget", "TextLabel", Q_NULLPTR));
        pushButtonRecover1->setText(QApplication::translate("SettingsWalletRepairWidget", "PushButton", Q_NULLPTR));
        labelMessageRecover1->setText(QApplication::translate("SettingsWalletRepairWidget", "TextLabel", Q_NULLPTR));
        pushButtonRecover2->setText(QApplication::translate("SettingsWalletRepairWidget", "PushButton", Q_NULLPTR));
        labelMessageRecover2->setText(QApplication::translate("SettingsWalletRepairWidget", "TextLabel", Q_NULLPTR));
        pushButtonUpgrade->setText(QApplication::translate("SettingsWalletRepairWidget", "PushButton", Q_NULLPTR));
        labelMessageUpgrade->setText(QApplication::translate("SettingsWalletRepairWidget", "TextLabel", Q_NULLPTR));
        pushButtonRebuild->setText(QApplication::translate("SettingsWalletRepairWidget", "PushButton", Q_NULLPTR));
        labelMessageRebuild->setText(QApplication::translate("SettingsWalletRepairWidget", "TextLabel", Q_NULLPTR));
        pushButtonDelete->setText(QApplication::translate("SettingsWalletRepairWidget", "PushButton", Q_NULLPTR));
        labelMessageDelete->setText(QApplication::translate("SettingsWalletRepairWidget", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsWalletRepairWidget: public Ui_SettingsWalletRepairWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWALLETREPAIRWIDGET_H
