/********************************************************************************
** Form generated from reading UI file 'coincontroldogecwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COINCONTROLDOGECWIDGET_H
#define UI_COINCONTROLDOGECWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "coincontroltreewidget.h"

QT_BEGIN_NAMESPACE

class Ui_CoinControlDogeCWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frameContainer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_1;
    QSpacerItem *horizontalSpacer_21;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer2;
    QPushButton *btnEsc;
    QSpacerItem *verticalSpacer1;
    QHBoxLayout *horizontalLayout_2;
    QWidget *layoutAmount;
    QHBoxLayout *horizontalLayout_2_1;
    QLabel *labelTitleAmount;
    QLabel *labelValueAmount;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutQuantity;
    QHBoxLayout *horizontalLayout_2_2;
    QLabel *labelTitleQuantity;
    QLabel *labelValueQuantity;
    QSpacerItem *horizontalSpacer_22;
    QWidget *layoutFee;
    QHBoxLayout *horizontalLayout_2_3;
    QLabel *labelTitleFee;
    QLabel *labelValueFee;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelTitleDenom;
    QLabel *labelTitleId;
    QLabel *labelTitleVersion;
    QLabel *labelTitleType;
    QLabel *labelTitleSpen;
    QLabel *labelTitleConfirmations;
    CoinControlTreeWidget *treeWidget;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBoxAll;
    QHBoxLayout *horizontalLayout_5;
    QWidget *layoutBytes;
    QHBoxLayout *horizontalLayout_5_1;
    QLabel *labelTitleBytes;
    QLabel *labelValueBytes;
    QWidget *layoutDust;
    QHBoxLayout *horizontalLayout_5_2;
    QLabel *labelTitleDust;
    QLabel *labelValueDust;
    QWidget *layoutChange;
    QHBoxLayout *horizontalLayout_5_3;
    QLabel *labelTitleChange;
    QLabel *labelValueChange;
    QWidget *layoutAfter;
    QHBoxLayout *horizontalLayout_5_4;
    QLabel *labelTitleAfter;
    QLabel *labelValueAfter;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancel;
    QPushButton *btnSave;

    void setupUi(QWidget *CoinControlDogeCWidget)
    {
        if (CoinControlDogeCWidget->objectName().isEmpty())
            CoinControlDogeCWidget->setObjectName(QStringLiteral("CoinControlDogeCWidget"));
        CoinControlDogeCWidget->resize(918, 552);
        CoinControlDogeCWidget->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(CoinControlDogeCWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frameContainer = new QFrame(CoinControlDogeCWidget);
        frameContainer->setObjectName(QStringLiteral("frameContainer"));
        frameContainer->setFrameShape(QFrame::StyledPanel);
        frameContainer->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frameContainer);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(30, 20, 30, 20);
        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setSpacing(0);
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer_21);

        labelTitle = new QLabel(frameContainer);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setMinimumSize(QSize(0, 40));
        labelTitle->setMaximumSize(QSize(16777215, 40));
        labelTitle->setStyleSheet(QStringLiteral("padding-left:24px;"));
        labelTitle->setAlignment(Qt::AlignCenter);
        labelTitle->setMargin(7);

        horizontalLayout_1->addWidget(labelTitle);

        horizontalSpacer2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer2);

        btnEsc = new QPushButton(frameContainer);
        btnEsc->setObjectName(QStringLiteral("btnEsc"));
        btnEsc->setMinimumSize(QSize(24, 24));
        btnEsc->setMaximumSize(QSize(24, 24));

        horizontalLayout_1->addWidget(btnEsc);


        verticalLayout->addLayout(horizontalLayout_1);

        verticalSpacer1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        layoutAmount = new QWidget(frameContainer);
        layoutAmount->setObjectName(QStringLiteral("layoutAmount"));
        horizontalLayout_2_1 = new QHBoxLayout(layoutAmount);
        horizontalLayout_2_1->setObjectName(QStringLiteral("horizontalLayout_2_1"));
        labelTitleAmount = new QLabel(layoutAmount);
        labelTitleAmount->setObjectName(QStringLiteral("labelTitleAmount"));

        horizontalLayout_2_1->addWidget(labelTitleAmount);

        labelValueAmount = new QLabel(layoutAmount);
        labelValueAmount->setObjectName(QStringLiteral("labelValueAmount"));

        horizontalLayout_2_1->addWidget(labelValueAmount);

        horizontalLayout_2_1->setStretch(1, 1);

        horizontalLayout_2->addWidget(layoutAmount);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        layoutQuantity = new QWidget(frameContainer);
        layoutQuantity->setObjectName(QStringLiteral("layoutQuantity"));
        horizontalLayout_2_2 = new QHBoxLayout(layoutQuantity);
        horizontalLayout_2_2->setObjectName(QStringLiteral("horizontalLayout_2_2"));
        labelTitleQuantity = new QLabel(layoutQuantity);
        labelTitleQuantity->setObjectName(QStringLiteral("labelTitleQuantity"));

        horizontalLayout_2_2->addWidget(labelTitleQuantity);

        labelValueQuantity = new QLabel(layoutQuantity);
        labelValueQuantity->setObjectName(QStringLiteral("labelValueQuantity"));

        horizontalLayout_2_2->addWidget(labelValueQuantity);

        horizontalLayout_2_2->setStretch(1, 1);

        horizontalLayout_2->addWidget(layoutQuantity);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_22);

        layoutFee = new QWidget(frameContainer);
        layoutFee->setObjectName(QStringLiteral("layoutFee"));
        horizontalLayout_2_3 = new QHBoxLayout(layoutFee);
        horizontalLayout_2_3->setObjectName(QStringLiteral("horizontalLayout_2_3"));
        labelTitleFee = new QLabel(layoutFee);
        labelTitleFee->setObjectName(QStringLiteral("labelTitleFee"));

        horizontalLayout_2_3->addWidget(labelTitleFee);

        labelValueFee = new QLabel(layoutFee);
        labelValueFee->setObjectName(QStringLiteral("labelValueFee"));

        horizontalLayout_2_3->addWidget(labelValueFee);

        horizontalLayout_2_3->setStretch(1, 1);

        horizontalLayout_2->addWidget(layoutFee);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_4 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelTitleDenom = new QLabel(frameContainer);
        labelTitleDenom->setObjectName(QStringLiteral("labelTitleDenom"));
        labelTitleDenom->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelTitleDenom);

        labelTitleId = new QLabel(frameContainer);
        labelTitleId->setObjectName(QStringLiteral("labelTitleId"));
        labelTitleId->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelTitleId);

        labelTitleVersion = new QLabel(frameContainer);
        labelTitleVersion->setObjectName(QStringLiteral("labelTitleVersion"));
        labelTitleVersion->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelTitleVersion);

        labelTitleType = new QLabel(frameContainer);
        labelTitleType->setObjectName(QStringLiteral("labelTitleType"));
        labelTitleType->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelTitleType);

        labelTitleSpen = new QLabel(frameContainer);
        labelTitleSpen->setObjectName(QStringLiteral("labelTitleSpen"));
        labelTitleSpen->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelTitleSpen);

        labelTitleConfirmations = new QLabel(frameContainer);
        labelTitleConfirmations->setObjectName(QStringLiteral("labelTitleConfirmations"));
        labelTitleConfirmations->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelTitleConfirmations);


        verticalLayout->addLayout(horizontalLayout_3);

        treeWidget = new CoinControlTreeWidget(frameContainer);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        verticalSpacer_2 = new QSpacerItem(10, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        checkBoxAll = new QCheckBox(frameContainer);
        checkBoxAll->setObjectName(QStringLiteral("checkBoxAll"));

        horizontalLayout_4->addWidget(checkBoxAll);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        layoutBytes = new QWidget(frameContainer);
        layoutBytes->setObjectName(QStringLiteral("layoutBytes"));
        horizontalLayout_5_1 = new QHBoxLayout(layoutBytes);
        horizontalLayout_5_1->setObjectName(QStringLiteral("horizontalLayout_5_1"));
        labelTitleBytes = new QLabel(layoutBytes);
        labelTitleBytes->setObjectName(QStringLiteral("labelTitleBytes"));

        horizontalLayout_5_1->addWidget(labelTitleBytes);

        labelValueBytes = new QLabel(layoutBytes);
        labelValueBytes->setObjectName(QStringLiteral("labelValueBytes"));

        horizontalLayout_5_1->addWidget(labelValueBytes);

        horizontalLayout_5_1->setStretch(1, 1);

        horizontalLayout_5->addWidget(layoutBytes);

        layoutDust = new QWidget(frameContainer);
        layoutDust->setObjectName(QStringLiteral("layoutDust"));
        horizontalLayout_5_2 = new QHBoxLayout(layoutDust);
        horizontalLayout_5_2->setObjectName(QStringLiteral("horizontalLayout_5_2"));
        labelTitleDust = new QLabel(layoutDust);
        labelTitleDust->setObjectName(QStringLiteral("labelTitleDust"));

        horizontalLayout_5_2->addWidget(labelTitleDust);

        labelValueDust = new QLabel(layoutDust);
        labelValueDust->setObjectName(QStringLiteral("labelValueDust"));

        horizontalLayout_5_2->addWidget(labelValueDust);

        horizontalLayout_5_2->setStretch(1, 1);

        horizontalLayout_5->addWidget(layoutDust);

        layoutChange = new QWidget(frameContainer);
        layoutChange->setObjectName(QStringLiteral("layoutChange"));
        horizontalLayout_5_3 = new QHBoxLayout(layoutChange);
        horizontalLayout_5_3->setObjectName(QStringLiteral("horizontalLayout_5_3"));
        labelTitleChange = new QLabel(layoutChange);
        labelTitleChange->setObjectName(QStringLiteral("labelTitleChange"));

        horizontalLayout_5_3->addWidget(labelTitleChange);

        labelValueChange = new QLabel(layoutChange);
        labelValueChange->setObjectName(QStringLiteral("labelValueChange"));

        horizontalLayout_5_3->addWidget(labelValueChange);

        horizontalLayout_5_3->setStretch(1, 1);

        horizontalLayout_5->addWidget(layoutChange);

        layoutAfter = new QWidget(frameContainer);
        layoutAfter->setObjectName(QStringLiteral("layoutAfter"));
        horizontalLayout_5_4 = new QHBoxLayout(layoutAfter);
        horizontalLayout_5_4->setObjectName(QStringLiteral("horizontalLayout_5_4"));
        labelTitleAfter = new QLabel(layoutAfter);
        labelTitleAfter->setObjectName(QStringLiteral("labelTitleAfter"));

        horizontalLayout_5_4->addWidget(labelTitleAfter);

        labelValueAfter = new QLabel(layoutAfter);
        labelValueAfter->setObjectName(QStringLiteral("labelValueAfter"));

        horizontalLayout_5_4->addWidget(labelValueAfter);

        horizontalLayout_5_4->setStretch(1, 1);

        horizontalLayout_5->addWidget(layoutAfter);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, -1, 0, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        btnCancel = new QPushButton(frameContainer);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setMinimumSize(QSize(200, 50));

        horizontalLayout_6->addWidget(btnCancel);

        btnSave = new QPushButton(frameContainer);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setMinimumSize(QSize(200, 50));

        horizontalLayout_6->addWidget(btnSave);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_2->addWidget(frameContainer);


        retranslateUi(CoinControlDogeCWidget);

        QMetaObject::connectSlotsByName(CoinControlDogeCWidget);
    } // setupUi

    void retranslateUi(QWidget *CoinControlDogeCWidget)
    {
        CoinControlDogeCWidget->setWindowTitle(QApplication::translate("CoinControlDogeCWidget", "Dialog", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("CoinControlDogeCWidget", "Transaction Details", Q_NULLPTR));
        btnEsc->setText(QApplication::translate("CoinControlDogeCWidget", "PushButton", Q_NULLPTR));
        labelTitleAmount->setText(QApplication::translate("CoinControlDogeCWidget", "DOGEC:", Q_NULLPTR));
        labelValueAmount->setText(QApplication::translate("CoinControlDogeCWidget", "TextLabel", Q_NULLPTR));
        labelTitleQuantity->setText(QApplication::translate("CoinControlDogeCWidget", "Quantity:", Q_NULLPTR));
        labelValueQuantity->setText(QApplication::translate("CoinControlDogeCWidget", "TextLabel", Q_NULLPTR));
        labelTitleFee->setText(QApplication::translate("CoinControlDogeCWidget", "Fee:", Q_NULLPTR));
        labelValueFee->setText(QApplication::translate("CoinControlDogeCWidget", "TextLabel", Q_NULLPTR));
        labelTitleDenom->setText(QApplication::translate("CoinControlDogeCWidget", "Amount", Q_NULLPTR));
        labelTitleId->setText(QApplication::translate("CoinControlDogeCWidget", "Label", Q_NULLPTR));
        labelTitleVersion->setText(QApplication::translate("CoinControlDogeCWidget", "Address", Q_NULLPTR));
        labelTitleType->setText(QApplication::translate("CoinControlDogeCWidget", "Type", Q_NULLPTR));
        labelTitleSpen->setText(QApplication::translate("CoinControlDogeCWidget", "Date", Q_NULLPTR));
        labelTitleConfirmations->setText(QApplication::translate("CoinControlDogeCWidget", "Confirmations", Q_NULLPTR));
        checkBoxAll->setText(QApplication::translate("CoinControlDogeCWidget", "CheckBox", Q_NULLPTR));
        labelTitleBytes->setText(QApplication::translate("CoinControlDogeCWidget", "Bytes:", Q_NULLPTR));
        labelValueBytes->setText(QApplication::translate("CoinControlDogeCWidget", "TextLabel", Q_NULLPTR));
        labelTitleDust->setText(QApplication::translate("CoinControlDogeCWidget", "Dust:", Q_NULLPTR));
        labelValueDust->setText(QApplication::translate("CoinControlDogeCWidget", "TextLabel", Q_NULLPTR));
        labelTitleChange->setText(QApplication::translate("CoinControlDogeCWidget", "Change:", Q_NULLPTR));
        labelValueChange->setText(QApplication::translate("CoinControlDogeCWidget", "TextLabel", Q_NULLPTR));
        labelTitleAfter->setText(QApplication::translate("CoinControlDogeCWidget", "After Fee: ", Q_NULLPTR));
        labelValueAfter->setText(QApplication::translate("CoinControlDogeCWidget", "TextLabel", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("CoinControlDogeCWidget", "CANCEL", Q_NULLPTR));
        btnSave->setText(QApplication::translate("CoinControlDogeCWidget", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CoinControlDogeCWidget: public Ui_CoinControlDogeCWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COINCONTROLDOGECWIDGET_H
