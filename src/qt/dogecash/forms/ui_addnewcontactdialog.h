/********************************************************************************
** Form generated from reading UI file 'addnewcontactdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWCONTACTDIALOG_H
#define UI_ADDNEWCONTACTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddNewContactDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer1;
    QPushButton *btnEsc;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelMessage;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditName;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancel;
    QPushButton *btnOk;

    void setupUi(QDialog *AddNewContactDialog)
    {
        if (AddNewContactDialog->objectName().isEmpty())
            AddNewContactDialog->setObjectName(QStringLiteral("AddNewContactDialog"));
        AddNewContactDialog->resize(600, 350);
        verticalLayout_4 = new QVBoxLayout(AddNewContactDialog);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(AddNewContactDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(20, 20, 20, 20);
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


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(40, -1, 40, -1);
        labelMessage = new QLabel(frame);
        labelMessage->setObjectName(QStringLiteral("labelMessage"));
        labelMessage->setAlignment(Qt::AlignCenter);
        labelMessage->setWordWrap(true);

        verticalLayout_2->addWidget(labelMessage);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEditName = new QLineEdit(frame);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));

        verticalLayout->addWidget(lineEditName);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCancel = new QPushButton(frame);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setMinimumSize(QSize(200, 50));

        horizontalLayout->addWidget(btnCancel);

        btnOk = new QPushButton(frame);
        btnOk->setObjectName(QStringLiteral("btnOk"));
        btnOk->setMinimumSize(QSize(200, 50));

        horizontalLayout->addWidget(btnOk);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addWidget(frame);


        retranslateUi(AddNewContactDialog);

        QMetaObject::connectSlotsByName(AddNewContactDialog);
    } // setupUi

    void retranslateUi(QDialog *AddNewContactDialog)
    {
        AddNewContactDialog->setWindowTitle(QApplication::translate("AddNewContactDialog", "Dialog", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("AddNewContactDialog", "TextLabel", Q_NULLPTR));
        btnEsc->setText(QApplication::translate("AddNewContactDialog", "PushButton", Q_NULLPTR));
        labelMessage->setText(QApplication::translate("AddNewContactDialog", "TextLabel", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("AddNewContactDialog", "CANCEL", Q_NULLPTR));
        btnOk->setText(QApplication::translate("AddNewContactDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddNewContactDialog: public Ui_AddNewContactDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWCONTACTDIALOG_H
