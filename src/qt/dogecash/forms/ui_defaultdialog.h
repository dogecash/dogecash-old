/********************************************************************************
** Form generated from reading UI file 'defaultdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFAULTDIALOG_H
#define UI_DEFAULTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DefaultDialog
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
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer11;
    QPushButton *btnCancel;
    QPushButton *btnSave;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *DefaultDialog)
    {
        if (DefaultDialog->objectName().isEmpty())
            DefaultDialog->setObjectName(QStringLiteral("DefaultDialog"));
        DefaultDialog->resize(500, 350);
        verticalLayout_3 = new QVBoxLayout(DefaultDialog);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(DefaultDialog);
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

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        labelMessage = new QLabel(frame);
        labelMessage->setObjectName(QStringLiteral("labelMessage"));
        labelMessage->setAlignment(Qt::AlignCenter);
        labelMessage->setWordWrap(true);

        verticalLayout_2->addWidget(labelMessage);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer11);

        btnCancel = new QPushButton(frame);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setMinimumSize(QSize(170, 50));
        btnCancel->setMaximumSize(QSize(170, 16777215));

        horizontalLayout->addWidget(btnCancel);

        btnSave = new QPushButton(frame);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setMinimumSize(QSize(170, 50));
        btnSave->setMaximumSize(QSize(170, 16777215));

        horizontalLayout->addWidget(btnSave);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 3);

        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(frame);


        retranslateUi(DefaultDialog);

        QMetaObject::connectSlotsByName(DefaultDialog);
    } // setupUi

    void retranslateUi(QWidget *DefaultDialog)
    {
        DefaultDialog->setWindowTitle(QApplication::translate("DefaultDialog", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("DefaultDialog", "Transaction Details", Q_NULLPTR));
        btnEsc->setText(QString());
        labelMessage->setText(QApplication::translate("DefaultDialog", "Text Label", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("DefaultDialog", "CANCEL", Q_NULLPTR));
        btnSave->setText(QApplication::translate("DefaultDialog", "SAVE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DefaultDialog: public Ui_DefaultDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFAULTDIALOG_H
