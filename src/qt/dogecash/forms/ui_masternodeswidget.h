/********************************************************************************
** Form generated from reading UI file 'masternodeswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERNODESWIDGET_H
#define UI_MASTERNODESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
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

class Ui_MasterNodesWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_6;
    QListView *listMn;
    QFrame *emptyContainer;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer;
    QFrame *emptyScreen;
    QVBoxLayout *verticalLayout;
    QPushButton *pushImgEmpty;
    QLabel *labelEmpty;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonSave;
    QWidget *right;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    OptionButton *btnAbout;
    OptionButton *btnAboutController;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *MasterNodesWidget)
    {
        if (MasterNodesWidget->objectName().isEmpty())
            MasterNodesWidget->setObjectName(QStringLiteral("MasterNodesWidget"));
        MasterNodesWidget->resize(629, 406);
        horizontalLayout_2 = new QHBoxLayout(MasterNodesWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(MasterNodesWidget);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, -1, -1);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(5);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        verticalLayout_8->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(left);
        labelSubtitle1->setObjectName(QStringLiteral("labelSubtitle1"));

        verticalLayout_8->addWidget(labelSubtitle1, 0, Qt::AlignTop);


        horizontalLayout_3->addLayout(verticalLayout_8);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));

        verticalLayout_2->addLayout(verticalLayout_6);

        listMn = new QListView(left);
        listMn->setObjectName(QStringLiteral("listMn"));

        verticalLayout_2->addWidget(listMn);

        emptyContainer = new QFrame(left);
        emptyContainer->setObjectName(QStringLiteral("emptyContainer"));
        emptyContainer->setMinimumSize(QSize(0, 100));
        emptyContainer->setFrameShape(QFrame::StyledPanel);
        emptyContainer->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(emptyContainer);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        emptyScreen = new QFrame(emptyContainer);
        emptyScreen->setObjectName(QStringLiteral("emptyScreen"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(emptyScreen->sizePolicy().hasHeightForWidth());
        emptyScreen->setSizePolicy(sizePolicy);
        emptyScreen->setFrameShape(QFrame::StyledPanel);
        emptyScreen->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(emptyScreen);
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushImgEmpty = new QPushButton(emptyScreen);
        pushImgEmpty->setObjectName(QStringLiteral("pushImgEmpty"));
        pushImgEmpty->setMinimumSize(QSize(100, 100));
        pushImgEmpty->setMaximumSize(QSize(100, 100));
        pushImgEmpty->setIconSize(QSize(100, 100));

        verticalLayout->addWidget(pushImgEmpty, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        labelEmpty = new QLabel(emptyScreen);
        labelEmpty->setObjectName(QStringLiteral("labelEmpty"));
        labelEmpty->setStyleSheet(QStringLiteral(""));
        labelEmpty->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelEmpty, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_7->addWidget(emptyScreen, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 8);

        verticalLayout_2->addWidget(emptyContainer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, -1, 20, -1);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        pushButtonSave = new QPushButton(left);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(280, 50));
        pushButtonSave->setMaximumSize(QSize(280, 50));

        horizontalLayout_7->addWidget(pushButtonSave);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_2->addWidget(left);

        right = new QWidget(MasterNodesWidget);
        right->setObjectName(QStringLiteral("right"));
        verticalLayout_5 = new QVBoxLayout(right);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        btnAbout = new OptionButton(right);
        btnAbout->setObjectName(QStringLiteral("btnAbout"));
        btnAbout->setMinimumSize(QSize(0, 50));

        verticalLayout_4->addWidget(btnAbout);

        btnAboutController = new OptionButton(right);
        btnAboutController->setObjectName(QStringLiteral("btnAboutController"));
        btnAboutController->setMinimumSize(QSize(0, 50));

        verticalLayout_4->addWidget(btnAboutController);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_2->addWidget(right);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 1);

        retranslateUi(MasterNodesWidget);

        QMetaObject::connectSlotsByName(MasterNodesWidget);
    } // setupUi

    void retranslateUi(QWidget *MasterNodesWidget)
    {
        MasterNodesWidget->setWindowTitle(QApplication::translate("MasterNodesWidget", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("MasterNodesWidget", "TextLabel", Q_NULLPTR));
        labelSubtitle1->setText(QApplication::translate("MasterNodesWidget", "TextLabel", Q_NULLPTR));
        pushImgEmpty->setText(QString());
        labelEmpty->setText(QApplication::translate("MasterNodesWidget", "No active Masternode yet", Q_NULLPTR));
        pushButtonSave->setText(QApplication::translate("MasterNodesWidget", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MasterNodesWidget: public Ui_MasterNodesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERNODESWIDGET_H
