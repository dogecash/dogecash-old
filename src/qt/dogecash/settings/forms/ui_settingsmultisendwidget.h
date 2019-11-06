/********************************************************************************
** Form generated from reading UI file 'settingsmultisendwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSMULTISENDWIDGET_H
#define UI_SETTINGSMULTISENDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsMultisendWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QWidget *containerTitle;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayoutTitle;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushLeft;
    QPushButton *pushRight;
    QSpacerItem *verticalSpacer_2;
    QListView *listView;
    QFrame *emptyContainer;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QFrame *emptyScreen;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushImgEmpty;
    QLabel *labelEmpty;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxStake;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBoxRewards;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonClear;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonSave;

    void setupUi(QWidget *SettingsMultisendWidget)
    {
        if (SettingsMultisendWidget->objectName().isEmpty())
            SettingsMultisendWidget->setObjectName(QStringLiteral("SettingsMultisendWidget"));
        SettingsMultisendWidget->resize(437, 434);
        verticalLayout = new QVBoxLayout(SettingsMultisendWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsMultisendWidget);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_2 = new QVBoxLayout(left);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        containerTitle = new QWidget(left);
        containerTitle->setObjectName(QStringLiteral("containerTitle"));
        horizontalLayout_3 = new QHBoxLayout(containerTitle);
        horizontalLayout_3->setSpacing(40);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayoutTitle = new QVBoxLayout();
        verticalLayoutTitle->setSpacing(5);
        verticalLayoutTitle->setObjectName(QStringLiteral("verticalLayoutTitle"));
        labelTitle = new QLabel(containerTitle);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        verticalLayoutTitle->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(containerTitle);
        labelSubtitle1->setObjectName(QStringLiteral("labelSubtitle1"));
        labelSubtitle1->setWordWrap(true);

        verticalLayoutTitle->addWidget(labelSubtitle1);


        horizontalLayout_3->addLayout(verticalLayoutTitle);

        groupBox = new QGroupBox(containerTitle);
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


        horizontalLayout_3->addWidget(groupBox, 0, Qt::AlignTop);

        horizontalLayout_3->setStretch(0, 4);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_3->addWidget(containerTitle);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        listView = new QListView(left);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout_3->addWidget(listView);

        emptyContainer = new QFrame(left);
        emptyContainer->setObjectName(QStringLiteral("emptyContainer"));
        emptyContainer->setMinimumSize(QSize(0, 100));
        emptyContainer->setFrameShape(QFrame::StyledPanel);
        emptyContainer->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(emptyContainer);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        emptyScreen = new QFrame(emptyContainer);
        emptyScreen->setObjectName(QStringLiteral("emptyScreen"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(emptyScreen->sizePolicy().hasHeightForWidth());
        emptyScreen->setSizePolicy(sizePolicy);
        emptyScreen->setFrameShape(QFrame::StyledPanel);
        emptyScreen->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(emptyScreen);
        verticalLayout_5->setSpacing(30);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushImgEmpty = new QPushButton(emptyScreen);
        pushImgEmpty->setObjectName(QStringLiteral("pushImgEmpty"));
        pushImgEmpty->setMinimumSize(QSize(100, 100));
        pushImgEmpty->setMaximumSize(QSize(100, 100));
        pushImgEmpty->setIconSize(QSize(100, 100));

        verticalLayout_5->addWidget(pushImgEmpty, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        labelEmpty = new QLabel(emptyScreen);
        labelEmpty->setObjectName(QStringLiteral("labelEmpty"));
        labelEmpty->setStyleSheet(QStringLiteral(""));
        labelEmpty->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(labelEmpty, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_4->addWidget(emptyScreen, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 8);

        verticalLayout_3->addWidget(emptyContainer);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        checkBoxStake = new QCheckBox(left);
        checkBoxStake->setObjectName(QStringLiteral("checkBoxStake"));

        horizontalLayout_5->addWidget(checkBoxStake);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        checkBoxRewards = new QCheckBox(left);
        checkBoxRewards->setObjectName(QStringLiteral("checkBoxRewards"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBoxRewards->sizePolicy().hasHeightForWidth());
        checkBoxRewards->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(checkBoxRewards);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        pushButtonClear = new QPushButton(left);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));
        pushButtonClear->setMinimumSize(QSize(200, 50));

        horizontalLayout_7->addWidget(pushButtonClear);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        pushButtonSave = new QPushButton(left);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(200, 50));
        pushButtonSave->setMaximumSize(QSize(200, 50));

        horizontalLayout_7->addWidget(pushButtonSave);


        verticalLayout_3->addLayout(horizontalLayout_7);


        verticalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addWidget(left);


        retranslateUi(SettingsMultisendWidget);

        QMetaObject::connectSlotsByName(SettingsMultisendWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsMultisendWidget)
    {
        SettingsMultisendWidget->setWindowTitle(QApplication::translate("SettingsMultisendWidget", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SettingsMultisendWidget", "TextLabel", Q_NULLPTR));
        labelSubtitle1->setText(QApplication::translate("SettingsMultisendWidget", "TextLabel", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushLeft->setText(QApplication::translate("SettingsMultisendWidget", "PushButton", Q_NULLPTR));
        pushRight->setText(QApplication::translate("SettingsMultisendWidget", "PushButton", Q_NULLPTR));
        pushImgEmpty->setText(QString());
        labelEmpty->setText(QApplication::translate("SettingsMultisendWidget", "No active Masternode yet", Q_NULLPTR));
        checkBoxStake->setText(QApplication::translate("SettingsMultisendWidget", "CheckBox", Q_NULLPTR));
        checkBoxRewards->setText(QApplication::translate("SettingsMultisendWidget", "CheckBox", Q_NULLPTR));
        pushButtonClear->setText(QApplication::translate("SettingsMultisendWidget", "PushButton", Q_NULLPTR));
        pushButtonSave->setText(QApplication::translate("SettingsMultisendWidget", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsMultisendWidget: public Ui_SettingsMultisendWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSMULTISENDWIDGET_H
