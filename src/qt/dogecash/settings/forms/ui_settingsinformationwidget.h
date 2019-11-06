/********************************************************************************
** Form generated from reading UI file 'settingsinformationwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSINFORMATIONWIDGET_H
#define UI_SETTINGSINFORMATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsInformationWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonNetworkMonitor;
    QPushButton *pushButtonBackups;
    QPushButton *pushButtonFile;
    QSpacerItem *verticalSpacer_2;
    QWidget *layoutOptions1;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelTitleGeneral;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTitleClient;
    QLabel *labelInfoClient;
    QHBoxLayout *horizontalAgent;
    QLabel *labelTitleAgent;
    QLabel *labelInfoAgent;
    QHBoxLayout *horizontalBerkely;
    QLabel *labelTitleBerkeley;
    QLabel *labelInfoBerkeley;
    QHBoxLayout *horizontalDataDir;
    QLabel *labelTitleDataDir;
    QLabel *labelInfoDataDir;
    QHBoxLayout *horizontalTime;
    QLabel *labelTitleTime;
    QLabel *labelInfoTime;
    QSpacerItem *verticalSpacer_3;
    QLabel *labelTitleNetwork;
    QHBoxLayout *horizontalName;
    QLabel *labelTitleName;
    QLabel *labelInfoName;
    QWidget *layoutOptions2;
    QHBoxLayout *horizontalConnections;
    QLabel *labelTitleConnections;
    QLabel *labelInfoConnections;
    QSpacerItem *verticalSpacer_4;
    QLabel *labelTitleBlockchain;
    QHBoxLayout *horizontalBlockNumber;
    QLabel *labelTitleBlockNumber;
    QLabel *labelInfoBlockNumber;
    QWidget *layoutOptions3;
    QHBoxLayout *horizontalBlockTime;
    QLabel *labelTitleBlockTime;
    QLabel *labelInfoBlockTime;
    QSpacerItem *verticalSpacer_5;
    QLabel *labelTitleMemory;
    QHBoxLayout *horizontalNumberTransactions;
    QLabel *labelTitleNumberTransactions;
    QLabel *labelInfoNumberTransactions;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SettingsInformationWidget)
    {
        if (SettingsInformationWidget->objectName().isEmpty())
            SettingsInformationWidget->setObjectName(QStringLiteral("SettingsInformationWidget"));
        SettingsInformationWidget->resize(469, 454);
        verticalLayout = new QVBoxLayout(SettingsInformationWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsInformationWidget);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        horizontalLayout_3->addWidget(labelTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        groupBox = new QGroupBox(left);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButtonNetworkMonitor = new QPushButton(groupBox);
        pushButtonNetworkMonitor->setObjectName(QStringLiteral("pushButtonNetworkMonitor"));
        pushButtonNetworkMonitor->setMinimumSize(QSize(120, 30));

        horizontalLayout_4->addWidget(pushButtonNetworkMonitor);

        pushButtonBackups = new QPushButton(groupBox);
        pushButtonBackups->setObjectName(QStringLiteral("pushButtonBackups"));
        pushButtonBackups->setMinimumSize(QSize(120, 30));
        pushButtonBackups->setMaximumSize(QSize(120, 30));
        pushButtonBackups->setCheckable(false);
        pushButtonBackups->setAutoExclusive(false);

        horizontalLayout_4->addWidget(pushButtonBackups);

        pushButtonFile = new QPushButton(groupBox);
        pushButtonFile->setObjectName(QStringLiteral("pushButtonFile"));
        pushButtonFile->setMinimumSize(QSize(125, 30));
        pushButtonFile->setMaximumSize(QSize(125, 30));
        pushButtonFile->setCheckable(false);
        pushButtonFile->setChecked(false);
        pushButtonFile->setAutoExclusive(false);

        horizontalLayout_4->addWidget(pushButtonFile);


        horizontalLayout_3->addWidget(groupBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        layoutOptions1 = new QWidget(left);
        layoutOptions1->setObjectName(QStringLiteral("layoutOptions1"));
        verticalLayout_9 = new QVBoxLayout(layoutOptions1);
        verticalLayout_9->setSpacing(5);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 10);
        labelTitleGeneral = new QLabel(layoutOptions1);
        labelTitleGeneral->setObjectName(QStringLiteral("labelTitleGeneral"));

        verticalLayout_9->addWidget(labelTitleGeneral);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelTitleClient = new QLabel(layoutOptions1);
        labelTitleClient->setObjectName(QStringLiteral("labelTitleClient"));
        labelTitleClient->setMinimumSize(QSize(290, 0));
        labelTitleClient->setMaximumSize(QSize(290, 16777215));

        horizontalLayout->addWidget(labelTitleClient);

        labelInfoClient = new QLabel(layoutOptions1);
        labelInfoClient->setObjectName(QStringLiteral("labelInfoClient"));

        horizontalLayout->addWidget(labelInfoClient);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalLayout);

        horizontalAgent = new QHBoxLayout();
        horizontalAgent->setSpacing(0);
        horizontalAgent->setObjectName(QStringLiteral("horizontalAgent"));
        labelTitleAgent = new QLabel(layoutOptions1);
        labelTitleAgent->setObjectName(QStringLiteral("labelTitleAgent"));
        labelTitleAgent->setMinimumSize(QSize(290, 0));
        labelTitleAgent->setMaximumSize(QSize(290, 16777215));

        horizontalAgent->addWidget(labelTitleAgent);

        labelInfoAgent = new QLabel(layoutOptions1);
        labelInfoAgent->setObjectName(QStringLiteral("labelInfoAgent"));

        horizontalAgent->addWidget(labelInfoAgent);

        horizontalAgent->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalAgent);

        horizontalBerkely = new QHBoxLayout();
        horizontalBerkely->setSpacing(0);
        horizontalBerkely->setObjectName(QStringLiteral("horizontalBerkely"));
        labelTitleBerkeley = new QLabel(layoutOptions1);
        labelTitleBerkeley->setObjectName(QStringLiteral("labelTitleBerkeley"));
        labelTitleBerkeley->setMinimumSize(QSize(290, 0));
        labelTitleBerkeley->setMaximumSize(QSize(290, 16777215));

        horizontalBerkely->addWidget(labelTitleBerkeley);

        labelInfoBerkeley = new QLabel(layoutOptions1);
        labelInfoBerkeley->setObjectName(QStringLiteral("labelInfoBerkeley"));

        horizontalBerkely->addWidget(labelInfoBerkeley);

        horizontalBerkely->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalBerkely);

        horizontalDataDir = new QHBoxLayout();
        horizontalDataDir->setSpacing(0);
        horizontalDataDir->setObjectName(QStringLiteral("horizontalDataDir"));
        labelTitleDataDir = new QLabel(layoutOptions1);
        labelTitleDataDir->setObjectName(QStringLiteral("labelTitleDataDir"));
        labelTitleDataDir->setMinimumSize(QSize(290, 0));
        labelTitleDataDir->setMaximumSize(QSize(290, 16777215));

        horizontalDataDir->addWidget(labelTitleDataDir);

        labelInfoDataDir = new QLabel(layoutOptions1);
        labelInfoDataDir->setObjectName(QStringLiteral("labelInfoDataDir"));
        labelInfoDataDir->setWordWrap(true);

        horizontalDataDir->addWidget(labelInfoDataDir);

        horizontalDataDir->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalDataDir);

        horizontalTime = new QHBoxLayout();
        horizontalTime->setSpacing(0);
        horizontalTime->setObjectName(QStringLiteral("horizontalTime"));
        labelTitleTime = new QLabel(layoutOptions1);
        labelTitleTime->setObjectName(QStringLiteral("labelTitleTime"));
        labelTitleTime->setMinimumSize(QSize(290, 0));
        labelTitleTime->setMaximumSize(QSize(290, 16777215));

        horizontalTime->addWidget(labelTitleTime);

        labelInfoTime = new QLabel(layoutOptions1);
        labelInfoTime->setObjectName(QStringLiteral("labelInfoTime"));

        horizontalTime->addWidget(labelInfoTime);

        horizontalTime->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalTime);


        verticalLayout_2->addWidget(layoutOptions1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_3);

        labelTitleNetwork = new QLabel(left);
        labelTitleNetwork->setObjectName(QStringLiteral("labelTitleNetwork"));

        verticalLayout_2->addWidget(labelTitleNetwork);

        horizontalName = new QHBoxLayout();
        horizontalName->setSpacing(0);
        horizontalName->setObjectName(QStringLiteral("horizontalName"));
        labelTitleName = new QLabel(left);
        labelTitleName->setObjectName(QStringLiteral("labelTitleName"));
        labelTitleName->setMinimumSize(QSize(290, 0));
        labelTitleName->setMaximumSize(QSize(290, 16777215));

        horizontalName->addWidget(labelTitleName);

        labelInfoName = new QLabel(left);
        labelInfoName->setObjectName(QStringLiteral("labelInfoName"));

        horizontalName->addWidget(labelInfoName);

        horizontalName->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalName);

        layoutOptions2 = new QWidget(left);
        layoutOptions2->setObjectName(QStringLiteral("layoutOptions2"));
        horizontalConnections = new QHBoxLayout(layoutOptions2);
        horizontalConnections->setSpacing(0);
        horizontalConnections->setObjectName(QStringLiteral("horizontalConnections"));
        horizontalConnections->setContentsMargins(0, 0, 0, 10);
        labelTitleConnections = new QLabel(layoutOptions2);
        labelTitleConnections->setObjectName(QStringLiteral("labelTitleConnections"));
        labelTitleConnections->setMinimumSize(QSize(290, 0));
        labelTitleConnections->setMaximumSize(QSize(290, 16777215));

        horizontalConnections->addWidget(labelTitleConnections);

        labelInfoConnections = new QLabel(layoutOptions2);
        labelInfoConnections->setObjectName(QStringLiteral("labelInfoConnections"));

        horizontalConnections->addWidget(labelInfoConnections);

        horizontalConnections->setStretch(1, 1);

        verticalLayout_2->addWidget(layoutOptions2);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_4);

        labelTitleBlockchain = new QLabel(left);
        labelTitleBlockchain->setObjectName(QStringLiteral("labelTitleBlockchain"));

        verticalLayout_2->addWidget(labelTitleBlockchain);

        horizontalBlockNumber = new QHBoxLayout();
        horizontalBlockNumber->setSpacing(0);
        horizontalBlockNumber->setObjectName(QStringLiteral("horizontalBlockNumber"));
        labelTitleBlockNumber = new QLabel(left);
        labelTitleBlockNumber->setObjectName(QStringLiteral("labelTitleBlockNumber"));
        labelTitleBlockNumber->setMinimumSize(QSize(290, 0));
        labelTitleBlockNumber->setMaximumSize(QSize(290, 16777215));

        horizontalBlockNumber->addWidget(labelTitleBlockNumber);

        labelInfoBlockNumber = new QLabel(left);
        labelInfoBlockNumber->setObjectName(QStringLiteral("labelInfoBlockNumber"));

        horizontalBlockNumber->addWidget(labelInfoBlockNumber);

        horizontalBlockNumber->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalBlockNumber);

        layoutOptions3 = new QWidget(left);
        layoutOptions3->setObjectName(QStringLiteral("layoutOptions3"));
        horizontalBlockTime = new QHBoxLayout(layoutOptions3);
        horizontalBlockTime->setSpacing(0);
        horizontalBlockTime->setObjectName(QStringLiteral("horizontalBlockTime"));
        horizontalBlockTime->setContentsMargins(0, 0, 0, 10);
        labelTitleBlockTime = new QLabel(layoutOptions3);
        labelTitleBlockTime->setObjectName(QStringLiteral("labelTitleBlockTime"));
        labelTitleBlockTime->setMinimumSize(QSize(290, 0));
        labelTitleBlockTime->setMaximumSize(QSize(290, 16777215));

        horizontalBlockTime->addWidget(labelTitleBlockTime);

        labelInfoBlockTime = new QLabel(layoutOptions3);
        labelInfoBlockTime->setObjectName(QStringLiteral("labelInfoBlockTime"));

        horizontalBlockTime->addWidget(labelInfoBlockTime);

        horizontalBlockTime->setStretch(1, 1);

        verticalLayout_2->addWidget(layoutOptions3);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        labelTitleMemory = new QLabel(left);
        labelTitleMemory->setObjectName(QStringLiteral("labelTitleMemory"));

        verticalLayout_2->addWidget(labelTitleMemory);

        horizontalNumberTransactions = new QHBoxLayout();
        horizontalNumberTransactions->setSpacing(0);
        horizontalNumberTransactions->setObjectName(QStringLiteral("horizontalNumberTransactions"));
        labelTitleNumberTransactions = new QLabel(left);
        labelTitleNumberTransactions->setObjectName(QStringLiteral("labelTitleNumberTransactions"));
        labelTitleNumberTransactions->setMinimumSize(QSize(290, 0));
        labelTitleNumberTransactions->setMaximumSize(QSize(290, 16777215));

        horizontalNumberTransactions->addWidget(labelTitleNumberTransactions);

        labelInfoNumberTransactions = new QLabel(left);
        labelInfoNumberTransactions->setObjectName(QStringLiteral("labelInfoNumberTransactions"));

        horizontalNumberTransactions->addWidget(labelInfoNumberTransactions);

        horizontalNumberTransactions->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalNumberTransactions);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout->addWidget(left);


        retranslateUi(SettingsInformationWidget);

        QMetaObject::connectSlotsByName(SettingsInformationWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsInformationWidget)
    {
        SettingsInformationWidget->setWindowTitle(QApplication::translate("SettingsInformationWidget", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButtonNetworkMonitor->setText(QApplication::translate("SettingsInformationWidget", "Network Monitor", Q_NULLPTR));
        pushButtonBackups->setText(QApplication::translate("SettingsInformationWidget", "PushButton", Q_NULLPTR));
        pushButtonFile->setText(QApplication::translate("SettingsInformationWidget", "PushButton", Q_NULLPTR));
        labelTitleGeneral->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelTitleClient->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelInfoClient->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelTitleAgent->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelInfoAgent->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelTitleBerkeley->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelInfoBerkeley->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelTitleDataDir->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelInfoDataDir->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelTitleTime->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelInfoTime->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelTitleNetwork->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelTitleName->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelInfoName->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelTitleConnections->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelInfoConnections->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelTitleBlockchain->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelTitleBlockNumber->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelInfoBlockNumber->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelTitleBlockTime->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelInfoBlockTime->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelTitleMemory->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelTitleNumberTransactions->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
        labelInfoNumberTransactions->setText(QApplication::translate("SettingsInformationWidget", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsInformationWidget: public Ui_SettingsInformationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSINFORMATIONWIDGET_H
