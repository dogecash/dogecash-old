/********************************************************************************
** Form generated from reading UI file 'settingsbittoolwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSBITTOOLWIDGET_H
#define UI_SETTINGSBITTOOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsBitToolWidget
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
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushLeft;
    QPushButton *pushRight;
    QStackedWidget *stackedWidget;
    QWidget *pageDecrypt;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelSubtitleKey;
    QLineEdit *lineEditKey;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelSubtitlePassphrase;
    QLineEdit *lineEditPassphrase;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_10;
    QLabel *labelSubtitleDecryptResult;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditDecryptResult;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonImport;
    QLabel *statusLabel_DEC;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonDecryptClear;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonDecrypt;
    QWidget *pageEncrypt;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *verticalSpacer_8;
    QWidget *containerAddressEnc;
    QVBoxLayout *containerAddressEncLayout;
    QLabel *labelSubtitleAddress;
    QLineEdit *addressIn_ENC;
    QSpacerItem *verticalSpacer_6;
    QWidget *containerAddress;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelSubtitleMessage;
    QLineEdit *passphraseIn_ENC;
    QSpacerItem *verticalSpacer_7;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelSubtitleEncryptedKey;
    QLineEdit *encryptedKeyOut_ENC;
    QLabel *statusLabel_ENC;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonClear;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonEncrypt;

    void setupUi(QWidget *SettingsBitToolWidget)
    {
        if (SettingsBitToolWidget->objectName().isEmpty())
            SettingsBitToolWidget->setObjectName(QStringLiteral("SettingsBitToolWidget"));
        SettingsBitToolWidget->resize(490, 624);
        verticalLayout = new QVBoxLayout(SettingsBitToolWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsBitToolWidget);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(40);
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

        groupBox = new QGroupBox(left);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushLeft = new QPushButton(groupBox);
        pushLeft->setObjectName(QStringLiteral("pushLeft"));
        pushLeft->setMinimumSize(QSize(120, 30));
        pushLeft->setMaximumSize(QSize(120, 30));
        pushLeft->setCheckable(true);
        pushLeft->setAutoExclusive(true);

        horizontalLayout_4->addWidget(pushLeft);

        pushRight = new QPushButton(groupBox);
        pushRight->setObjectName(QStringLiteral("pushRight"));
        pushRight->setMinimumSize(QSize(120, 30));
        pushRight->setMaximumSize(QSize(120, 30));
        pushRight->setCheckable(true);
        pushRight->setChecked(true);
        pushRight->setAutoExclusive(true);

        horizontalLayout_4->addWidget(pushRight);


        horizontalLayout_3->addWidget(groupBox, 0, Qt::AlignTop);

        horizontalLayout_3->setStretch(0, 3);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        stackedWidget = new QStackedWidget(left);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageDecrypt = new QWidget();
        pageDecrypt->setObjectName(QStringLiteral("pageDecrypt"));
        verticalLayout_5 = new QVBoxLayout(pageDecrypt);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(pageDecrypt);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 100));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(9);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        labelSubtitleKey = new QLabel(widget);
        labelSubtitleKey->setObjectName(QStringLiteral("labelSubtitleKey"));
        labelSubtitleKey->setMinimumSize(QSize(0, 20));
        labelSubtitleKey->setMaximumSize(QSize(16777215, 20));

        verticalLayout_7->addWidget(labelSubtitleKey);

        lineEditKey = new QLineEdit(widget);
        lineEditKey->setObjectName(QStringLiteral("lineEditKey"));
        lineEditKey->setMinimumSize(QSize(0, 50));
        lineEditKey->setMaximumSize(QSize(16777215, 50));

        verticalLayout_7->addWidget(lineEditKey);


        horizontalLayout_6->addLayout(verticalLayout_7);

        horizontalLayout_6->setStretch(0, 2);

        verticalLayout_4->addLayout(horizontalLayout_6);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_3);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(9);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        labelSubtitlePassphrase = new QLabel(widget);
        labelSubtitlePassphrase->setObjectName(QStringLiteral("labelSubtitlePassphrase"));
        labelSubtitlePassphrase->setMaximumSize(QSize(16777215, 20));

        verticalLayout_9->addWidget(labelSubtitlePassphrase);

        lineEditPassphrase = new QLineEdit(widget);
        lineEditPassphrase->setObjectName(QStringLiteral("lineEditPassphrase"));
        lineEditPassphrase->setMinimumSize(QSize(0, 50));
        lineEditPassphrase->setMaximumSize(QSize(16777215, 50));

        verticalLayout_9->addWidget(lineEditPassphrase);


        verticalLayout_4->addLayout(verticalLayout_9);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_4);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        verticalLayout_10 = new QVBoxLayout(widget_3);
        verticalLayout_10->setSpacing(9);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        labelSubtitleDecryptResult = new QLabel(widget_3);
        labelSubtitleDecryptResult->setObjectName(QStringLiteral("labelSubtitleDecryptResult"));
        labelSubtitleDecryptResult->setMinimumSize(QSize(0, 20));
        labelSubtitleDecryptResult->setMaximumSize(QSize(16777215, 20));

        verticalLayout_10->addWidget(labelSubtitleDecryptResult);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditDecryptResult = new QLineEdit(widget_4);
        lineEditDecryptResult->setObjectName(QStringLiteral("lineEditDecryptResult"));
        lineEditDecryptResult->setMinimumSize(QSize(0, 50));
        lineEditDecryptResult->setMaximumSize(QSize(16777215, 50));

        horizontalLayout->addWidget(lineEditDecryptResult, 0, Qt::AlignVCenter);

        horizontalSpacer_4 = new QSpacerItem(20, 50, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButtonImport = new QPushButton(widget_4);
        pushButtonImport->setObjectName(QStringLiteral("pushButtonImport"));
        pushButtonImport->setMinimumSize(QSize(140, 40));

        horizontalLayout->addWidget(pushButtonImport);

        horizontalLayout->setStretch(0, 6);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_10->addWidget(widget_4);


        verticalLayout_4->addWidget(widget_3);

        statusLabel_DEC = new QLabel(widget);
        statusLabel_DEC->setObjectName(QStringLiteral("statusLabel_DEC"));
        statusLabel_DEC->setMaximumSize(QSize(16777215, 40));

        verticalLayout_4->addWidget(statusLabel_DEC);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        pushButtonDecryptClear = new QPushButton(widget);
        pushButtonDecryptClear->setObjectName(QStringLiteral("pushButtonDecryptClear"));
        pushButtonDecryptClear->setMinimumSize(QSize(200, 50));
        pushButtonDecryptClear->setMaximumSize(QSize(200, 50));

        horizontalLayout_7->addWidget(pushButtonDecryptClear);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        pushButtonDecrypt = new QPushButton(widget);
        pushButtonDecrypt->setObjectName(QStringLiteral("pushButtonDecrypt"));
        pushButtonDecrypt->setMinimumSize(QSize(200, 50));
        pushButtonDecrypt->setMaximumSize(QSize(200, 50));

        horizontalLayout_7->addWidget(pushButtonDecrypt);


        verticalLayout_4->addLayout(horizontalLayout_7);


        verticalLayout_5->addWidget(widget);

        stackedWidget->addWidget(pageDecrypt);
        pageEncrypt = new QWidget();
        pageEncrypt->setObjectName(QStringLiteral("pageEncrypt"));
        verticalLayout_11 = new QVBoxLayout(pageEncrypt);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_11->addItem(verticalSpacer_8);

        containerAddressEnc = new QWidget(pageEncrypt);
        containerAddressEnc->setObjectName(QStringLiteral("containerAddressEnc"));
        containerAddressEncLayout = new QVBoxLayout(containerAddressEnc);
        containerAddressEncLayout->setSpacing(5);
        containerAddressEncLayout->setObjectName(QStringLiteral("containerAddressEncLayout"));
        containerAddressEncLayout->setContentsMargins(0, 0, 0, 0);
        labelSubtitleAddress = new QLabel(containerAddressEnc);
        labelSubtitleAddress->setObjectName(QStringLiteral("labelSubtitleAddress"));
        labelSubtitleAddress->setMinimumSize(QSize(0, 20));
        labelSubtitleAddress->setMaximumSize(QSize(16777215, 20));

        containerAddressEncLayout->addWidget(labelSubtitleAddress);

        addressIn_ENC = new QLineEdit(containerAddressEnc);
        addressIn_ENC->setObjectName(QStringLiteral("addressIn_ENC"));
        addressIn_ENC->setMinimumSize(QSize(0, 50));

        containerAddressEncLayout->addWidget(addressIn_ENC);


        verticalLayout_11->addWidget(containerAddressEnc);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_11->addItem(verticalSpacer_6);

        containerAddress = new QWidget(pageEncrypt);
        containerAddress->setObjectName(QStringLiteral("containerAddress"));
        horizontalLayout_9 = new QHBoxLayout(containerAddress);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(5);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        labelSubtitleMessage = new QLabel(containerAddress);
        labelSubtitleMessage->setObjectName(QStringLiteral("labelSubtitleMessage"));
        labelSubtitleMessage->setMinimumSize(QSize(0, 20));
        labelSubtitleMessage->setMaximumSize(QSize(16777215, 20));

        verticalLayout_8->addWidget(labelSubtitleMessage);

        passphraseIn_ENC = new QLineEdit(containerAddress);
        passphraseIn_ENC->setObjectName(QStringLiteral("passphraseIn_ENC"));
        passphraseIn_ENC->setMinimumSize(QSize(0, 50));
        passphraseIn_ENC->setMaximumSize(QSize(16777215, 50));

        verticalLayout_8->addWidget(passphraseIn_ENC);


        horizontalLayout_9->addLayout(verticalLayout_8);

        horizontalLayout_9->setStretch(0, 2);

        verticalLayout_11->addWidget(containerAddress);

        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_11->addItem(verticalSpacer_7);

        widget_2 = new QWidget(pageEncrypt);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 75));
        widget_2->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_6 = new QVBoxLayout(widget_2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        labelSubtitleEncryptedKey = new QLabel(widget_2);
        labelSubtitleEncryptedKey->setObjectName(QStringLiteral("labelSubtitleEncryptedKey"));
        labelSubtitleEncryptedKey->setMinimumSize(QSize(0, 20));
        labelSubtitleEncryptedKey->setMaximumSize(QSize(16777215, 20));

        verticalLayout_6->addWidget(labelSubtitleEncryptedKey);

        encryptedKeyOut_ENC = new QLineEdit(widget_2);
        encryptedKeyOut_ENC->setObjectName(QStringLiteral("encryptedKeyOut_ENC"));
        encryptedKeyOut_ENC->setMinimumSize(QSize(0, 50));

        verticalLayout_6->addWidget(encryptedKeyOut_ENC);


        verticalLayout_11->addWidget(widget_2);

        statusLabel_ENC = new QLabel(pageEncrypt);
        statusLabel_ENC->setObjectName(QStringLiteral("statusLabel_ENC"));

        verticalLayout_11->addWidget(statusLabel_ENC);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_11->addItem(verticalSpacer_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        pushButtonClear = new QPushButton(pageEncrypt);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));
        pushButtonClear->setMinimumSize(QSize(200, 50));

        horizontalLayout_8->addWidget(pushButtonClear);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        pushButtonEncrypt = new QPushButton(pageEncrypt);
        pushButtonEncrypt->setObjectName(QStringLiteral("pushButtonEncrypt"));
        pushButtonEncrypt->setMinimumSize(QSize(200, 50));
        pushButtonEncrypt->setMaximumSize(QSize(200, 50));

        horizontalLayout_8->addWidget(pushButtonEncrypt);


        verticalLayout_11->addLayout(horizontalLayout_8);

        stackedWidget->addWidget(pageEncrypt);

        verticalLayout_2->addWidget(stackedWidget);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout->addWidget(left);


        retranslateUi(SettingsBitToolWidget);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SettingsBitToolWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsBitToolWidget)
    {
        SettingsBitToolWidget->setWindowTitle(QApplication::translate("SettingsBitToolWidget", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SettingsBitToolWidget", "TextLabel", Q_NULLPTR));
        labelSubtitle1->setText(QApplication::translate("SettingsBitToolWidget", "TextLabel", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushLeft->setText(QApplication::translate("SettingsBitToolWidget", "PushButton", Q_NULLPTR));
        pushRight->setText(QApplication::translate("SettingsBitToolWidget", "PushButton", Q_NULLPTR));
        labelSubtitleKey->setText(QApplication::translate("SettingsBitToolWidget", "TextLabel", Q_NULLPTR));
        labelSubtitlePassphrase->setText(QApplication::translate("SettingsBitToolWidget", "TextLabel", Q_NULLPTR));
        labelSubtitleDecryptResult->setText(QApplication::translate("SettingsBitToolWidget", "Decrypt Address Result", Q_NULLPTR));
        pushButtonImport->setText(QApplication::translate("SettingsBitToolWidget", "Import Address", Q_NULLPTR));
        statusLabel_DEC->setText(QString());
        pushButtonDecryptClear->setText(QApplication::translate("SettingsBitToolWidget", "Clear", Q_NULLPTR));
        pushButtonDecrypt->setText(QApplication::translate("SettingsBitToolWidget", "PushButton", Q_NULLPTR));
        labelSubtitleAddress->setText(QApplication::translate("SettingsBitToolWidget", "TextLabel", Q_NULLPTR));
        labelSubtitleMessage->setText(QApplication::translate("SettingsBitToolWidget", "TextLabel", Q_NULLPTR));
        labelSubtitleEncryptedKey->setText(QApplication::translate("SettingsBitToolWidget", "TextLabel", Q_NULLPTR));
        statusLabel_ENC->setText(QApplication::translate("SettingsBitToolWidget", "TextLabel", Q_NULLPTR));
        pushButtonClear->setText(QApplication::translate("SettingsBitToolWidget", "Clear", Q_NULLPTR));
        pushButtonEncrypt->setText(QApplication::translate("SettingsBitToolWidget", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsBitToolWidget: public Ui_SettingsBitToolWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSBITTOOLWIDGET_H
