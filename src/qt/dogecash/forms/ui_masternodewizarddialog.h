/********************************************************************************
** Form generated from reading UI file 'masternodewizarddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERNODEWIZARDDIALOG_H
#define UI_MASTERNODEWIZARDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
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

class Ui_MasterNodeWizardDialog
{
public:
    QVBoxLayout *verticalLayout_1;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_1;
    QSpacerItem *horizontalSpacer_1;
    QPushButton *pushButtonSkip;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QStackedWidget *stackedIcon1;
    QWidget *page;
    QVBoxLayout *layoutIcon1;
    QPushButton *pushNumber1;
    QWidget *page_5;
    QLabel *labelLine1;
    QStackedWidget *stackedIcon3;
    QWidget *pageIcon3;
    QVBoxLayout *layoutIcon3;
    QPushButton *pushNumber3;
    QWidget *page_7;
    QLabel *labelLine3;
    QStackedWidget *stackedIcon4;
    QWidget *pageIcon4;
    QVBoxLayout *layoutIcon4;
    QPushButton *pushNumber4;
    QWidget *page_8;
    QSpacerItem *horizontalSpacer_3;
    QWidget *groupContainer;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBoxName;
    QHBoxLayout *horizontalgroup;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushName1;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushName3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushName4;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_1;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelTitle1;
    QSpacerItem *verticalSpacer_1_1;
    QLabel *labelMessage1a;
    QSpacerItem *verticalSpacer_1_2;
    QLabel *labelMessage1b;
    QSpacerItem *verticalSpacer_1_3;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelTitle3;
    QSpacerItem *verticalSpacer_1_4;
    QLineEdit *lineEditName;
    QSpacerItem *verticalSpacer_1_5;
    QLabel *labelMessage3;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelTitle4;
    QLabel *labelSubtitleAddressIp;
    QSpacerItem *verticalSpacer_1_6;
    QLabel *labelSubtitleIp;
    QSpacerItem *verticalSpacer_1_7;
    QLineEdit *lineEditIpAddress;
    QSpacerItem *verticalSpacer_1_8;
    QLabel *labelSubtitlePort;
    QSpacerItem *verticalSpacer_1_9;
    QLineEdit *lineEditPort;
    QSpacerItem *verticalSpacer_1_10;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *btnBack;
    QPushButton *btnNext;

    void setupUi(QDialog *MasterNodeWizardDialog)
    {
        if (MasterNodeWizardDialog->objectName().isEmpty())
            MasterNodeWizardDialog->setObjectName(QStringLiteral("MasterNodeWizardDialog"));
        MasterNodeWizardDialog->resize(715, 602);
        verticalLayout_1 = new QVBoxLayout(MasterNodeWizardDialog);
        verticalLayout_1->setSpacing(0);
        verticalLayout_1->setObjectName(QStringLiteral("verticalLayout_1"));
        verticalLayout_1->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(MasterNodeWizardDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 20, -1, 20);
        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setSpacing(0);
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(-1, -1, 20, -1);
        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer_1);

        pushButtonSkip = new QPushButton(frame);
        pushButtonSkip->setObjectName(QStringLiteral("pushButtonSkip"));
        pushButtonSkip->setMinimumSize(QSize(20, 20));
        pushButtonSkip->setMaximumSize(QSize(20, 20));

        horizontalLayout_1->addWidget(pushButtonSkip);


        verticalLayout_2->addLayout(horizontalLayout_1);

        widget_2 = new QWidget(frame);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 24));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        stackedIcon1 = new QStackedWidget(widget_2);
        stackedIcon1->setObjectName(QStringLiteral("stackedIcon1"));
        stackedIcon1->setMinimumSize(QSize(22, 22));
        stackedIcon1->setMaximumSize(QSize(22, 22));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setMinimumSize(QSize(22, 22));
        page->setMaximumSize(QSize(22, 22));
        layoutIcon1 = new QVBoxLayout(page);
        layoutIcon1->setSpacing(0);
        layoutIcon1->setObjectName(QStringLiteral("layoutIcon1"));
        layoutIcon1->setContentsMargins(0, 0, 0, 0);
        pushNumber1 = new QPushButton(page);
        pushNumber1->setObjectName(QStringLiteral("pushNumber1"));
        pushNumber1->setMinimumSize(QSize(22, 22));
        pushNumber1->setMaximumSize(QSize(22, 22));
        pushNumber1->setCheckable(true);
        pushNumber1->setChecked(true);
        pushNumber1->setAutoExclusive(true);

        layoutIcon1->addWidget(pushNumber1, 0, Qt::AlignVCenter);

        stackedIcon1->addWidget(page);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        stackedIcon1->addWidget(page_5);

        horizontalLayout_2->addWidget(stackedIcon1);

        labelLine1 = new QLabel(widget_2);
        labelLine1->setObjectName(QStringLiteral("labelLine1"));
        labelLine1->setMinimumSize(QSize(0, 1));
        labelLine1->setMaximumSize(QSize(16777215, 1));
        labelLine1->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(labelLine1, 0, Qt::AlignVCenter);

        stackedIcon3 = new QStackedWidget(widget_2);
        stackedIcon3->setObjectName(QStringLiteral("stackedIcon3"));
        stackedIcon3->setMinimumSize(QSize(22, 22));
        stackedIcon3->setMaximumSize(QSize(22, 22));
        pageIcon3 = new QWidget();
        pageIcon3->setObjectName(QStringLiteral("pageIcon3"));
        pageIcon3->setMinimumSize(QSize(22, 22));
        pageIcon3->setMaximumSize(QSize(22, 22));
        layoutIcon3 = new QVBoxLayout(pageIcon3);
        layoutIcon3->setSpacing(0);
        layoutIcon3->setObjectName(QStringLiteral("layoutIcon3"));
        layoutIcon3->setContentsMargins(0, 0, 0, 0);
        pushNumber3 = new QPushButton(pageIcon3);
        pushNumber3->setObjectName(QStringLiteral("pushNumber3"));
        pushNumber3->setMinimumSize(QSize(22, 22));
        pushNumber3->setMaximumSize(QSize(22, 22));
        pushNumber3->setCheckable(true);
        pushNumber3->setChecked(false);
        pushNumber3->setAutoExclusive(true);

        layoutIcon3->addWidget(pushNumber3, 0, Qt::AlignVCenter);

        stackedIcon3->addWidget(pageIcon3);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        stackedIcon3->addWidget(page_7);

        horizontalLayout_2->addWidget(stackedIcon3);

        labelLine3 = new QLabel(widget_2);
        labelLine3->setObjectName(QStringLiteral("labelLine3"));
        labelLine3->setMinimumSize(QSize(0, 1));
        labelLine3->setMaximumSize(QSize(16777215, 1));
        labelLine3->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(labelLine3);

        stackedIcon4 = new QStackedWidget(widget_2);
        stackedIcon4->setObjectName(QStringLiteral("stackedIcon4"));
        stackedIcon4->setMinimumSize(QSize(22, 22));
        stackedIcon4->setMaximumSize(QSize(22, 22));
        pageIcon4 = new QWidget();
        pageIcon4->setObjectName(QStringLiteral("pageIcon4"));
        pageIcon4->setMinimumSize(QSize(22, 22));
        pageIcon4->setMaximumSize(QSize(22, 22));
        layoutIcon4 = new QVBoxLayout(pageIcon4);
        layoutIcon4->setSpacing(0);
        layoutIcon4->setObjectName(QStringLiteral("layoutIcon4"));
        layoutIcon4->setContentsMargins(0, 0, 0, 0);
        pushNumber4 = new QPushButton(pageIcon4);
        pushNumber4->setObjectName(QStringLiteral("pushNumber4"));
        pushNumber4->setMinimumSize(QSize(22, 22));
        pushNumber4->setMaximumSize(QSize(22, 22));
        pushNumber4->setCheckable(true);
        pushNumber4->setChecked(false);
        pushNumber4->setAutoExclusive(true);

        layoutIcon4->addWidget(pushNumber4, 0, Qt::AlignVCenter);

        stackedIcon4->addWidget(pageIcon4);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        stackedIcon4->addWidget(page_8);

        horizontalLayout_2->addWidget(stackedIcon4);

        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(widget_2);

        groupContainer = new QWidget(frame);
        groupContainer->setObjectName(QStringLiteral("groupContainer"));
        groupContainer->setAutoFillBackground(true);
        horizontalLayout_3 = new QHBoxLayout(groupContainer);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBoxName = new QGroupBox(groupContainer);
        groupBoxName->setObjectName(QStringLiteral("groupBoxName"));
        groupBoxName->setAutoFillBackground(true);
        horizontalgroup = new QHBoxLayout(groupBoxName);
        horizontalgroup->setSpacing(0);
        horizontalgroup->setObjectName(QStringLiteral("horizontalgroup"));
        horizontalgroup->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalgroup->addItem(horizontalSpacer_4);

        pushName1 = new QPushButton(groupBoxName);
        pushName1->setObjectName(QStringLiteral("pushName1"));
        pushName1->setMinimumSize(QSize(80, 0));
        pushName1->setMaximumSize(QSize(80, 16777215));
        pushName1->setCheckable(true);
        pushName1->setChecked(true);
        pushName1->setAutoExclusive(false);

        horizontalgroup->addWidget(pushName1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalgroup->addItem(horizontalSpacer_5);

        pushName3 = new QPushButton(groupBoxName);
        pushName3->setObjectName(QStringLiteral("pushName3"));
        pushName3->setMinimumSize(QSize(80, 0));
        pushName3->setMaximumSize(QSize(80, 16777215));
        pushName3->setCheckable(true);
        pushName3->setAutoExclusive(false);

        horizontalgroup->addWidget(pushName3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalgroup->addItem(horizontalSpacer_6);

        pushName4 = new QPushButton(groupBoxName);
        pushName4->setObjectName(QStringLiteral("pushName4"));
        pushName4->setMinimumSize(QSize(80, 0));
        pushName4->setMaximumSize(QSize(80, 16777215));
        pushName4->setCheckable(true);
        pushName4->setAutoExclusive(false);

        horizontalgroup->addWidget(pushName4);

        horizontalSpacer_7 = new QSpacerItem(70, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalgroup->addItem(horizontalSpacer_7);


        horizontalLayout_3->addWidget(groupBoxName);


        verticalLayout_2->addWidget(groupContainer);

        verticalSpacer_1 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_1);

        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(0, 350));
        stackedWidget->setMaximumSize(QSize(16777215, 350));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        verticalLayout_3 = new QVBoxLayout(page_1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(80, 12, 80, 12);
        labelTitle1 = new QLabel(page_1);
        labelTitle1->setObjectName(QStringLiteral("labelTitle1"));
        labelTitle1->setMinimumSize(QSize(0, 50));
        labelTitle1->setMaximumSize(QSize(16777215, 50));

        verticalLayout_3->addWidget(labelTitle1, 0, Qt::AlignHCenter);

        verticalSpacer_1_1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_1_1);

        labelMessage1a = new QLabel(page_1);
        labelMessage1a->setObjectName(QStringLiteral("labelMessage1a"));
        labelMessage1a->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        labelMessage1a->setWordWrap(true);

        verticalLayout_3->addWidget(labelMessage1a);

        verticalSpacer_1_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_1_2);

        labelMessage1b = new QLabel(page_1);
        labelMessage1b->setObjectName(QStringLiteral("labelMessage1b"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelMessage1b->setFont(font);
        labelMessage1b->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelMessage1b);

        verticalSpacer_1_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_1_3);

        verticalLayout_3->setStretch(2, 3);
        stackedWidget->addWidget(page_1);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(140, 12, 140, 12);
        labelTitle3 = new QLabel(page_3);
        labelTitle3->setObjectName(QStringLiteral("labelTitle3"));
        labelTitle3->setMinimumSize(QSize(0, 50));
        labelTitle3->setMaximumSize(QSize(16777215, 50));

        verticalLayout_4->addWidget(labelTitle3, 0, Qt::AlignHCenter);

        verticalSpacer_1_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_1_4);

        lineEditName = new QLineEdit(page_3);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));

        verticalLayout_4->addWidget(lineEditName);

        verticalSpacer_1_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_1_5);

        labelMessage3 = new QLabel(page_3);
        labelMessage3->setObjectName(QStringLiteral("labelMessage3"));
        labelMessage3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        labelMessage3->setWordWrap(true);

        verticalLayout_4->addWidget(labelMessage3);

        verticalLayout_4->setStretch(4, 3);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        verticalLayout_5 = new QVBoxLayout(page_4);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(140, 12, 140, 12);
        labelTitle4 = new QLabel(page_4);
        labelTitle4->setObjectName(QStringLiteral("labelTitle4"));
        labelTitle4->setMinimumSize(QSize(0, 50));
        labelTitle4->setMaximumSize(QSize(16777215, 50));

        verticalLayout_5->addWidget(labelTitle4, 0, Qt::AlignHCenter);

        labelSubtitleAddressIp = new QLabel(page_4);
        labelSubtitleAddressIp->setObjectName(QStringLiteral("labelSubtitleAddressIp"));
        labelSubtitleAddressIp->setAlignment(Qt::AlignCenter);
        labelSubtitleAddressIp->setWordWrap(true);

        verticalLayout_5->addWidget(labelSubtitleAddressIp, 0, Qt::AlignHCenter);

        verticalSpacer_1_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_1_6);

        labelSubtitleIp = new QLabel(page_4);
        labelSubtitleIp->setObjectName(QStringLiteral("labelSubtitleIp"));
        labelSubtitleIp->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(labelSubtitleIp);

        verticalSpacer_1_7 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_1_7);

        lineEditIpAddress = new QLineEdit(page_4);
        lineEditIpAddress->setObjectName(QStringLiteral("lineEditIpAddress"));

        verticalLayout_5->addWidget(lineEditIpAddress);

        verticalSpacer_1_8 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_1_8);

        labelSubtitlePort = new QLabel(page_4);
        labelSubtitlePort->setObjectName(QStringLiteral("labelSubtitlePort"));
        labelSubtitlePort->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(labelSubtitlePort);

        verticalSpacer_1_9 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_1_9);

        lineEditPort = new QLineEdit(page_4);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        verticalLayout_5->addWidget(lineEditPort);

        verticalSpacer_1_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_1_10);

        stackedWidget->addWidget(page_4);

        verticalLayout_2->addWidget(stackedWidget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        btnBack = new QPushButton(frame);
        btnBack->setObjectName(QStringLiteral("btnBack"));
        btnBack->setMinimumSize(QSize(0, 50));
        btnBack->setMaximumSize(QSize(180, 16777215));

        horizontalLayout_4->addWidget(btnBack);

        btnNext = new QPushButton(frame);
        btnNext->setObjectName(QStringLiteral("btnNext"));
        btnNext->setMinimumSize(QSize(0, 50));
        btnNext->setMaximumSize(QSize(180, 16777215));

        horizontalLayout_4->addWidget(btnNext);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 2);
        horizontalLayout_4->setStretch(2, 2);

        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout_1->addWidget(frame);


        retranslateUi(MasterNodeWizardDialog);

        stackedIcon1->setCurrentIndex(0);
        stackedIcon3->setCurrentIndex(0);
        stackedIcon4->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MasterNodeWizardDialog);
    } // setupUi

    void retranslateUi(QDialog *MasterNodeWizardDialog)
    {
        MasterNodeWizardDialog->setWindowTitle(QApplication::translate("MasterNodeWizardDialog", "Dialog", Q_NULLPTR));
        pushButtonSkip->setText(QString());
        pushNumber1->setText(QApplication::translate("MasterNodeWizardDialog", "1", Q_NULLPTR));
        labelLine1->setText(QString());
        pushNumber3->setText(QApplication::translate("MasterNodeWizardDialog", "2", Q_NULLPTR));
        labelLine3->setText(QString());
        pushNumber4->setText(QApplication::translate("MasterNodeWizardDialog", "3", Q_NULLPTR));
        groupBoxName->setTitle(QString());
        pushName1->setText(QApplication::translate("MasterNodeWizardDialog", "Intro", Q_NULLPTR));
        pushName3->setText(QApplication::translate("MasterNodeWizardDialog", "Name", Q_NULLPTR));
        pushName4->setText(QApplication::translate("MasterNodeWizardDialog", "Address", Q_NULLPTR));
        labelTitle1->setText(QApplication::translate("MasterNodeWizardDialog", "Create New Masternode Controller", Q_NULLPTR));
        labelMessage1a->setText(QApplication::translate("MasterNodeWizardDialog", "<html><head/><body><p>To create a DogeCash Masternode you must dedicate 10.000 DOGEC (the unit of DogeCash) to the network (however, these coins are still yours and will never leave your possession). </p><p></p><p>You can deactivate the node and unlock the coins at any time.</p></body></html>", Q_NULLPTR));
        labelMessage1b->setText(QApplication::translate("MasterNodeWizardDialog", "Make sure you have this amount of coins.", Q_NULLPTR));
        labelTitle3->setText(QApplication::translate("MasterNodeWizardDialog", "Set Masternode\342\200\231s Name", Q_NULLPTR));
        labelMessage3->setText(QApplication::translate("MasterNodeWizardDialog", "<html><head/><body><p>A transaction of 5,000 DOGEC will be made</p><p>to a new empty address in your wallet.</p><p>The Address is labeled under the master node's name.</p></body></html>", Q_NULLPTR));
        labelTitle4->setText(QApplication::translate("MasterNodeWizardDialog", "Set Masternode\342\200\231s IP and port", Q_NULLPTR));
        labelSubtitleAddressIp->setText(QApplication::translate("MasterNodeWizardDialog", "Address of the node that must always be online running the actual master node.", Q_NULLPTR));
        labelSubtitleIp->setText(QApplication::translate("MasterNodeWizardDialog", "Enter IP address", Q_NULLPTR));
        labelSubtitlePort->setText(QApplication::translate("MasterNodeWizardDialog", "Enter Port", Q_NULLPTR));
        btnBack->setText(QApplication::translate("MasterNodeWizardDialog", "CANCEL", Q_NULLPTR));
        btnNext->setText(QApplication::translate("MasterNodeWizardDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MasterNodeWizardDialog: public Ui_MasterNodeWizardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERNODEWIZARDDIALOG_H
