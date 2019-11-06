/********************************************************************************
** Form generated from reading UI file 'settingsmultisenddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSMULTISENDDIALOG_H
#define UI_SETTINGSMULTISENDDIALOG_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsMultisendDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnEsc;
    QSpacerItem *verticalSpacer_2;
    QWidget *containerAddressPercentage;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelSubtitleAddress;
    QLineEdit *lineEditAddress;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelSubtitlePercentage;
    QLineEdit *lineEditPercentage;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelSubtitleLabel;
    QLineEdit *lineEditLabel;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancel;
    QPushButton *btnSave;

    void setupUi(QWidget *SettingsMultisendDialog)
    {
        if (SettingsMultisendDialog->objectName().isEmpty())
            SettingsMultisendDialog->setObjectName(QStringLiteral("SettingsMultisendDialog"));
        SettingsMultisendDialog->resize(500, 428);
        verticalLayout_3 = new QVBoxLayout(SettingsMultisendDialog);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(SettingsMultisendDialog);
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

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btnEsc = new QPushButton(frame);
        btnEsc->setObjectName(QStringLiteral("btnEsc"));
        btnEsc->setMinimumSize(QSize(24, 24));
        btnEsc->setMaximumSize(QSize(24, 24));

        horizontalLayout_3->addWidget(btnEsc);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        containerAddressPercentage = new QWidget(frame);
        containerAddressPercentage->setObjectName(QStringLiteral("containerAddressPercentage"));
        containerAddressPercentage->setMaximumSize(QSize(16777215, 90));
        horizontalLayout_6 = new QHBoxLayout(containerAddressPercentage);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, -1);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(3);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        labelSubtitleAddress = new QLabel(containerAddressPercentage);
        labelSubtitleAddress->setObjectName(QStringLiteral("labelSubtitleAddress"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelSubtitleAddress->sizePolicy().hasHeightForWidth());
        labelSubtitleAddress->setSizePolicy(sizePolicy);
        labelSubtitleAddress->setMinimumSize(QSize(0, 20));
        labelSubtitleAddress->setMaximumSize(QSize(16777215, 20));

        verticalLayout_7->addWidget(labelSubtitleAddress);

        lineEditAddress = new QLineEdit(containerAddressPercentage);
        lineEditAddress->setObjectName(QStringLiteral("lineEditAddress"));
        lineEditAddress->setMinimumSize(QSize(0, 50));
        lineEditAddress->setMaximumSize(QSize(16777215, 50));

        verticalLayout_7->addWidget(lineEditAddress, 0, Qt::AlignVCenter);


        horizontalLayout_6->addLayout(verticalLayout_7);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(3);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        labelSubtitlePercentage = new QLabel(containerAddressPercentage);
        labelSubtitlePercentage->setObjectName(QStringLiteral("labelSubtitlePercentage"));
        sizePolicy.setHeightForWidth(labelSubtitlePercentage->sizePolicy().hasHeightForWidth());
        labelSubtitlePercentage->setSizePolicy(sizePolicy);
        labelSubtitlePercentage->setMinimumSize(QSize(0, 20));
        labelSubtitlePercentage->setMaximumSize(QSize(16777215, 20));

        verticalLayout_8->addWidget(labelSubtitlePercentage);

        lineEditPercentage = new QLineEdit(containerAddressPercentage);
        lineEditPercentage->setObjectName(QStringLiteral("lineEditPercentage"));
        lineEditPercentage->setMinimumSize(QSize(0, 50));
        lineEditPercentage->setMaximumSize(QSize(16777215, 50));

        verticalLayout_8->addWidget(lineEditPercentage, 0, Qt::AlignVCenter);


        horizontalLayout_6->addLayout(verticalLayout_8);

        horizontalLayout_6->setStretch(0, 8);
        horizontalLayout_6->setStretch(2, 1);

        verticalLayout_2->addWidget(containerAddressPercentage);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(5);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        labelSubtitleLabel = new QLabel(frame);
        labelSubtitleLabel->setObjectName(QStringLiteral("labelSubtitleLabel"));
        labelSubtitleLabel->setMaximumSize(QSize(16777215, 20));

        verticalLayout_9->addWidget(labelSubtitleLabel);

        lineEditLabel = new QLineEdit(frame);
        lineEditLabel->setObjectName(QStringLiteral("lineEditLabel"));
        lineEditLabel->setMinimumSize(QSize(0, 50));
        lineEditLabel->setMaximumSize(QSize(16777215, 50));

        verticalLayout_9->addWidget(lineEditLabel);


        verticalLayout_2->addLayout(verticalLayout_9);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCancel = new QPushButton(frame);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setMinimumSize(QSize(0, 50));
        btnCancel->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(btnCancel);

        btnSave = new QPushButton(frame);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setMinimumSize(QSize(0, 50));
        btnSave->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(btnSave);

        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(frame);


        retranslateUi(SettingsMultisendDialog);

        QMetaObject::connectSlotsByName(SettingsMultisendDialog);
    } // setupUi

    void retranslateUi(QWidget *SettingsMultisendDialog)
    {
        SettingsMultisendDialog->setWindowTitle(QApplication::translate("SettingsMultisendDialog", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SettingsMultisendDialog", "Transaction Details", Q_NULLPTR));
        btnEsc->setText(QString());
        labelSubtitleAddress->setText(QApplication::translate("SettingsMultisendDialog", "TextLabel", Q_NULLPTR));
        labelSubtitlePercentage->setText(QApplication::translate("SettingsMultisendDialog", "TextLabel", Q_NULLPTR));
        lineEditPercentage->setText(QString());
        labelSubtitleLabel->setText(QApplication::translate("SettingsMultisendDialog", "TextLabel", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("SettingsMultisendDialog", "CANCEL", Q_NULLPTR));
        btnSave->setText(QApplication::translate("SettingsMultisendDialog", "SAVE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsMultisendDialog: public Ui_SettingsMultisendDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSMULTISENDDIALOG_H
