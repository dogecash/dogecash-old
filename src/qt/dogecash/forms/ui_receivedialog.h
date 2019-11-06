/********************************************************************************
** Form generated from reading UI file 'receivedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVEDIALOG_H
#define UI_RECEIVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReceiveDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frameContainer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_21;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnEsc;
    QSpacerItem *verticalSpacer;
    QLabel *labelQrImg;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelAddress;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer1;
    QPushButton *btnCancel;
    QPushButton *btnSave;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ReceiveDialog)
    {
        if (ReceiveDialog->objectName().isEmpty())
            ReceiveDialog->setObjectName(QStringLiteral("ReceiveDialog"));
        ReceiveDialog->resize(600, 550);
        ReceiveDialog->setStyleSheet(QStringLiteral("background:white;"));
        verticalLayout_2 = new QVBoxLayout(ReceiveDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frameContainer = new QFrame(ReceiveDialog);
        frameContainer->setObjectName(QStringLiteral("frameContainer"));
        frameContainer->setFrameShape(QFrame::StyledPanel);
        frameContainer->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frameContainer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(30, 20, 30, 20);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_21);

        labelTitle = new QLabel(frameContainer);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setMinimumSize(QSize(0, 40));
        labelTitle->setMaximumSize(QSize(16777215, 40));
        labelTitle->setStyleSheet(QStringLiteral("padding-left:24px;"));
        labelTitle->setAlignment(Qt::AlignCenter);
        labelTitle->setMargin(7);

        horizontalLayout_3->addWidget(labelTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnEsc = new QPushButton(frameContainer);
        btnEsc->setObjectName(QStringLiteral("btnEsc"));
        btnEsc->setMinimumSize(QSize(24, 24));
        btnEsc->setMaximumSize(QSize(24, 24));

        horizontalLayout_3->addWidget(btnEsc);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        labelQrImg = new QLabel(frameContainer);
        labelQrImg->setObjectName(QStringLiteral("labelQrImg"));
        labelQrImg->setMinimumSize(QSize(260, 260));
        labelQrImg->setMaximumSize(QSize(260, 260));
        labelQrImg->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelQrImg, 0, Qt::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        labelAddress = new QLabel(frameContainer);
        labelAddress->setObjectName(QStringLiteral("labelAddress"));

        verticalLayout->addWidget(labelAddress, 0, Qt::AlignHCenter);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, -1, 20, -1);
        horizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer1);

        btnCancel = new QPushButton(frameContainer);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setMinimumSize(QSize(0, 50));

        horizontalLayout->addWidget(btnCancel);

        btnSave = new QPushButton(frameContainer);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setMinimumSize(QSize(0, 50));

        horizontalLayout->addWidget(btnSave);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(frameContainer);


        retranslateUi(ReceiveDialog);

        QMetaObject::connectSlotsByName(ReceiveDialog);
    } // setupUi

    void retranslateUi(QDialog *ReceiveDialog)
    {
        ReceiveDialog->setWindowTitle(QApplication::translate("ReceiveDialog", "Dialog", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("ReceiveDialog", "Transaction Details", Q_NULLPTR));
        btnEsc->setText(QApplication::translate("ReceiveDialog", "PushButton", Q_NULLPTR));
        labelQrImg->setText(QString());
        labelAddress->setText(QApplication::translate("ReceiveDialog", "D7VFR83SQbiezrW72hjcWJtcfip5krte2Z ", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("ReceiveDialog", "CANCEL", Q_NULLPTR));
        btnSave->setText(QApplication::translate("ReceiveDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ReceiveDialog: public Ui_ReceiveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVEDIALOG_H
