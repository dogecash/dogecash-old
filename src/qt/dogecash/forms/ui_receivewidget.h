/********************************************************************************
** Form generated from reading UI file 'receivewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVEWIDGET_H
#define UI_RECEIVEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/dogecash/optionbutton.h"

QT_BEGIN_NAMESPACE

class Ui_ReceiveWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *layoutQR;
    QVBoxLayout *verticalLayoutQr;
    QSpacerItem *verticalSpacer11;
    QLabel *labelQrImg;
    QSpacerItem *verticalSpacer_21;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelDate;
    QLabel *labelAddress;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonLabel;
    QPushButton *pushButtonNewAddress;
    QPushButton *pushButtonCopy;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QWidget *right;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *container_right;
    QVBoxLayout *verticalLayout;
    OptionButton *btnRequest;
    OptionButton *btnMyAddresses;
    QListView *listViewAddress;

    void setupUi(QWidget *ReceiveWidget)
    {
        if (ReceiveWidget->objectName().isEmpty())
            ReceiveWidget->setObjectName(QStringLiteral("ReceiveWidget"));
        ReceiveWidget->resize(629, 629);
        ReceiveWidget->setMinimumSize(QSize(0, 0));
        horizontalLayout_2 = new QHBoxLayout(ReceiveWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(ReceiveWidget);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, -1, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        verticalLayout_4->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(left);
        labelSubtitle1->setObjectName(QStringLiteral("labelSubtitle1"));

        verticalLayout_4->addWidget(labelSubtitle1, 0, Qt::AlignTop);


        horizontalLayout_3->addLayout(verticalLayout_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        layoutQR = new QWidget(left);
        layoutQR->setObjectName(QStringLiteral("layoutQR"));
        layoutQR->setMaximumSize(QSize(510, 16777215));
        verticalLayoutQr = new QVBoxLayout(layoutQR);
        verticalLayoutQr->setObjectName(QStringLiteral("verticalLayoutQr"));
        verticalSpacer11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutQr->addItem(verticalSpacer11);

        labelQrImg = new QLabel(layoutQR);
        labelQrImg->setObjectName(QStringLiteral("labelQrImg"));
        labelQrImg->setMinimumSize(QSize(260, 260));
        labelQrImg->setMaximumSize(QSize(260, 260));
        labelQrImg->setAlignment(Qt::AlignCenter);

        verticalLayoutQr->addWidget(labelQrImg, 0, Qt::AlignHCenter);

        verticalSpacer_21 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutQr->addItem(verticalSpacer_21);

        widget = new QWidget(layoutQR);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 0));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelLabel = new QLabel(widget);
        labelLabel->setObjectName(QStringLiteral("labelLabel"));

        horizontalLayout_5->addWidget(labelLabel);

        horizontalSpacer_2 = new QSpacerItem(141, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        labelDate = new QLabel(widget);
        labelDate->setObjectName(QStringLiteral("labelDate"));
        labelDate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(labelDate);


        verticalLayoutQr->addWidget(widget);

        labelAddress = new QLabel(layoutQR);
        labelAddress->setObjectName(QStringLiteral("labelAddress"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelAddress->sizePolicy().hasHeightForWidth());
        labelAddress->setSizePolicy(sizePolicy);
        labelAddress->setMinimumSize(QSize(300, 0));
        labelAddress->setAlignment(Qt::AlignCenter);

        verticalLayoutQr->addWidget(labelAddress);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutQr->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButtonLabel = new QPushButton(layoutQR);
        pushButtonLabel->setObjectName(QStringLiteral("pushButtonLabel"));

        horizontalLayout_4->addWidget(pushButtonLabel, 0, Qt::AlignHCenter);

        pushButtonNewAddress = new QPushButton(layoutQR);
        pushButtonNewAddress->setObjectName(QStringLiteral("pushButtonNewAddress"));

        horizontalLayout_4->addWidget(pushButtonNewAddress, 0, Qt::AlignHCenter);

        pushButtonCopy = new QPushButton(layoutQR);
        pushButtonCopy->setObjectName(QStringLiteral("pushButtonCopy"));

        horizontalLayout_4->addWidget(pushButtonCopy, 0, Qt::AlignHCenter);


        verticalLayoutQr->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutQr->addItem(verticalSpacer_3);


        verticalLayout_2->addWidget(layoutQR, 0, Qt::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_2->addWidget(left);

        right = new QWidget(ReceiveWidget);
        right->setObjectName(QStringLiteral("right"));
        verticalLayout_5 = new QVBoxLayout(right);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(1, 0, 0, 0);
        container_right = new QVBoxLayout();
        container_right->setSpacing(0);
        container_right->setObjectName(QStringLiteral("container_right"));
        container_right->setContentsMargins(0, -1, 0, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(19, -1, 19, -1);
        btnRequest = new OptionButton(right);
        btnRequest->setObjectName(QStringLiteral("btnRequest"));

        verticalLayout->addWidget(btnRequest);

        btnMyAddresses = new OptionButton(right);
        btnMyAddresses->setObjectName(QStringLiteral("btnMyAddresses"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnMyAddresses->sizePolicy().hasHeightForWidth());
        btnMyAddresses->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(btnMyAddresses);


        container_right->addLayout(verticalLayout);

        listViewAddress = new QListView(right);
        listViewAddress->setObjectName(QStringLiteral("listViewAddress"));

        container_right->addWidget(listViewAddress);


        verticalLayout_5->addLayout(container_right);


        horizontalLayout_2->addWidget(right);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 1);

        retranslateUi(ReceiveWidget);

        QMetaObject::connectSlotsByName(ReceiveWidget);
    } // setupUi

    void retranslateUi(QWidget *ReceiveWidget)
    {
        ReceiveWidget->setWindowTitle(QApplication::translate("ReceiveWidget", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("ReceiveWidget", "TextLabel", Q_NULLPTR));
        labelSubtitle1->setText(QApplication::translate("ReceiveWidget", "TextLabel", Q_NULLPTR));
        labelQrImg->setText(QString());
        labelLabel->setText(QApplication::translate("ReceiveWidget", "TextLabel", Q_NULLPTR));
        labelDate->setText(QApplication::translate("ReceiveWidget", "TextLabel", Q_NULLPTR));
        labelAddress->setText(QApplication::translate("ReceiveWidget", "No address", Q_NULLPTR));
        pushButtonLabel->setText(QApplication::translate("ReceiveWidget", "Add Label", Q_NULLPTR));
        pushButtonNewAddress->setText(QApplication::translate("ReceiveWidget", "Generate Address", Q_NULLPTR));
        pushButtonCopy->setText(QApplication::translate("ReceiveWidget", "Copy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ReceiveWidget: public Ui_ReceiveWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVEWIDGET_H
