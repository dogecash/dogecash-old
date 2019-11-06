/********************************************************************************
** Form generated from reading UI file 'settingsbackupwallet.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSBACKUPWALLET_H
#define UI_SETTINGSBACKUPWALLET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsBackupWallet
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayoutTitle;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelSubtitleLocation;
    QPushButton *pushButtonDocuments;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonSave;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelDivider;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayoutTitle_2;
    QLabel *labelTitle_2;
    QLabel *labelSubtitle_2;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonSave_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SettingsBackupWallet)
    {
        if (SettingsBackupWallet->objectName().isEmpty())
            SettingsBackupWallet->setObjectName(QStringLiteral("SettingsBackupWallet"));
        SettingsBackupWallet->resize(400, 410);
        verticalLayout = new QVBoxLayout(SettingsBackupWallet);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsBackupWallet);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_2 = new QVBoxLayout(left);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
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


        verticalLayout_2->addLayout(verticalLayoutTitle);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(5);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        labelSubtitleLocation = new QLabel(left);
        labelSubtitleLocation->setObjectName(QStringLiteral("labelSubtitleLocation"));

        verticalLayout_9->addWidget(labelSubtitleLocation);

        pushButtonDocuments = new QPushButton(left);
        pushButtonDocuments->setObjectName(QStringLiteral("pushButtonDocuments"));
        pushButtonDocuments->setMinimumSize(QSize(0, 50));
        pushButtonDocuments->setMaximumSize(QSize(16777215, 50));

        verticalLayout_9->addWidget(pushButtonDocuments);


        verticalLayout_2->addLayout(verticalLayout_9);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        pushButtonSave = new QPushButton(left);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(200, 50));
        pushButtonSave->setMaximumSize(QSize(200, 50));

        horizontalLayout_7->addWidget(pushButtonSave);


        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        labelDivider = new QLabel(left);
        labelDivider->setObjectName(QStringLiteral("labelDivider"));
        labelDivider->setMinimumSize(QSize(0, 1));
        labelDivider->setMaximumSize(QSize(16777215, 1));

        verticalLayout_2->addWidget(labelDivider);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayoutTitle_2 = new QVBoxLayout();
        verticalLayoutTitle_2->setSpacing(5);
        verticalLayoutTitle_2->setObjectName(QStringLiteral("verticalLayoutTitle_2"));
        labelTitle_2 = new QLabel(left);
        labelTitle_2->setObjectName(QStringLiteral("labelTitle_2"));

        verticalLayoutTitle_2->addWidget(labelTitle_2);

        labelSubtitle_2 = new QLabel(left);
        labelSubtitle_2->setObjectName(QStringLiteral("labelSubtitle_2"));
        labelSubtitle_2->setWordWrap(true);

        verticalLayoutTitle_2->addWidget(labelSubtitle_2);


        verticalLayout_2->addLayout(verticalLayoutTitle_2);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        pushButtonSave_2 = new QPushButton(left);
        pushButtonSave_2->setObjectName(QStringLiteral("pushButtonSave_2"));
        pushButtonSave_2->setMinimumSize(QSize(200, 50));
        pushButtonSave_2->setMaximumSize(QSize(200, 50));

        horizontalLayout_8->addWidget(pushButtonSave_2);


        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout->addWidget(left);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(SettingsBackupWallet);

        QMetaObject::connectSlotsByName(SettingsBackupWallet);
    } // setupUi

    void retranslateUi(QWidget *SettingsBackupWallet)
    {
        SettingsBackupWallet->setWindowTitle(QApplication::translate("SettingsBackupWallet", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SettingsBackupWallet", "TextLabel", Q_NULLPTR));
        labelSubtitle1->setText(QApplication::translate("SettingsBackupWallet", "TextLabel", Q_NULLPTR));
        labelSubtitleLocation->setText(QApplication::translate("SettingsBackupWallet", "TextLabel", Q_NULLPTR));
        pushButtonDocuments->setText(QApplication::translate("SettingsBackupWallet", "PushButton", Q_NULLPTR));
        pushButtonSave->setText(QApplication::translate("SettingsBackupWallet", "PushButton", Q_NULLPTR));
        labelDivider->setText(QString());
        labelTitle_2->setText(QApplication::translate("SettingsBackupWallet", "TextLabel", Q_NULLPTR));
        labelSubtitle_2->setText(QApplication::translate("SettingsBackupWallet", "TextLabel", Q_NULLPTR));
        pushButtonSave_2->setText(QApplication::translate("SettingsBackupWallet", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsBackupWallet: public Ui_SettingsBackupWallet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSBACKUPWALLET_H
