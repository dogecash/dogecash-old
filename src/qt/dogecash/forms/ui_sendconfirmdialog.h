/********************************************************************************
** Form generated from reading UI file 'sendconfirmdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCONFIRMDIALOG_H
#define UI_SENDCONFIRMDIALOG_H

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

class Ui_TxDetailDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_1;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnEsc;
    QSpacerItem *verticalSpacer;
    QWidget *layoutScroll;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_7;
    QWidget *content;
    QVBoxLayout *verticalLayout_2;
    QWidget *contentID;
    QHBoxLayout *horizontalLayout_12;
    QLabel *labelId;
    QLabel *textId;
    QPushButton *pushCopy;
    QLabel *labelDivider9;
    QWidget *contentOutputs;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelSend;
    QLabel *textSend;
    QPushButton *pushOutputs;
    QScrollArea *outputsScrollArea;
    QWidget *container_outputs_base;
    QLabel *labelDivider8;
    QWidget *contentAmount;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelAmount;
    QLabel *textAmount;
    QLabel *labelDivider6;
    QWidget *contentInputs;
    QHBoxLayout *horizontalLayout;
    QLabel *labelInputs;
    QLabel *textInputs;
    QPushButton *pushInputs;
    QFrame *gridInputs;
    QGridLayout *gridLayoutInput;
    QLabel *labelTitlePrevTx;
    QLabel *labelOutputIndex;
    QLabel *labelDivider1;
    QWidget *contentFee;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelFee;
    QLabel *textFee;
    QLabel *labelDivider2;
    QWidget *contentChangeAddress;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelChange;
    QLabel *textChange;
    QLabel *labelDivider4;
    QWidget *contentConfirmations;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelConfirmations;
    QLabel *textConfirmations;
    QLabel *labelDivider7;
    QWidget *contentSize;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelSize;
    QLabel *textSize;
    QLabel *labelDivider3;
    QWidget *contentDate;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelDate;
    QLabel *textDate;
    QLabel *labelDivider5;
    QWidget *contentStatus;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelStatus;
    QLabel *textStatus;
    QSpacerItem *verticalSpacer_2;
    QWidget *containerButtons;
    QHBoxLayout *horizontalLayout1;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnCancel;
    QPushButton *btnSave;

    void setupUi(QWidget *TxDetailDialog)
    {
        if (TxDetailDialog->objectName().isEmpty())
            TxDetailDialog->setObjectName(QStringLiteral("TxDetailDialog"));
        TxDetailDialog->resize(574, 680);
        TxDetailDialog->setMinimumSize(QSize(574, 455));
        TxDetailDialog->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(TxDetailDialog);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(TxDetailDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, 10, 20, -1);
        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_1);

        labelTitle = new QLabel(frame);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setMinimumSize(QSize(0, 40));
        labelTitle->setMaximumSize(QSize(16777215, 40));
        labelTitle->setStyleSheet(QStringLiteral("padding-left:24px;"));
        labelTitle->setAlignment(Qt::AlignCenter);
        labelTitle->setMargin(7);

        horizontalLayout_3->addWidget(labelTitle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnEsc = new QPushButton(frame);
        btnEsc->setObjectName(QStringLiteral("btnEsc"));
        btnEsc->setMinimumSize(QSize(24, 24));
        btnEsc->setMaximumSize(QSize(24, 24));

        horizontalLayout_3->addWidget(btnEsc);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        layoutScroll = new QWidget(frame);
        layoutScroll->setObjectName(QStringLiteral("layoutScroll"));
        layoutScroll->setMinimumSize(QSize(0, 0));
        verticalLayout_4 = new QVBoxLayout(layoutScroll);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, -1);
        scrollArea = new QScrollArea(layoutScroll);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QLatin1String("#scrollArea {\n"
"background:transparent;\n"
"}"));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 556, 650));
        scrollAreaWidgetContents->setAutoFillBackground(false);
        scrollAreaWidgetContents->setStyleSheet(QLatin1String("#scrollAreaWidgetContents {\n"
"background:transparent;\n"
"}"));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        content = new QWidget(scrollAreaWidgetContents);
        content->setObjectName(QStringLiteral("content"));
        verticalLayout_2 = new QVBoxLayout(content);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(16, 0, 16, -1);
        contentID = new QWidget(content);
        contentID->setObjectName(QStringLiteral("contentID"));
        horizontalLayout_12 = new QHBoxLayout(contentID);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, -1, -1, -1);
        labelId = new QLabel(contentID);
        labelId->setObjectName(QStringLiteral("labelId"));
        labelId->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_12->addWidget(labelId);

        textId = new QLabel(contentID);
        textId->setObjectName(QStringLiteral("textId"));

        horizontalLayout_12->addWidget(textId);

        pushCopy = new QPushButton(contentID);
        pushCopy->setObjectName(QStringLiteral("pushCopy"));
        pushCopy->setMinimumSize(QSize(34, 34));
        pushCopy->setMaximumSize(QSize(34, 34));
        pushCopy->setIconSize(QSize(24, 24));

        horizontalLayout_12->addWidget(pushCopy);

        horizontalLayout_12->setStretch(1, 1);

        verticalLayout_2->addWidget(contentID);

        labelDivider9 = new QLabel(content);
        labelDivider9->setObjectName(QStringLiteral("labelDivider9"));
        labelDivider9->setMaximumSize(QSize(16777215, 1));
        labelDivider9->setStyleSheet(QStringLiteral("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDivider9);

        contentOutputs = new QWidget(content);
        contentOutputs->setObjectName(QStringLiteral("contentOutputs"));
        horizontalLayout_11 = new QHBoxLayout(contentOutputs);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, -1, 12, -1);
        labelSend = new QLabel(contentOutputs);
        labelSend->setObjectName(QStringLiteral("labelSend"));
        labelSend->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_11->addWidget(labelSend);

        textSend = new QLabel(contentOutputs);
        textSend->setObjectName(QStringLiteral("textSend"));

        horizontalLayout_11->addWidget(textSend);

        pushOutputs = new QPushButton(contentOutputs);
        pushOutputs->setObjectName(QStringLiteral("pushOutputs"));
        pushOutputs->setMinimumSize(QSize(34, 20));
        pushOutputs->setMaximumSize(QSize(38, 20));
        pushOutputs->setStyleSheet(QStringLiteral(""));

        horizontalLayout_11->addWidget(pushOutputs);

        horizontalLayout_11->setStretch(1, 3);

        verticalLayout_2->addWidget(contentOutputs);

        outputsScrollArea = new QScrollArea(content);
        outputsScrollArea->setObjectName(QStringLiteral("outputsScrollArea"));
        outputsScrollArea->setMinimumSize(QSize(0, 50));
        outputsScrollArea->setStyleSheet(QLatin1String("#outputsScrollArea {\n"
"background:transparent;\n"
"}"));
        outputsScrollArea->setWidgetResizable(true);
        container_outputs_base = new QWidget();
        container_outputs_base->setObjectName(QStringLiteral("container_outputs_base"));
        container_outputs_base->setGeometry(QRect(0, 0, 522, 48));
        container_outputs_base->setStyleSheet(QLatin1String("#container_outputs_base {\n"
"background:transparent;\n"
"}"));
        outputsScrollArea->setWidget(container_outputs_base);

        verticalLayout_2->addWidget(outputsScrollArea);

        labelDivider8 = new QLabel(content);
        labelDivider8->setObjectName(QStringLiteral("labelDivider8"));
        labelDivider8->setMaximumSize(QSize(16777215, 1));
        labelDivider8->setStyleSheet(QStringLiteral("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDivider8);

        contentAmount = new QWidget(content);
        contentAmount->setObjectName(QStringLiteral("contentAmount"));
        horizontalLayout_4 = new QHBoxLayout(contentAmount);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, -1, -1);
        labelAmount = new QLabel(contentAmount);
        labelAmount->setObjectName(QStringLiteral("labelAmount"));
        labelAmount->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(labelAmount);

        textAmount = new QLabel(contentAmount);
        textAmount->setObjectName(QStringLiteral("textAmount"));

        horizontalLayout_4->addWidget(textAmount);

        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_2->addWidget(contentAmount);

        labelDivider6 = new QLabel(content);
        labelDivider6->setObjectName(QStringLiteral("labelDivider6"));
        labelDivider6->setMaximumSize(QSize(16777215, 1));
        labelDivider6->setStyleSheet(QStringLiteral("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDivider6);

        contentInputs = new QWidget(content);
        contentInputs->setObjectName(QStringLiteral("contentInputs"));
        horizontalLayout = new QHBoxLayout(contentInputs);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 12, -1);
        labelInputs = new QLabel(contentInputs);
        labelInputs->setObjectName(QStringLiteral("labelInputs"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelInputs->sizePolicy().hasHeightForWidth());
        labelInputs->setSizePolicy(sizePolicy);
        labelInputs->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(labelInputs);

        textInputs = new QLabel(contentInputs);
        textInputs->setObjectName(QStringLiteral("textInputs"));

        horizontalLayout->addWidget(textInputs);

        pushInputs = new QPushButton(contentInputs);
        pushInputs->setObjectName(QStringLiteral("pushInputs"));
        pushInputs->setMaximumSize(QSize(34, 20));
        pushInputs->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(pushInputs);

        horizontalLayout->setStretch(1, 2);

        verticalLayout_2->addWidget(contentInputs);

        gridInputs = new QFrame(content);
        gridInputs->setObjectName(QStringLiteral("gridInputs"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gridInputs->sizePolicy().hasHeightForWidth());
        gridInputs->setSizePolicy(sizePolicy1);
        gridInputs->setMinimumSize(QSize(0, 90));
        gridLayoutInput = new QGridLayout(gridInputs);
        gridLayoutInput->setObjectName(QStringLiteral("gridLayoutInput"));
        gridLayoutInput->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayoutInput->setVerticalSpacing(0);
        labelTitlePrevTx = new QLabel(gridInputs);
        labelTitlePrevTx->setObjectName(QStringLiteral("labelTitlePrevTx"));

        gridLayoutInput->addWidget(labelTitlePrevTx, 0, 0, 1, 1, Qt::AlignLeft);

        labelOutputIndex = new QLabel(gridInputs);
        labelOutputIndex->setObjectName(QStringLiteral("labelOutputIndex"));
        labelOutputIndex->setAlignment(Qt::AlignCenter);

        gridLayoutInput->addWidget(labelOutputIndex, 0, 1, 1, 1, Qt::AlignLeft);

        gridLayoutInput->setColumnStretch(0, 5);
        gridLayoutInput->setColumnStretch(1, 2);

        verticalLayout_2->addWidget(gridInputs);

        labelDivider1 = new QLabel(content);
        labelDivider1->setObjectName(QStringLiteral("labelDivider1"));
        labelDivider1->setMaximumSize(QSize(16777215, 1));
        labelDivider1->setStyleSheet(QStringLiteral("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDivider1);

        contentFee = new QWidget(content);
        contentFee->setObjectName(QStringLiteral("contentFee"));
        horizontalLayout_7 = new QHBoxLayout(contentFee);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, -1, -1, -1);
        labelFee = new QLabel(contentFee);
        labelFee->setObjectName(QStringLiteral("labelFee"));
        labelFee->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(labelFee);

        textFee = new QLabel(contentFee);
        textFee->setObjectName(QStringLiteral("textFee"));

        horizontalLayout_7->addWidget(textFee);

        horizontalLayout_7->setStretch(1, 1);

        verticalLayout_2->addWidget(contentFee);

        labelDivider2 = new QLabel(content);
        labelDivider2->setObjectName(QStringLiteral("labelDivider2"));
        labelDivider2->setMaximumSize(QSize(16777215, 1));
        labelDivider2->setStyleSheet(QStringLiteral("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDivider2);

        contentChangeAddress = new QWidget(content);
        contentChangeAddress->setObjectName(QStringLiteral("contentChangeAddress"));
        horizontalLayout_6 = new QHBoxLayout(contentChangeAddress);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, -1, -1, -1);
        labelChange = new QLabel(contentChangeAddress);
        labelChange->setObjectName(QStringLiteral("labelChange"));
        labelChange->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(labelChange);

        textChange = new QLabel(contentChangeAddress);
        textChange->setObjectName(QStringLiteral("textChange"));

        horizontalLayout_6->addWidget(textChange);

        horizontalLayout_6->setStretch(1, 1);

        verticalLayout_2->addWidget(contentChangeAddress);

        labelDivider4 = new QLabel(content);
        labelDivider4->setObjectName(QStringLiteral("labelDivider4"));
        labelDivider4->setMaximumSize(QSize(16777215, 1));
        labelDivider4->setStyleSheet(QStringLiteral("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDivider4);

        contentConfirmations = new QWidget(content);
        contentConfirmations->setObjectName(QStringLiteral("contentConfirmations"));
        horizontalLayout_8 = new QHBoxLayout(contentConfirmations);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, -1, -1, -1);
        labelConfirmations = new QLabel(contentConfirmations);
        labelConfirmations->setObjectName(QStringLiteral("labelConfirmations"));
        labelConfirmations->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_8->addWidget(labelConfirmations);

        textConfirmations = new QLabel(contentConfirmations);
        textConfirmations->setObjectName(QStringLiteral("textConfirmations"));

        horizontalLayout_8->addWidget(textConfirmations);

        horizontalLayout_8->setStretch(1, 1);

        verticalLayout_2->addWidget(contentConfirmations);

        labelDivider7 = new QLabel(content);
        labelDivider7->setObjectName(QStringLiteral("labelDivider7"));
        labelDivider7->setMaximumSize(QSize(16777215, 1));
        labelDivider7->setStyleSheet(QStringLiteral("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDivider7);

        contentSize = new QWidget(content);
        contentSize->setObjectName(QStringLiteral("contentSize"));
        horizontalLayout_9 = new QHBoxLayout(contentSize);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, -1, -1, -1);
        labelSize = new QLabel(contentSize);
        labelSize->setObjectName(QStringLiteral("labelSize"));
        labelSize->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_9->addWidget(labelSize);

        textSize = new QLabel(contentSize);
        textSize->setObjectName(QStringLiteral("textSize"));

        horizontalLayout_9->addWidget(textSize);

        horizontalLayout_9->setStretch(1, 1);

        verticalLayout_2->addWidget(contentSize);

        labelDivider3 = new QLabel(content);
        labelDivider3->setObjectName(QStringLiteral("labelDivider3"));
        labelDivider3->setMaximumSize(QSize(16777215, 1));
        labelDivider3->setStyleSheet(QStringLiteral("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDivider3);

        contentDate = new QWidget(content);
        contentDate->setObjectName(QStringLiteral("contentDate"));
        horizontalLayout_5 = new QHBoxLayout(contentDate);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, -1, -1, -1);
        labelDate = new QLabel(contentDate);
        labelDate->setObjectName(QStringLiteral("labelDate"));
        labelDate->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_5->addWidget(labelDate);

        textDate = new QLabel(contentDate);
        textDate->setObjectName(QStringLiteral("textDate"));

        horizontalLayout_5->addWidget(textDate);

        horizontalLayout_5->setStretch(1, 1);

        verticalLayout_2->addWidget(contentDate);

        labelDivider5 = new QLabel(content);
        labelDivider5->setObjectName(QStringLiteral("labelDivider5"));
        labelDivider5->setMaximumSize(QSize(16777215, 1));
        labelDivider5->setStyleSheet(QStringLiteral("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDivider5);

        contentStatus = new QWidget(content);
        contentStatus->setObjectName(QStringLiteral("contentStatus"));
        horizontalLayout_10 = new QHBoxLayout(contentStatus);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, -1, -1, -1);
        labelStatus = new QLabel(contentStatus);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));
        labelStatus->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_10->addWidget(labelStatus);

        textStatus = new QLabel(contentStatus);
        textStatus->setObjectName(QStringLiteral("textStatus"));

        horizontalLayout_10->addWidget(textStatus);

        horizontalLayout_10->setStretch(1, 1);

        verticalLayout_2->addWidget(contentStatus);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        verticalLayout_7->addWidget(content);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);


        verticalLayout->addWidget(layoutScroll);

        containerButtons = new QWidget(frame);
        containerButtons->setObjectName(QStringLiteral("containerButtons"));
        horizontalLayout1 = new QHBoxLayout(containerButtons);
        horizontalLayout1->setObjectName(QStringLiteral("horizontalLayout1"));
        horizontalLayout1->setContentsMargins(10, -1, 20, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout1->addItem(horizontalSpacer_3);

        btnCancel = new QPushButton(containerButtons);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setMinimumSize(QSize(200, 50));

        horizontalLayout1->addWidget(btnCancel);

        btnSave = new QPushButton(containerButtons);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setMinimumSize(QSize(200, 50));

        horizontalLayout1->addWidget(btnSave);

        horizontalLayout1->setStretch(0, 1);
        horizontalLayout1->setStretch(1, 2);
        horizontalLayout1->setStretch(2, 2);

        verticalLayout->addWidget(containerButtons);


        verticalLayout_3->addWidget(frame);


        retranslateUi(TxDetailDialog);

        QMetaObject::connectSlotsByName(TxDetailDialog);
    } // setupUi

    void retranslateUi(QWidget *TxDetailDialog)
    {
        TxDetailDialog->setWindowTitle(QApplication::translate("TxDetailDialog", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("TxDetailDialog", "Transaction Details", Q_NULLPTR));
        btnEsc->setText(QString());
        labelId->setText(QApplication::translate("TxDetailDialog", "ID:", Q_NULLPTR));
        textId->setText(QApplication::translate("TxDetailDialog", "492526e7fa3c810b35016...40a5df85ee227ab00b1156994", Q_NULLPTR));
        pushCopy->setText(QString());
        labelDivider9->setText(QString());
        labelSend->setText(QApplication::translate("TxDetailDialog", "Sending to: ", Q_NULLPTR));
        textSend->setText(QApplication::translate("TxDetailDialog", "D7VFR83SQbiezrW72hjcWJtcfip5krte2Z ", Q_NULLPTR));
        pushOutputs->setText(QString());
        labelDivider8->setText(QString());
        labelAmount->setText(QApplication::translate("TxDetailDialog", "Total amount", Q_NULLPTR));
        textAmount->setText(QApplication::translate("TxDetailDialog", "2 DOGEC", Q_NULLPTR));
        labelDivider6->setText(QString());
        labelInputs->setText(QApplication::translate("TxDetailDialog", "Coin inputs:", Q_NULLPTR));
        textInputs->setText(QApplication::translate("TxDetailDialog", "1 Inputs", Q_NULLPTR));
        pushInputs->setText(QString());
        labelTitlePrevTx->setText(QApplication::translate("TxDetailDialog", "Previous Transaction", Q_NULLPTR));
        labelOutputIndex->setText(QApplication::translate("TxDetailDialog", "Output Index", Q_NULLPTR));
        labelDivider1->setText(QString());
        labelFee->setText(QApplication::translate("TxDetailDialog", "Fee:", Q_NULLPTR));
        textFee->setText(QApplication::translate("TxDetailDialog", "0.0001 DOGEC", Q_NULLPTR));
        labelDivider2->setText(QString());
        labelChange->setText(QApplication::translate("TxDetailDialog", "Change address:", Q_NULLPTR));
        textChange->setText(QApplication::translate("TxDetailDialog", "D7VFR83SQbie\342\200\246BhjcWJtcfip5krte2Z ", Q_NULLPTR));
        labelDivider4->setText(QString());
        labelConfirmations->setText(QApplication::translate("TxDetailDialog", "Confirmations:", Q_NULLPTR));
        textConfirmations->setText(QApplication::translate("TxDetailDialog", "12", Q_NULLPTR));
        labelDivider7->setText(QString());
        labelSize->setText(QApplication::translate("TxDetailDialog", "Size:", Q_NULLPTR));
        textSize->setText(QApplication::translate("TxDetailDialog", "2 kB", Q_NULLPTR));
        labelDivider3->setText(QString());
        labelDate->setText(QApplication::translate("TxDetailDialog", "Date:", Q_NULLPTR));
        textDate->setText(QApplication::translate("TxDetailDialog", "May 25, 2017", Q_NULLPTR));
        labelDivider5->setText(QString());
        labelStatus->setText(QApplication::translate("TxDetailDialog", "Status:", Q_NULLPTR));
        textStatus->setText(QApplication::translate("TxDetailDialog", "Spendable", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("TxDetailDialog", "CANCEL", Q_NULLPTR));
        btnSave->setText(QApplication::translate("TxDetailDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TxDetailDialog: public Ui_TxDetailDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCONFIRMDIALOG_H
