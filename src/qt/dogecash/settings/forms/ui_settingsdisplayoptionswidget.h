/********************************************************************************
** Form generated from reading UI file 'settingsdisplayoptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDISPLAYOPTIONSWIDGET_H
#define UI_SETTINGSDISPLAYOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDisplayOptionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayoutTitle;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTitleLanguage;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *comboBoxLanguage;
    QSpacerItem *verticalThreads2;
    QHBoxLayout *horizontalPercentagezDogec;
    QLabel *labelTitleUnit;
    QSpacerItem *horizontalSpacerPercentagezDogec;
    QComboBox *comboBoxUnit;
    QSpacerItem *verticalDenomzDogec;
    QHBoxLayout *horizontalDenomzDogec;
    QLabel *labelTitleDigits;
    QSpacerItem *horizontalDenomzDogec_1;
    QComboBox *comboBoxDigits;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButtonSwitchBalance;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTitleUrl;
    QLineEdit *lineEditUrl;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButtonReset;
    QPushButton *pushButtonClean;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonSave;

    void setupUi(QWidget *SettingsDisplayOptionsWidget)
    {
        if (SettingsDisplayOptionsWidget->objectName().isEmpty())
            SettingsDisplayOptionsWidget->setObjectName(QStringLiteral("SettingsDisplayOptionsWidget"));
        SettingsDisplayOptionsWidget->resize(493, 434);
        verticalLayout = new QVBoxLayout(SettingsDisplayOptionsWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsDisplayOptionsWidget);
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


        horizontalLayout_3->addLayout(verticalLayoutTitle);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelTitleLanguage = new QLabel(left);
        labelTitleLanguage->setObjectName(QStringLiteral("labelTitleLanguage"));

        horizontalLayout_2->addWidget(labelTitleLanguage);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        comboBoxLanguage = new QComboBox(left);
        comboBoxLanguage->setObjectName(QStringLiteral("comboBoxLanguage"));
        comboBoxLanguage->setMinimumSize(QSize(380, 0));
        comboBoxLanguage->setMaximumSize(QSize(280, 16777215));

        horizontalLayout_2->addWidget(comboBoxLanguage);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalThreads2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalThreads2);

        horizontalPercentagezDogec = new QHBoxLayout();
        horizontalPercentagezDogec->setObjectName(QStringLiteral("horizontalPercentagezDogec"));
        labelTitleUnit = new QLabel(left);
        labelTitleUnit->setObjectName(QStringLiteral("labelTitleUnit"));

        horizontalPercentagezDogec->addWidget(labelTitleUnit);

        horizontalSpacerPercentagezDogec = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalPercentagezDogec->addItem(horizontalSpacerPercentagezDogec);

        comboBoxUnit = new QComboBox(left);
        comboBoxUnit->setObjectName(QStringLiteral("comboBoxUnit"));
        comboBoxUnit->setMinimumSize(QSize(180, 0));
        comboBoxUnit->setMaximumSize(QSize(180, 16777215));

        horizontalPercentagezDogec->addWidget(comboBoxUnit);


        verticalLayout_2->addLayout(horizontalPercentagezDogec);

        verticalDenomzDogec = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalDenomzDogec);

        horizontalDenomzDogec = new QHBoxLayout();
        horizontalDenomzDogec->setObjectName(QStringLiteral("horizontalDenomzDogec"));
        labelTitleDigits = new QLabel(left);
        labelTitleDigits->setObjectName(QStringLiteral("labelTitleDigits"));

        horizontalDenomzDogec->addWidget(labelTitleDigits);

        horizontalDenomzDogec_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalDenomzDogec->addItem(horizontalDenomzDogec_1);

        comboBoxDigits = new QComboBox(left);
        comboBoxDigits->setObjectName(QStringLiteral("comboBoxDigits"));
        comboBoxDigits->setMinimumSize(QSize(180, 0));
        comboBoxDigits->setMaximumSize(QSize(180, 16777215));

        horizontalDenomzDogec->addWidget(comboBoxDigits);


        verticalLayout_2->addLayout(horizontalDenomzDogec);

        verticalSpacer_4 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_2->addItem(verticalSpacer_4);

        pushButtonSwitchBalance = new QPushButton(left);
        pushButtonSwitchBalance->setObjectName(QStringLiteral("pushButtonSwitchBalance"));
        pushButtonSwitchBalance->setMinimumSize(QSize(0, 30));
        pushButtonSwitchBalance->setCheckable(true);

        verticalLayout_2->addWidget(pushButtonSwitchBalance);

        verticalSpacer_3 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelTitleUrl = new QLabel(left);
        labelTitleUrl->setObjectName(QStringLiteral("labelTitleUrl"));

        horizontalLayout->addWidget(labelTitleUrl);

        lineEditUrl = new QLineEdit(left);
        lineEditUrl->setObjectName(QStringLiteral("lineEditUrl"));
        lineEditUrl->setMinimumSize(QSize(0, 50));
        lineEditUrl->setMaximumSize(QSize(16777215, 50));

        horizontalLayout->addWidget(lineEditUrl);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(12);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButtonReset = new QPushButton(left);
        pushButtonReset->setObjectName(QStringLiteral("pushButtonReset"));
        pushButtonReset->setMinimumSize(QSize(160, 50));
        pushButtonReset->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_7->addWidget(pushButtonReset);

        pushButtonClean = new QPushButton(left);
        pushButtonClean->setObjectName(QStringLiteral("pushButtonClean"));
        pushButtonClean->setMinimumSize(QSize(0, 50));

        horizontalLayout_7->addWidget(pushButtonClean);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        pushButtonSave = new QPushButton(left);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(200, 50));
        pushButtonSave->setMaximumSize(QSize(200, 50));

        horizontalLayout_7->addWidget(pushButtonSave);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout->addWidget(left);


        retranslateUi(SettingsDisplayOptionsWidget);

        QMetaObject::connectSlotsByName(SettingsDisplayOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsDisplayOptionsWidget)
    {
        SettingsDisplayOptionsWidget->setWindowTitle(QApplication::translate("SettingsDisplayOptionsWidget", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SettingsDisplayOptionsWidget", "TextLabel", Q_NULLPTR));
        labelSubtitle1->setText(QApplication::translate("SettingsDisplayOptionsWidget", "TextLabel", Q_NULLPTR));
        labelTitleLanguage->setText(QApplication::translate("SettingsDisplayOptionsWidget", "TextLabel", Q_NULLPTR));
        labelTitleUnit->setText(QApplication::translate("SettingsDisplayOptionsWidget", "TextLabel", Q_NULLPTR));
        labelTitleDigits->setText(QApplication::translate("SettingsDisplayOptionsWidget", "TextLabel", Q_NULLPTR));
        pushButtonSwitchBalance->setText(QApplication::translate("SettingsDisplayOptionsWidget", "PushButton", Q_NULLPTR));
        labelTitleUrl->setText(QApplication::translate("SettingsDisplayOptionsWidget", "TextLabel", Q_NULLPTR));
        pushButtonReset->setText(QApplication::translate("SettingsDisplayOptionsWidget", "Reset to default", Q_NULLPTR));
        pushButtonClean->setText(QApplication::translate("SettingsDisplayOptionsWidget", "Discard changes", Q_NULLPTR));
        pushButtonSave->setText(QApplication::translate("SettingsDisplayOptionsWidget", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsDisplayOptionsWidget: public Ui_SettingsDisplayOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDISPLAYOPTIONSWIDGET_H
