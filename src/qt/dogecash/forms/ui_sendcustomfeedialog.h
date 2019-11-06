/********************************************************************************
** Form generated from reading UI file 'sendcustomfeedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCUSTOMFEEDIALOG_H
#define UI_SENDCUSTOMFEEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SendCustomFeeDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_21;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnEsc;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelMessage;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBoxRecommended;
    QSpacerItem *verticalSpacer_5;
    QLabel *labelFee;
    QComboBox *comboBoxRecommended;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBoxCustom;
    QSpacerItem *verticalSpacer_6;
    QLineEdit *lineEditCustomFee;
    QLabel *labelCustomFee;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer1;
    QPushButton *btnCancel;
    QPushButton *btnSave;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *SendCustomFeeDialog)
    {
        if (SendCustomFeeDialog->objectName().isEmpty())
            SendCustomFeeDialog->setObjectName(QStringLiteral("SendCustomFeeDialog"));
        SendCustomFeeDialog->resize(600, 550);
        verticalLayout_3 = new QVBoxLayout(SendCustomFeeDialog);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(SendCustomFeeDialog);
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
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_21);

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
        labelMessage->setAlignment(Qt::AlignCenter);
        labelMessage->setWordWrap(true);

        verticalLayout_2->addWidget(labelMessage);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(12, -1, 12, -1);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        checkBoxRecommended = new QCheckBox(groupBox);
        checkBoxRecommended->setObjectName(QStringLiteral("checkBoxRecommended"));

        verticalLayout_4->addWidget(checkBoxRecommended, 0, Qt::AlignHCenter);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_5);

        labelFee = new QLabel(groupBox);
        labelFee->setObjectName(QStringLiteral("labelFee"));

        verticalLayout_4->addWidget(labelFee, 0, Qt::AlignHCenter);

        comboBoxRecommended = new QComboBox(groupBox);
        comboBoxRecommended->setObjectName(QStringLiteral("comboBoxRecommended"));

        verticalLayout_4->addWidget(comboBoxRecommended, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(verticalLayout_4);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        checkBoxCustom = new QCheckBox(groupBox);
        checkBoxCustom->setObjectName(QStringLiteral("checkBoxCustom"));

        verticalLayout_5->addWidget(checkBoxCustom, 0, Qt::AlignHCenter);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_6);

        lineEditCustomFee = new QLineEdit(groupBox);
        lineEditCustomFee->setObjectName(QStringLiteral("lineEditCustomFee"));

        verticalLayout_5->addWidget(lineEditCustomFee, 0, Qt::AlignHCenter);

        labelCustomFee = new QLabel(groupBox);
        labelCustomFee->setObjectName(QStringLiteral("labelCustomFee"));

        verticalLayout_5->addWidget(labelCustomFee, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(verticalLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer1);

        btnCancel = new QPushButton(frame);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setMinimumSize(QSize(180, 50));

        horizontalLayout->addWidget(btnCancel);

        btnSave = new QPushButton(frame);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setMinimumSize(QSize(180, 50));

        horizontalLayout->addWidget(btnSave);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(3, 1);

        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(frame);


        retranslateUi(SendCustomFeeDialog);

        QMetaObject::connectSlotsByName(SendCustomFeeDialog);
    } // setupUi

    void retranslateUi(QDialog *SendCustomFeeDialog)
    {
        SendCustomFeeDialog->setWindowTitle(QApplication::translate("SendCustomFeeDialog", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SendCustomFeeDialog", "Transaction Details", Q_NULLPTR));
        btnEsc->setText(QString());
        labelMessage->setText(QApplication::translate("SendCustomFeeDialog", "Customize the transaction fee at your to your liking, depending on the fee value your transaction will be included or not in the blockchain.", Q_NULLPTR));
        groupBox->setTitle(QString());
        checkBoxRecommended->setText(QApplication::translate("SendCustomFeeDialog", "Recomended", Q_NULLPTR));
        labelFee->setText(QApplication::translate("SendCustomFeeDialog", "0.00 KB", Q_NULLPTR));
        checkBoxCustom->setText(QApplication::translate("SendCustomFeeDialog", "Custom", Q_NULLPTR));
        labelCustomFee->setText(QApplication::translate("SendCustomFeeDialog", "Per kilobyte", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("SendCustomFeeDialog", "CANCEL", Q_NULLPTR));
        btnSave->setText(QApplication::translate("SendCustomFeeDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SendCustomFeeDialog: public Ui_SendCustomFeeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCUSTOMFEEDIALOG_H
