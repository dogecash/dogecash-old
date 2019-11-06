/********************************************************************************
** Form generated from reading UI file 'privacywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRIVACYWIDGET_H
#define UI_PRIVACYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/dogecash/optionbutton.h"

QT_BEGIN_NAMESPACE

class Ui_PrivacyWidget
{
public:
    QHBoxLayout *horizontalLayout_1;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayoutTop;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout11;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *horizontalSpacer;
    QWidget *containerViewPrivacyChecks;
    QVBoxLayout *containerPrivacyChecks;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2_1;
    QPushButton *pushLeft;
    QPushButton *pushRight;
    QLabel *labelSubtitle2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelSubtitleAmount;
    QHBoxLayout *horizontalLayout_3_1;
    QLineEdit *lineEditAmount;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonSave;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelListHistory;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_4;
    QListView *listView;
    QFrame *emptyContainer;
    QVBoxLayout *verticalLayout_71;
    QSpacerItem *verticalSpacer;
    QFrame *emptyScreen;
    QVBoxLayout *verticalLayout;
    QPushButton *pushImgEmpty;
    QLabel *labelEmpty;
    QWidget *right;
    QVBoxLayout *verticalLayout_5;
    OptionButton *btnCoinControl;
    OptionButton *btnDenomGeneration;
    OptionButton *btnRescanMints;
    OptionButton *btnResetZerocoin;
    OptionButton *btnTotalzDOGEC;
    QVBoxLayout *verticalLayout_4;
    QWidget *layoutDenom;
    QVBoxLayout *verticalLayoutDenom;
    QHBoxLayout *horizontalLayout_4_1;
    QLabel *labelTitleDenom1;
    QLabel *labelValueDenom1;
    QHBoxLayout *horizontalLayout_4_2;
    QLabel *labelTitleDenom5;
    QLabel *labelValueDenom5;
    QHBoxLayout *horizontalLayout_4_3;
    QLabel *labelTitleDenom10;
    QLabel *labelValueDenom10;
    QHBoxLayout *horizontalLayout_4_4;
    QLabel *labelTitleDenom50;
    QLabel *labelValueDenom50;
    QHBoxLayout *horizontalLayout_4_5;
    QLabel *labelTitleDenom100;
    QLabel *labelValueDenom100;
    QHBoxLayout *horizontalLayout_4_6;
    QLabel *labelTitleDenom500;
    QLabel *labelValueDenom500;
    QHBoxLayout *horizontalLayout_4_7;
    QLabel *labelTitleDenom1000;
    QLabel *labelValueDenom1000;
    QHBoxLayout *horizontalLayout_4_8;
    QLabel *labelTitleDenom5000;
    QLabel *labelValueDenom5000;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QWidget *PrivacyWidget)
    {
        if (PrivacyWidget->objectName().isEmpty())
            PrivacyWidget->setObjectName(QStringLiteral("PrivacyWidget"));
        PrivacyWidget->resize(629, 549);
        horizontalLayout_1 = new QHBoxLayout(PrivacyWidget);
        horizontalLayout_1->setSpacing(0);
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(PrivacyWidget);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayoutTop = new QVBoxLayout();
        verticalLayoutTop->setSpacing(0);
        verticalLayoutTop->setObjectName(QStringLiteral("verticalLayoutTop"));
        verticalLayoutTop->setContentsMargins(20, -1, 20, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout11 = new QVBoxLayout();
        verticalLayout11->setSpacing(5);
        verticalLayout11->setObjectName(QStringLiteral("verticalLayout11"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        verticalLayout11->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(left);
        labelSubtitle1->setObjectName(QStringLiteral("labelSubtitle1"));
        labelSubtitle1->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout11->addWidget(labelSubtitle1);


        horizontalLayout_2->addLayout(verticalLayout11);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        containerViewPrivacyChecks = new QWidget(left);
        containerViewPrivacyChecks->setObjectName(QStringLiteral("containerViewPrivacyChecks"));
        containerPrivacyChecks = new QVBoxLayout(containerViewPrivacyChecks);
        containerPrivacyChecks->setSpacing(0);
        containerPrivacyChecks->setObjectName(QStringLiteral("containerPrivacyChecks"));
        containerPrivacyChecks->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(containerViewPrivacyChecks);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_2_1 = new QHBoxLayout(groupBox);
        horizontalLayout_2_1->setSpacing(0);
        horizontalLayout_2_1->setObjectName(QStringLiteral("horizontalLayout_2_1"));
        horizontalLayout_2_1->setContentsMargins(0, 0, 0, 0);
        pushLeft = new QPushButton(groupBox);
        pushLeft->setObjectName(QStringLiteral("pushLeft"));
        pushLeft->setMinimumSize(QSize(120, 30));
        pushLeft->setMaximumSize(QSize(120, 30));
        pushLeft->setCheckable(true);
        pushLeft->setAutoExclusive(true);

        horizontalLayout_2_1->addWidget(pushLeft);

        pushRight = new QPushButton(groupBox);
        pushRight->setObjectName(QStringLiteral("pushRight"));
        pushRight->setMinimumSize(QSize(120, 30));
        pushRight->setMaximumSize(QSize(120, 30));
        pushRight->setCheckable(true);
        pushRight->setChecked(true);
        pushRight->setAutoExclusive(true);

        horizontalLayout_2_1->addWidget(pushRight);


        containerPrivacyChecks->addWidget(groupBox, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        labelSubtitle2 = new QLabel(containerViewPrivacyChecks);
        labelSubtitle2->setObjectName(QStringLiteral("labelSubtitle2"));
        labelSubtitle2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        containerPrivacyChecks->addWidget(labelSubtitle2, 0, Qt::AlignTop);


        horizontalLayout_2->addWidget(containerViewPrivacyChecks);


        verticalLayoutTop->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutTop->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(5);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        labelSubtitleAmount = new QLabel(left);
        labelSubtitleAmount->setObjectName(QStringLiteral("labelSubtitleAmount"));
        labelSubtitleAmount->setMinimumSize(QSize(0, 20));
        labelSubtitleAmount->setMaximumSize(QSize(16777215, 20));

        verticalLayout_7->addWidget(labelSubtitleAmount);

        horizontalLayout_3_1 = new QHBoxLayout();
        horizontalLayout_3_1->setSpacing(0);
        horizontalLayout_3_1->setObjectName(QStringLiteral("horizontalLayout_3_1"));
        lineEditAmount = new QLineEdit(left);
        lineEditAmount->setObjectName(QStringLiteral("lineEditAmount"));
        lineEditAmount->setMinimumSize(QSize(0, 50));
        lineEditAmount->setMaxLength(8);

        horizontalLayout_3_1->addWidget(lineEditAmount);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3_1->addItem(horizontalSpacer_4);

        pushButtonSave = new QPushButton(left);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(180, 50));

        horizontalLayout_3_1->addWidget(pushButtonSave);

        horizontalLayout_3_1->setStretch(0, 1);

        verticalLayout_7->addLayout(horizontalLayout_3_1);


        horizontalLayout_3->addLayout(verticalLayout_7);

        horizontalLayout_3->setStretch(0, 2);

        verticalLayoutTop->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayoutTop);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(20, -1, -1, -1);
        labelListHistory = new QLabel(left);
        labelListHistory->setObjectName(QStringLiteral("labelListHistory"));

        horizontalLayout_4->addWidget(labelListHistory);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_4);

        listView = new QListView(left);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setEnabled(true);
        listView->setFocusPolicy(Qt::NoFocus);

        verticalLayout_6->addWidget(listView);

        emptyContainer = new QFrame(left);
        emptyContainer->setObjectName(QStringLiteral("emptyContainer"));
        emptyContainer->setMinimumSize(QSize(0, 100));
        emptyContainer->setFrameShape(QFrame::StyledPanel);
        emptyContainer->setFrameShadow(QFrame::Raised);
        verticalLayout_71 = new QVBoxLayout(emptyContainer);
        verticalLayout_71->setSpacing(0);
        verticalLayout_71->setObjectName(QStringLiteral("verticalLayout_71"));
        verticalLayout_71->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_71->addItem(verticalSpacer);

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


        verticalLayout_71->addWidget(emptyScreen, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalLayout_71->setStretch(0, 1);
        verticalLayout_71->setStretch(1, 8);

        verticalLayout_6->addWidget(emptyContainer);


        verticalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_1->addWidget(left);

        right = new QWidget(PrivacyWidget);
        right->setObjectName(QStringLiteral("right"));
        verticalLayout_5 = new QVBoxLayout(right);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        btnCoinControl = new OptionButton(right);
        btnCoinControl->setObjectName(QStringLiteral("btnCoinControl"));
        btnCoinControl->setMinimumSize(QSize(0, 50));

        verticalLayout_5->addWidget(btnCoinControl);

        btnDenomGeneration = new OptionButton(right);
        btnDenomGeneration->setObjectName(QStringLiteral("btnDenomGeneration"));
        btnDenomGeneration->setMinimumSize(QSize(0, 50));

        verticalLayout_5->addWidget(btnDenomGeneration);

        btnRescanMints = new OptionButton(right);
        btnRescanMints->setObjectName(QStringLiteral("btnRescanMints"));
        btnRescanMints->setMinimumSize(QSize(0, 50));

        verticalLayout_5->addWidget(btnRescanMints);

        btnResetZerocoin = new OptionButton(right);
        btnResetZerocoin->setObjectName(QStringLiteral("btnResetZerocoin"));
        btnResetZerocoin->setMinimumSize(QSize(0, 50));

        verticalLayout_5->addWidget(btnResetZerocoin);

        btnTotalzDOGEC = new OptionButton(right);
        btnTotalzDOGEC->setObjectName(QStringLiteral("btnTotalzDOGEC"));
        btnTotalzDOGEC->setMinimumSize(QSize(0, 50));

        verticalLayout_5->addWidget(btnTotalzDOGEC);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        layoutDenom = new QWidget(right);
        layoutDenom->setObjectName(QStringLiteral("layoutDenom"));
        verticalLayoutDenom = new QVBoxLayout(layoutDenom);
        verticalLayoutDenom->setSpacing(12);
        verticalLayoutDenom->setObjectName(QStringLiteral("verticalLayoutDenom"));
        verticalLayoutDenom->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4_1 = new QHBoxLayout();
        horizontalLayout_4_1->setObjectName(QStringLiteral("horizontalLayout_4_1"));
        labelTitleDenom1 = new QLabel(layoutDenom);
        labelTitleDenom1->setObjectName(QStringLiteral("labelTitleDenom1"));

        horizontalLayout_4_1->addWidget(labelTitleDenom1);

        labelValueDenom1 = new QLabel(layoutDenom);
        labelValueDenom1->setObjectName(QStringLiteral("labelValueDenom1"));
        labelValueDenom1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4_1->addWidget(labelValueDenom1);


        verticalLayoutDenom->addLayout(horizontalLayout_4_1);

        horizontalLayout_4_2 = new QHBoxLayout();
        horizontalLayout_4_2->setObjectName(QStringLiteral("horizontalLayout_4_2"));
        labelTitleDenom5 = new QLabel(layoutDenom);
        labelTitleDenom5->setObjectName(QStringLiteral("labelTitleDenom5"));

        horizontalLayout_4_2->addWidget(labelTitleDenom5);

        labelValueDenom5 = new QLabel(layoutDenom);
        labelValueDenom5->setObjectName(QStringLiteral("labelValueDenom5"));
        labelValueDenom5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4_2->addWidget(labelValueDenom5);


        verticalLayoutDenom->addLayout(horizontalLayout_4_2);

        horizontalLayout_4_3 = new QHBoxLayout();
        horizontalLayout_4_3->setObjectName(QStringLiteral("horizontalLayout_4_3"));
        labelTitleDenom10 = new QLabel(layoutDenom);
        labelTitleDenom10->setObjectName(QStringLiteral("labelTitleDenom10"));

        horizontalLayout_4_3->addWidget(labelTitleDenom10);

        labelValueDenom10 = new QLabel(layoutDenom);
        labelValueDenom10->setObjectName(QStringLiteral("labelValueDenom10"));
        labelValueDenom10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4_3->addWidget(labelValueDenom10);


        verticalLayoutDenom->addLayout(horizontalLayout_4_3);

        horizontalLayout_4_4 = new QHBoxLayout();
        horizontalLayout_4_4->setObjectName(QStringLiteral("horizontalLayout_4_4"));
        labelTitleDenom50 = new QLabel(layoutDenom);
        labelTitleDenom50->setObjectName(QStringLiteral("labelTitleDenom50"));

        horizontalLayout_4_4->addWidget(labelTitleDenom50);

        labelValueDenom50 = new QLabel(layoutDenom);
        labelValueDenom50->setObjectName(QStringLiteral("labelValueDenom50"));
        labelValueDenom50->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4_4->addWidget(labelValueDenom50);


        verticalLayoutDenom->addLayout(horizontalLayout_4_4);

        horizontalLayout_4_5 = new QHBoxLayout();
        horizontalLayout_4_5->setObjectName(QStringLiteral("horizontalLayout_4_5"));
        labelTitleDenom100 = new QLabel(layoutDenom);
        labelTitleDenom100->setObjectName(QStringLiteral("labelTitleDenom100"));

        horizontalLayout_4_5->addWidget(labelTitleDenom100);

        labelValueDenom100 = new QLabel(layoutDenom);
        labelValueDenom100->setObjectName(QStringLiteral("labelValueDenom100"));
        labelValueDenom100->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4_5->addWidget(labelValueDenom100);


        verticalLayoutDenom->addLayout(horizontalLayout_4_5);

        horizontalLayout_4_6 = new QHBoxLayout();
        horizontalLayout_4_6->setObjectName(QStringLiteral("horizontalLayout_4_6"));
        labelTitleDenom500 = new QLabel(layoutDenom);
        labelTitleDenom500->setObjectName(QStringLiteral("labelTitleDenom500"));

        horizontalLayout_4_6->addWidget(labelTitleDenom500);

        labelValueDenom500 = new QLabel(layoutDenom);
        labelValueDenom500->setObjectName(QStringLiteral("labelValueDenom500"));
        labelValueDenom500->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4_6->addWidget(labelValueDenom500);


        verticalLayoutDenom->addLayout(horizontalLayout_4_6);

        horizontalLayout_4_7 = new QHBoxLayout();
        horizontalLayout_4_7->setObjectName(QStringLiteral("horizontalLayout_4_7"));
        labelTitleDenom1000 = new QLabel(layoutDenom);
        labelTitleDenom1000->setObjectName(QStringLiteral("labelTitleDenom1000"));

        horizontalLayout_4_7->addWidget(labelTitleDenom1000);

        labelValueDenom1000 = new QLabel(layoutDenom);
        labelValueDenom1000->setObjectName(QStringLiteral("labelValueDenom1000"));
        labelValueDenom1000->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4_7->addWidget(labelValueDenom1000);


        verticalLayoutDenom->addLayout(horizontalLayout_4_7);

        horizontalLayout_4_8 = new QHBoxLayout();
        horizontalLayout_4_8->setObjectName(QStringLiteral("horizontalLayout_4_8"));
        labelTitleDenom5000 = new QLabel(layoutDenom);
        labelTitleDenom5000->setObjectName(QStringLiteral("labelTitleDenom5000"));

        horizontalLayout_4_8->addWidget(labelTitleDenom5000);

        labelValueDenom5000 = new QLabel(layoutDenom);
        labelValueDenom5000->setObjectName(QStringLiteral("labelValueDenom5000"));
        labelValueDenom5000->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4_8->addWidget(labelValueDenom5000);


        verticalLayoutDenom->addLayout(horizontalLayout_4_8);


        verticalLayout_4->addWidget(layoutDenom);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_1->addWidget(right);

        horizontalLayout_1->setStretch(0, 2);
        horizontalLayout_1->setStretch(1, 1);

        retranslateUi(PrivacyWidget);

        QMetaObject::connectSlotsByName(PrivacyWidget);
    } // setupUi

    void retranslateUi(QWidget *PrivacyWidget)
    {
        PrivacyWidget->setWindowTitle(QApplication::translate("PrivacyWidget", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("PrivacyWidget", "Title", Q_NULLPTR));
        labelSubtitle1->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushLeft->setText(QApplication::translate("PrivacyWidget", "PushButton", Q_NULLPTR));
        pushRight->setText(QApplication::translate("PrivacyWidget", "PushButton", Q_NULLPTR));
        labelSubtitle2->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        labelSubtitleAmount->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        pushButtonSave->setText(QApplication::translate("PrivacyWidget", "PushButton", Q_NULLPTR));
        labelListHistory->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        pushImgEmpty->setText(QString());
        labelEmpty->setText(QApplication::translate("PrivacyWidget", "No active Masternode yet", Q_NULLPTR));
        labelTitleDenom1->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        labelValueDenom1->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        labelTitleDenom5->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        labelValueDenom5->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        labelTitleDenom10->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        labelValueDenom10->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        labelTitleDenom50->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        labelValueDenom50->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        labelTitleDenom100->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        labelValueDenom100->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        labelTitleDenom500->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        labelValueDenom500->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        labelTitleDenom1000->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        labelValueDenom1000->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        labelTitleDenom5000->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
        labelValueDenom5000->setText(QApplication::translate("PrivacyWidget", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PrivacyWidget: public Ui_PrivacyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRIVACYWIDGET_H
