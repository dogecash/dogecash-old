/********************************************************************************
** Form generated from reading UI file 'denomgenerationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DENOMGENERATIONDIALOG_H
#define UI_DENOMGENERATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DenomGenerationDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer1;
    QPushButton *btnEsc;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelMessage;
    QSpacerItem *verticalSpacer_3;
    QWidget *verticalGrid;
    QVBoxLayout *gridLayoutContainer;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox5000;
    QCheckBox *checkBox100;
    QCheckBox *checkBox10;
    QCheckBox *checkBox1000;
    QCheckBox *checkBox50;
    QCheckBox *checkBox500;
    QCheckBox *checkBox5;
    QCheckBox *checkBox1;
    QCheckBox *checkBoxAll;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancel;
    QPushButton *btnSave;

    void setupUi(QWidget *DenomGenerationDialog)
    {
        if (DenomGenerationDialog->objectName().isEmpty())
            DenomGenerationDialog->setObjectName(QStringLiteral("DenomGenerationDialog"));
        DenomGenerationDialog->resize(500, 450);
        verticalLayout_3 = new QVBoxLayout(DenomGenerationDialog);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(DenomGenerationDialog);
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

        horizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer1);

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

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalGrid = new QWidget(frame);
        verticalGrid->setObjectName(QStringLiteral("verticalGrid"));
        gridLayoutContainer = new QVBoxLayout(verticalGrid);
        gridLayoutContainer->setObjectName(QStringLiteral("gridLayoutContainer"));
        gridLayoutContainer->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setVerticalSpacing(40);
        checkBox5000 = new QCheckBox(verticalGrid);
        checkBox5000->setObjectName(QStringLiteral("checkBox5000"));

        gridLayout_3->addWidget(checkBox5000, 0, 0, 1, 1);

        checkBox100 = new QCheckBox(verticalGrid);
        checkBox100->setObjectName(QStringLiteral("checkBox100"));

        gridLayout_3->addWidget(checkBox100, 1, 0, 1, 1);

        checkBox10 = new QCheckBox(verticalGrid);
        checkBox10->setObjectName(QStringLiteral("checkBox10"));

        gridLayout_3->addWidget(checkBox10, 1, 2, 1, 1);

        checkBox1000 = new QCheckBox(verticalGrid);
        checkBox1000->setObjectName(QStringLiteral("checkBox1000"));

        gridLayout_3->addWidget(checkBox1000, 0, 1, 1, 1);

        checkBox50 = new QCheckBox(verticalGrid);
        checkBox50->setObjectName(QStringLiteral("checkBox50"));

        gridLayout_3->addWidget(checkBox50, 1, 1, 1, 1);

        checkBox500 = new QCheckBox(verticalGrid);
        checkBox500->setObjectName(QStringLiteral("checkBox500"));

        gridLayout_3->addWidget(checkBox500, 0, 2, 1, 1);

        checkBox5 = new QCheckBox(verticalGrid);
        checkBox5->setObjectName(QStringLiteral("checkBox5"));

        gridLayout_3->addWidget(checkBox5, 2, 0, 1, 1);

        checkBox1 = new QCheckBox(verticalGrid);
        checkBox1->setObjectName(QStringLiteral("checkBox1"));

        gridLayout_3->addWidget(checkBox1, 2, 1, 1, 1);

        checkBoxAll = new QCheckBox(verticalGrid);
        checkBoxAll->setObjectName(QStringLiteral("checkBoxAll"));

        gridLayout_3->addWidget(checkBoxAll, 2, 2, 1, 1);


        gridLayoutContainer->addLayout(gridLayout_3);


        verticalLayout_2->addWidget(verticalGrid);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCancel = new QPushButton(frame);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setMinimumSize(QSize(0, 50));

        horizontalLayout->addWidget(btnCancel);

        btnSave = new QPushButton(frame);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setMinimumSize(QSize(0, 50));

        horizontalLayout->addWidget(btnSave);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(frame);


        retranslateUi(DenomGenerationDialog);

        QMetaObject::connectSlotsByName(DenomGenerationDialog);
    } // setupUi

    void retranslateUi(QWidget *DenomGenerationDialog)
    {
        DenomGenerationDialog->setWindowTitle(QApplication::translate("DenomGenerationDialog", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("DenomGenerationDialog", "Transaction Details", Q_NULLPTR));
        btnEsc->setText(QApplication::translate("DenomGenerationDialog", "PushButton", Q_NULLPTR));
        labelMessage->setText(QApplication::translate("DenomGenerationDialog", "This will unlock your wallet fully, so that anyone with access to it can spend until the wallet is closed or locked again.", Q_NULLPTR));
        checkBox5000->setText(QApplication::translate("DenomGenerationDialog", "5000", Q_NULLPTR));
        checkBox100->setText(QApplication::translate("DenomGenerationDialog", "100", Q_NULLPTR));
        checkBox10->setText(QApplication::translate("DenomGenerationDialog", "10", Q_NULLPTR));
        checkBox1000->setText(QApplication::translate("DenomGenerationDialog", "1000", Q_NULLPTR));
        checkBox50->setText(QApplication::translate("DenomGenerationDialog", "50", Q_NULLPTR));
        checkBox500->setText(QApplication::translate("DenomGenerationDialog", "500", Q_NULLPTR));
        checkBox5->setText(QApplication::translate("DenomGenerationDialog", "5", Q_NULLPTR));
        checkBox1->setText(QApplication::translate("DenomGenerationDialog", "1", Q_NULLPTR));
        checkBoxAll->setText(QApplication::translate("DenomGenerationDialog", "Select All", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("DenomGenerationDialog", "CANCEL", Q_NULLPTR));
        btnSave->setText(QApplication::translate("DenomGenerationDialog", "SAVE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DenomGenerationDialog: public Ui_DenomGenerationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DENOMGENERATIONDIALOG_H
