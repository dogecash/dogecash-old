/********************************************************************************
** Form generated from reading UI file 'settingswalletoptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWALLETOPTIONSWIDGET_H
#define UI_SETTINGSWALLETOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWalletOptionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout_1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayoutTitle;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_1;
    QLabel *labelTitleStake;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBoxStakeSplitThreshold;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *radioButtonSpend;
    QSpacerItem *verticalSpacer_1;
    QLabel *labelDivider;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayoutTitle_1;
    QLabel *labelTitleNetwork;
    QLabel *labelSubtitleNetwork;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_1;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBoxMap;
    QCheckBox *checkBoxAllow;
    QCheckBox *checkBoxConnect;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelSubtitleProxy;
    QLineEdit *lineEditProxy;
    QSpacerItem *horizontalSpacer_1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelSubtitlePort;
    QLineEdit *lineEditPort;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButtonReset;
    QPushButton *pushButtonClean;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonSave;

    void setupUi(QWidget *SettingsWalletOptionsWidget)
    {
        if (SettingsWalletOptionsWidget->objectName().isEmpty())
            SettingsWalletOptionsWidget->setObjectName(QStringLiteral("SettingsWalletOptionsWidget"));
        SettingsWalletOptionsWidget->resize(493, 654);
        verticalLayout = new QVBoxLayout(SettingsWalletOptionsWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsWalletOptionsWidget);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_1 = new QVBoxLayout(left);
        verticalLayout_1->setObjectName(QStringLiteral("verticalLayout_1"));
        verticalLayout_1->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayoutTitle = new QVBoxLayout();
        verticalLayoutTitle->setSpacing(5);
        verticalLayoutTitle->setObjectName(QStringLiteral("verticalLayoutTitle"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        verticalLayoutTitle->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(left);
        labelSubtitle1->setObjectName(QStringLiteral("labelSubtitle1"));
        labelSubtitle1->setWordWrap(true);

        verticalLayoutTitle->addWidget(labelSubtitle1);


        horizontalLayout->addLayout(verticalLayoutTitle);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(-1, -1, -1, 9);
        labelTitleStake = new QLabel(left);
        labelTitleStake->setObjectName(QStringLiteral("labelTitleStake"));

        horizontalLayout_1->addWidget(labelTitleStake);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer);

        spinBoxStakeSplitThreshold = new QSpinBox(left);
        spinBoxStakeSplitThreshold->setObjectName(QStringLiteral("spinBoxStakeSplitThreshold"));
        spinBoxStakeSplitThreshold->setMinimum(1);
        spinBoxStakeSplitThreshold->setMaximum(999999);

        horizontalLayout_1->addWidget(spinBoxStakeSplitThreshold);


        verticalLayout_2->addLayout(horizontalLayout_1);

        groupBox = new QGroupBox(left);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButtonSpend = new QCheckBox(groupBox);
        radioButtonSpend->setObjectName(QStringLiteral("radioButtonSpend"));

        verticalLayout_3->addWidget(radioButtonSpend);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer_1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_1);

        labelDivider = new QLabel(left);
        labelDivider->setObjectName(QStringLiteral("labelDivider"));
        labelDivider->setMinimumSize(QSize(0, 1));
        labelDivider->setMaximumSize(QSize(16777215, 1));

        verticalLayout_2->addWidget(labelDivider);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayoutTitle_1 = new QVBoxLayout();
        verticalLayoutTitle_1->setSpacing(5);
        verticalLayoutTitle_1->setObjectName(QStringLiteral("verticalLayoutTitle_1"));
        labelTitleNetwork = new QLabel(left);
        labelTitleNetwork->setObjectName(QStringLiteral("labelTitleNetwork"));

        verticalLayoutTitle_1->addWidget(labelTitleNetwork);

        labelSubtitleNetwork = new QLabel(left);
        labelSubtitleNetwork->setObjectName(QStringLiteral("labelSubtitleNetwork"));
        labelSubtitleNetwork->setWordWrap(true);

        verticalLayoutTitle_1->addWidget(labelSubtitleNetwork);


        horizontalLayout_2->addLayout(verticalLayoutTitle_1);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        groupBox_1 = new QGroupBox(left);
        groupBox_1->setObjectName(QStringLiteral("groupBox_1"));
        verticalLayout_4 = new QVBoxLayout(groupBox_1);
        verticalLayout_4->setSpacing(20);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        checkBoxMap = new QCheckBox(groupBox_1);
        checkBoxMap->setObjectName(QStringLiteral("checkBoxMap"));

        verticalLayout_4->addWidget(checkBoxMap);

        checkBoxAllow = new QCheckBox(groupBox_1);
        checkBoxAllow->setObjectName(QStringLiteral("checkBoxAllow"));

        verticalLayout_4->addWidget(checkBoxAllow);

        checkBoxConnect = new QCheckBox(groupBox_1);
        checkBoxConnect->setObjectName(QStringLiteral("checkBoxConnect"));

        verticalLayout_4->addWidget(checkBoxConnect);


        verticalLayout_2->addWidget(groupBox_1);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelSubtitleProxy = new QLabel(left);
        labelSubtitleProxy->setObjectName(QStringLiteral("labelSubtitleProxy"));

        horizontalLayout_4->addWidget(labelSubtitleProxy);

        lineEditProxy = new QLineEdit(left);
        lineEditProxy->setObjectName(QStringLiteral("lineEditProxy"));
        lineEditProxy->setMinimumSize(QSize(0, 50));
        lineEditProxy->setMaximumSize(QSize(16777215, 50));

        horizontalLayout_4->addWidget(lineEditProxy);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelSubtitlePort = new QLabel(left);
        labelSubtitlePort->setObjectName(QStringLiteral("labelSubtitlePort"));

        horizontalLayout_5->addWidget(labelSubtitlePort);

        lineEditPort = new QLineEdit(left);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));
        lineEditPort->setMinimumSize(QSize(0, 50));
        lineEditPort->setMaximumSize(QSize(16777215, 50));

        horizontalLayout_5->addWidget(lineEditPort);


        horizontalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(12);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButtonReset = new QPushButton(left);
        pushButtonReset->setObjectName(QStringLiteral("pushButtonReset"));
        pushButtonReset->setMinimumSize(QSize(160, 50));
        pushButtonReset->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_6->addWidget(pushButtonReset);

        pushButtonClean = new QPushButton(left);
        pushButtonClean->setObjectName(QStringLiteral("pushButtonClean"));
        pushButtonClean->setMinimumSize(QSize(0, 50));

        horizontalLayout_6->addWidget(pushButtonClean);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        pushButtonSave = new QPushButton(left);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(200, 50));
        pushButtonSave->setMaximumSize(QSize(200, 50));

        horizontalLayout_6->addWidget(pushButtonSave);


        verticalLayout_2->addLayout(horizontalLayout_6);


        verticalLayout_1->addLayout(verticalLayout_2);


        verticalLayout->addWidget(left);


        retranslateUi(SettingsWalletOptionsWidget);

        QMetaObject::connectSlotsByName(SettingsWalletOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsWalletOptionsWidget)
    {
        SettingsWalletOptionsWidget->setWindowTitle(QApplication::translate("SettingsWalletOptionsWidget", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SettingsWalletOptionsWidget", "TextLabel", Q_NULLPTR));
        labelSubtitle1->setText(QApplication::translate("SettingsWalletOptionsWidget", "TextLabel", Q_NULLPTR));
        labelTitleStake->setText(QApplication::translate("SettingsWalletOptionsWidget", "TextLabel", Q_NULLPTR));
        groupBox->setTitle(QString());
        radioButtonSpend->setText(QApplication::translate("SettingsWalletOptionsWidget", "CheckBox", Q_NULLPTR));
        labelDivider->setText(QString());
        labelTitleNetwork->setText(QApplication::translate("SettingsWalletOptionsWidget", "TextLabel", Q_NULLPTR));
        labelSubtitleNetwork->setText(QApplication::translate("SettingsWalletOptionsWidget", "TextLabel", Q_NULLPTR));
        groupBox_1->setTitle(QString());
        checkBoxMap->setText(QApplication::translate("SettingsWalletOptionsWidget", "RadioButton", Q_NULLPTR));
        checkBoxAllow->setText(QApplication::translate("SettingsWalletOptionsWidget", "RadioButton", Q_NULLPTR));
        checkBoxConnect->setText(QApplication::translate("SettingsWalletOptionsWidget", "RadioButton", Q_NULLPTR));
        labelSubtitleProxy->setText(QApplication::translate("SettingsWalletOptionsWidget", "TextLabel", Q_NULLPTR));
        labelSubtitlePort->setText(QApplication::translate("SettingsWalletOptionsWidget", "TextLabel", Q_NULLPTR));
        pushButtonReset->setText(QApplication::translate("SettingsWalletOptionsWidget", "Reset to default", Q_NULLPTR));
        pushButtonClean->setText(QApplication::translate("SettingsWalletOptionsWidget", "Discard changes", Q_NULLPTR));
        pushButtonSave->setText(QApplication::translate("SettingsWalletOptionsWidget", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsWalletOptionsWidget: public Ui_SettingsWalletOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWALLETOPTIONSWIDGET_H
