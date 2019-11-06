/********************************************************************************
** Form generated from reading UI file 'send.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEND_H
#define UI_SEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/dogecash/optionbutton.h"

QT_BEGIN_NAMESPACE

class Ui_send
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushLeft;
    QPushButton *pushRight;
    QLabel *labelSubtitle2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelSubtitleAddress;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelSubtitleAmount;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonFee;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButtonClear;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonAddRecipient;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_10;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QVBoxLayout *verticalLayout_71;
    QWidget *coinWidget;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalSend;
    QLabel *labelTitleTotalSend;
    QLabel *labelAmountSend;
    QSpacerItem *horizontalSpacer_9;
    QLabel *labelLine;
    QSpacerItem *horizontalSpacer_10;
    QVBoxLayout *verticalRemaining;
    QLabel *labelTitleTotalRemaining;
    QLabel *labelAmountRemaining;
    QWidget *page_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonSave;
    QWidget *right;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    OptionButton *btnCoinControl;
    OptionButton *btnChangeAddress;
    OptionButton *btnUri;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonReset;

    void setupUi(QWidget *send)
    {
        if (send->objectName().isEmpty())
            send->setObjectName(QStringLiteral("send"));
        send->resize(893, 700);
        horizontalLayout_2 = new QHBoxLayout(send);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(send);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(0);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, 20, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(left);
        labelSubtitle1->setObjectName(QStringLiteral("labelSubtitle1"));

        verticalLayout->addWidget(labelSubtitle1);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox = new QGroupBox(left);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
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


        verticalLayout_6->addWidget(groupBox);

        labelSubtitle2 = new QLabel(left);
        labelSubtitle2->setObjectName(QStringLiteral("labelSubtitle2"));
        labelSubtitle2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(labelSubtitle2);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_22->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_22->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 0, 20, 0);
        labelSubtitleAddress = new QLabel(left);
        labelSubtitleAddress->setObjectName(QStringLiteral("labelSubtitleAddress"));
        labelSubtitleAddress->setStyleSheet(QStringLiteral("margin-left:8px;"));

        horizontalLayout->addWidget(labelSubtitleAddress);

        horizontalSpacer_3 = new QSpacerItem(40, 1, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        labelSubtitleAmount = new QLabel(left);
        labelSubtitleAmount->setObjectName(QStringLiteral("labelSubtitleAmount"));

        horizontalLayout->addWidget(labelSubtitleAmount);

        horizontalLayout->setStretch(0, 6);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_22->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(left);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 350));
        scrollArea->setStyleSheet(QLatin1String("#scrollArea {\n"
"            background:transparent;\n"
"            margin-top:10px;\n"
"}"));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 591, 16));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        scrollAreaWidgetContents->setAutoFillBackground(false);
        scrollAreaWidgetContents->setStyleSheet(QLatin1String("#scrollAreaWidgetContents {\n"
"             background:transparent;\n"
"             }"));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_22->addWidget(scrollArea);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_22->addItem(verticalSpacer_4);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(-1, -1, 20, -1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_4);

        pushButtonFee = new QPushButton(left);
        pushButtonFee->setObjectName(QStringLiteral("pushButtonFee"));

        horizontalLayout_20->addWidget(pushButtonFee);

        horizontalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_11);

        pushButtonClear = new QPushButton(left);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));
        pushButtonClear->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_20->addWidget(pushButtonClear);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer_6);

        pushButtonAddRecipient = new QPushButton(left);
        pushButtonAddRecipient->setObjectName(QStringLiteral("pushButtonAddRecipient"));

        horizontalLayout_20->addWidget(pushButtonAddRecipient);


        verticalLayout_22->addLayout(horizontalLayout_20);

        verticalSpacer = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_22->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, 20, -1);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(8, -1, -1, -1);
        stackedWidget = new QStackedWidget(left);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(0, 60));
        stackedWidget->setMaximumSize(QSize(16777215, 60));
        page1 = new QWidget();
        page1->setObjectName(QStringLiteral("page1"));
        verticalLayout_71 = new QVBoxLayout(page1);
        verticalLayout_71->setSpacing(6);
        verticalLayout_71->setObjectName(QStringLiteral("verticalLayout_71"));
        verticalLayout_71->setContentsMargins(12, 0, 0, 0);
        coinWidget = new QWidget(page1);
        coinWidget->setObjectName(QStringLiteral("coinWidget"));
        coinWidget->setMinimumSize(QSize(0, 60));
        coinWidget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_9 = new QHBoxLayout(coinWidget);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(20, 10, 20, 10);
        verticalSend = new QVBoxLayout();
        verticalSend->setSpacing(0);
        verticalSend->setObjectName(QStringLiteral("verticalSend"));
        labelTitleTotalSend = new QLabel(coinWidget);
        labelTitleTotalSend->setObjectName(QStringLiteral("labelTitleTotalSend"));

        verticalSend->addWidget(labelTitleTotalSend);

        labelAmountSend = new QLabel(coinWidget);
        labelAmountSend->setObjectName(QStringLiteral("labelAmountSend"));

        verticalSend->addWidget(labelAmountSend);


        horizontalLayout_9->addLayout(verticalSend);

        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        labelLine = new QLabel(coinWidget);
        labelLine->setObjectName(QStringLiteral("labelLine"));
        labelLine->setMinimumSize(QSize(1, 0));
        labelLine->setMaximumSize(QSize(1, 16777215));

        horizontalLayout_9->addWidget(labelLine);

        horizontalSpacer_10 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);

        verticalRemaining = new QVBoxLayout();
        verticalRemaining->setSpacing(0);
        verticalRemaining->setObjectName(QStringLiteral("verticalRemaining"));
        labelTitleTotalRemaining = new QLabel(coinWidget);
        labelTitleTotalRemaining->setObjectName(QStringLiteral("labelTitleTotalRemaining"));

        verticalRemaining->addWidget(labelTitleTotalRemaining);

        labelAmountRemaining = new QLabel(coinWidget);
        labelAmountRemaining->setObjectName(QStringLiteral("labelAmountRemaining"));

        verticalRemaining->addWidget(labelAmountRemaining);


        horizontalLayout_9->addLayout(verticalRemaining);


        verticalLayout_71->addWidget(coinWidget);

        stackedWidget->addWidget(page1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        horizontalLayout_10->addWidget(stackedWidget);


        horizontalLayout_7->addLayout(horizontalLayout_10);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        pushButtonSave = new QPushButton(left);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(200, 50));
        pushButtonSave->setMaximumSize(QSize(200, 50));

        horizontalLayout_7->addWidget(pushButtonSave, 0, Qt::AlignBottom);


        verticalLayout_22->addLayout(horizontalLayout_7);

        verticalLayout_22->setStretch(3, 1);

        verticalLayout_3->addLayout(verticalLayout_22);


        horizontalLayout_2->addWidget(left);

        right = new QWidget(send);
        right->setObjectName(QStringLiteral("right"));
        verticalLayout_5 = new QVBoxLayout(right);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        btnCoinControl = new OptionButton(right);
        btnCoinControl->setObjectName(QStringLiteral("btnCoinControl"));
        btnCoinControl->setMinimumSize(QSize(0, 50));

        verticalLayout_4->addWidget(btnCoinControl);

        btnChangeAddress = new OptionButton(right);
        btnChangeAddress->setObjectName(QStringLiteral("btnChangeAddress"));
        btnChangeAddress->setMinimumSize(QSize(0, 50));

        verticalLayout_4->addWidget(btnChangeAddress);

        btnUri = new OptionButton(right);
        btnUri->setObjectName(QStringLiteral("btnUri"));
        btnUri->setMinimumSize(QSize(0, 50));

        verticalLayout_4->addWidget(btnUri);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        pushButtonReset = new QPushButton(right);
        pushButtonReset->setObjectName(QStringLiteral("pushButtonReset"));
        pushButtonReset->setMinimumSize(QSize(200, 50));
        pushButtonReset->setMaximumSize(QSize(200, 50));

        horizontalLayout_8->addWidget(pushButtonReset);


        verticalLayout_4->addLayout(horizontalLayout_8);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_2->addWidget(right);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 1);

        retranslateUi(send);

        QMetaObject::connectSlotsByName(send);
    } // setupUi

    void retranslateUi(QWidget *send)
    {
        send->setWindowTitle(QApplication::translate("send", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("send", "Send", Q_NULLPTR));
        labelSubtitle1->setText(QApplication::translate("send", "TextLabel", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushLeft->setText(QApplication::translate("send", "PushButton", Q_NULLPTR));
        pushRight->setText(QApplication::translate("send", "PushButton", Q_NULLPTR));
        labelSubtitle2->setText(QApplication::translate("send", "TextLabel", Q_NULLPTR));
        labelSubtitleAddress->setText(QApplication::translate("send", "TextLabel", Q_NULLPTR));
        labelSubtitleAmount->setText(QApplication::translate("send", "TextLabel", Q_NULLPTR));
        pushButtonFee->setText(QApplication::translate("send", "PushButton", Q_NULLPTR));
        pushButtonClear->setText(QApplication::translate("send", "PushButton", Q_NULLPTR));
        pushButtonAddRecipient->setText(QApplication::translate("send", "PushButton", Q_NULLPTR));
        labelTitleTotalSend->setText(QApplication::translate("send", "TextLabel", Q_NULLPTR));
        labelAmountSend->setText(QApplication::translate("send", "TextLabel", Q_NULLPTR));
        labelLine->setText(QString());
        labelTitleTotalRemaining->setText(QApplication::translate("send", "TextLabel", Q_NULLPTR));
        labelAmountRemaining->setText(QApplication::translate("send", "TextLabel", Q_NULLPTR));
        pushButtonSave->setText(QApplication::translate("send", "PushButton", Q_NULLPTR));
        pushButtonReset->setText(QApplication::translate("send", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class send: public Ui_send {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEND_H
