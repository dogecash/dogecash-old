/********************************************************************************
** Form generated from reading UI file 'walletpassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WALLETPASSWORDDIALOG_H
#define UI_WALLETPASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
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

class Ui_WalletPasswordDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnEsc;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelMessage;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelPassword;
    QStackedWidget *stackedWidget_2;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *lineEditPassword;
    QWidget *page_3;
    QSpacerItem *verticalSpacer_4;
    QWidget *layoutRepeat;
    QVBoxLayout *horizontalLayout_2;
    QLabel *labelPasswordRepeat;
    QLineEdit *lineEditPasswordRepeat;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnCancel;
    QPushButton *btnSave;

    void setupUi(QWidget *WalletPasswordDialog)
    {
        if (WalletPasswordDialog->objectName().isEmpty())
            WalletPasswordDialog->setObjectName(QStringLiteral("WalletPasswordDialog"));
        WalletPasswordDialog->resize(550, 450);
        verticalLayout = new QVBoxLayout(WalletPasswordDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(WalletPasswordDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(30, 20, 30, 20);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
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

        horizontalLayout_3->addWidget(btnEsc);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        labelMessage = new QLabel(frame);
        labelMessage->setObjectName(QStringLiteral("labelMessage"));
        labelMessage->setMinimumSize(QSize(0, 50));
        labelMessage->setAlignment(Qt::AlignCenter);
        labelMessage->setWordWrap(true);

        verticalLayout_2->addWidget(labelMessage, 0, Qt::AlignHCenter);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelPassword = new QLabel(frame);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));
        labelPassword->setMinimumSize(QSize(0, 20));
        labelPassword->setMaximumSize(QSize(16777215, 20));

        verticalLayout_3->addWidget(labelPassword);

        stackedWidget_2 = new QStackedWidget(frame);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setMinimumSize(QSize(0, 50));
        stackedWidget_2->setMaximumSize(QSize(16777215, 50));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setMinimumSize(QSize(0, 50));
        page_4->setMaximumSize(QSize(16777215, 50));
        verticalLayout_7 = new QVBoxLayout(page_4);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        lineEditPassword = new QLineEdit(page_4);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setMinimumSize(QSize(0, 50));
        lineEditPassword->setMaximumSize(QSize(16777215, 50));

        verticalLayout_7->addWidget(lineEditPassword);

        stackedWidget_2->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        stackedWidget_2->addWidget(page_3);

        verticalLayout_3->addWidget(stackedWidget_2);


        verticalLayout_2->addLayout(verticalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        layoutRepeat = new QWidget(frame);
        layoutRepeat->setObjectName(QStringLiteral("layoutRepeat"));
        horizontalLayout_2 = new QVBoxLayout(layoutRepeat);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(1, -1, 1, -1);
        labelPasswordRepeat = new QLabel(layoutRepeat);
        labelPasswordRepeat->setObjectName(QStringLiteral("labelPasswordRepeat"));
        labelPasswordRepeat->setMinimumSize(QSize(0, 20));
        labelPasswordRepeat->setMaximumSize(QSize(16777215, 20));

        horizontalLayout_2->addWidget(labelPasswordRepeat);

        lineEditPasswordRepeat = new QLineEdit(layoutRepeat);
        lineEditPasswordRepeat->setObjectName(QStringLiteral("lineEditPasswordRepeat"));
        lineEditPasswordRepeat->setMinimumSize(QSize(0, 50));

        horizontalLayout_2->addWidget(lineEditPasswordRepeat);


        verticalLayout_2->addWidget(layoutRepeat);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btnCancel = new QPushButton(frame);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setMinimumSize(QSize(180, 50));

        horizontalLayout->addWidget(btnCancel);

        btnSave = new QPushButton(frame);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setMinimumSize(QSize(180, 50));

        horizontalLayout->addWidget(btnSave);

        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(frame);


        retranslateUi(WalletPasswordDialog);

        QMetaObject::connectSlotsByName(WalletPasswordDialog);
    } // setupUi

    void retranslateUi(QWidget *WalletPasswordDialog)
    {
        WalletPasswordDialog->setWindowTitle(QApplication::translate("WalletPasswordDialog", "Dialog", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("WalletPasswordDialog", "TextLabel", Q_NULLPTR));
        btnEsc->setText(QApplication::translate("WalletPasswordDialog", "PushButton", Q_NULLPTR));
        labelMessage->setText(QApplication::translate("WalletPasswordDialog", "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim.", Q_NULLPTR));
        labelPassword->setText(QApplication::translate("WalletPasswordDialog", "TextLabel", Q_NULLPTR));
        labelPasswordRepeat->setText(QApplication::translate("WalletPasswordDialog", "TextLabel", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("WalletPasswordDialog", "CANCEL", Q_NULLPTR));
        btnSave->setText(QApplication::translate("WalletPasswordDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WalletPasswordDialog: public Ui_WalletPasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WALLETPASSWORDDIALOG_H
