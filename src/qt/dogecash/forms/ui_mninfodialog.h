/********************************************************************************
** Form generated from reading UI file 'mninfodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNINFODIALOG_H
#define UI_MNINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MnInfoDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
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
    QLabel *textAddress;
    QLabel *labelDivider8;
    QWidget *contentAmount;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelAmount;
    QLabel *textAmount;
    QPushButton *pushCopyId;
    QLabel *labelDivider6;
    QWidget *contentInputs;
    QHBoxLayout *horizontalLayout;
    QLabel *labelInputs;
    QLabel *textInputs;
    QLabel *labelDivider1;
    QWidget *contentFee;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelFee;
    QLabel *textStatus;
    QLabel *labelDivider4;
    QWidget *contentExport;
    QHBoxLayout *horizontalLayout_8;
    QLabel *textExport;
    QPushButton *pushExport;
    QLabel *labelDivider7;

    void setupUi(QWidget *MnInfoDialog)
    {
        if (MnInfoDialog->objectName().isEmpty())
            MnInfoDialog->setObjectName(QStringLiteral("MnInfoDialog"));
        MnInfoDialog->resize(574, 700);
        MnInfoDialog->setMinimumSize(QSize(574, 530));
        MnInfoDialog->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(MnInfoDialog);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(MnInfoDialog);
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
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        labelTitle = new QLabel(frame);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setMinimumSize(QSize(0, 40));
        labelTitle->setMaximumSize(QSize(16777215, 40));
        labelTitle->setStyleSheet(QStringLiteral("padding-left:24px;"));
        labelTitle->setAlignment(Qt::AlignCenter);
        labelTitle->setMargin(7);

        horizontalLayout_3->addWidget(labelTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnEsc = new QPushButton(frame);
        btnEsc->setObjectName(QStringLiteral("btnEsc"));
        btnEsc->setMinimumSize(QSize(24, 24));
        btnEsc->setMaximumSize(QSize(24, 24));
        btnEsc->setStyleSheet(QStringLiteral("border:none;"));

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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 570, 596));
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

        textAddress = new QLabel(contentOutputs);
        textAddress->setObjectName(QStringLiteral("textAddress"));

        horizontalLayout_11->addWidget(textAddress);

        horizontalLayout_11->setStretch(1, 3);

        verticalLayout_2->addWidget(contentOutputs);

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

        pushCopyId = new QPushButton(contentAmount);
        pushCopyId->setObjectName(QStringLiteral("pushCopyId"));
        pushCopyId->setMinimumSize(QSize(34, 34));
        pushCopyId->setMaximumSize(QSize(34, 34));

        horizontalLayout_4->addWidget(pushCopyId);

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

        horizontalLayout->setStretch(1, 2);

        verticalLayout_2->addWidget(contentInputs);

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

        textStatus = new QLabel(contentFee);
        textStatus->setObjectName(QStringLiteral("textStatus"));

        horizontalLayout_7->addWidget(textStatus);

        horizontalLayout_7->setStretch(1, 1);

        verticalLayout_2->addWidget(contentFee);

        labelDivider4 = new QLabel(content);
        labelDivider4->setObjectName(QStringLiteral("labelDivider4"));
        labelDivider4->setMaximumSize(QSize(16777215, 1));
        labelDivider4->setStyleSheet(QStringLiteral("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDivider4);

        contentExport = new QWidget(content);
        contentExport->setObjectName(QStringLiteral("contentExport"));
        horizontalLayout_8 = new QHBoxLayout(contentExport);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, -1, -1, -1);
        textExport = new QLabel(contentExport);
        textExport->setObjectName(QStringLiteral("textExport"));
        textExport->setStyleSheet(QStringLiteral("padding-top:1px;"));
        textExport->setLineWidth(0);
        textExport->setWordWrap(true);
        textExport->setIndent(0);

        horizontalLayout_8->addWidget(textExport);

        pushExport = new QPushButton(contentExport);
        pushExport->setObjectName(QStringLiteral("pushExport"));
        pushExport->setMinimumSize(QSize(34, 34));
        pushExport->setMaximumSize(QSize(34, 34));

        horizontalLayout_8->addWidget(pushExport);

        horizontalLayout_8->setStretch(0, 3);

        verticalLayout_2->addWidget(contentExport);

        labelDivider7 = new QLabel(content);
        labelDivider7->setObjectName(QStringLiteral("labelDivider7"));
        labelDivider7->setMaximumSize(QSize(16777215, 1));
        labelDivider7->setStyleSheet(QStringLiteral("background-color:#bababa;"));

        verticalLayout_2->addWidget(labelDivider7);


        verticalLayout_7->addWidget(content);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);


        verticalLayout->addWidget(layoutScroll);


        verticalLayout_3->addWidget(frame);


        retranslateUi(MnInfoDialog);

        QMetaObject::connectSlotsByName(MnInfoDialog);
    } // setupUi

    void retranslateUi(QWidget *MnInfoDialog)
    {
        MnInfoDialog->setWindowTitle(QApplication::translate("MnInfoDialog", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("MnInfoDialog", "Masternode Information", Q_NULLPTR));
        btnEsc->setText(QString());
        labelId->setText(QApplication::translate("MnInfoDialog", "Public Key:", Q_NULLPTR));
        textId->setText(QApplication::translate("MnInfoDialog", "492526e7fa3c810b35016...40a5df85ee227ab00b1156994", Q_NULLPTR));
        pushCopy->setText(QString());
        labelDivider9->setText(QString());
        labelSend->setText(QApplication::translate("MnInfoDialog", "Address: ", Q_NULLPTR));
        textAddress->setText(QApplication::translate("MnInfoDialog", "127.0.0.2:43223", Q_NULLPTR));
        labelDivider8->setText(QString());
        labelAmount->setText(QApplication::translate("MnInfoDialog", "Collaterall tx id:", Q_NULLPTR));
        textAmount->setText(QApplication::translate("MnInfoDialog", "492526e7fa3c810b35016...40a5df85ee227ab00b1156994", Q_NULLPTR));
        pushCopyId->setText(QString());
        labelDivider6->setText(QString());
        labelInputs->setText(QApplication::translate("MnInfoDialog", "Output index:", Q_NULLPTR));
        textInputs->setText(QApplication::translate("MnInfoDialog", "1 Inputs", Q_NULLPTR));
        labelDivider1->setText(QString());
        labelFee->setText(QApplication::translate("MnInfoDialog", "Status:", Q_NULLPTR));
        textStatus->setText(QApplication::translate("MnInfoDialog", "MISSING", Q_NULLPTR));
        labelDivider4->setText(QString());
        textExport->setText(QApplication::translate("MnInfoDialog", "Export data to run the Masternode on a remote server", Q_NULLPTR));
        pushExport->setText(QString());
        labelDivider7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MnInfoDialog: public Ui_MnInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNINFODIALOG_H
