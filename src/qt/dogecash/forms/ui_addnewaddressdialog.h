/********************************************************************************
** Form generated from reading UI file 'addnewaddressdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWADDRESSDIALOG_H
#define UI_ADDNEWADDRESSDIALOG_H

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

class Ui_AddNewAddressDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frameContainer;
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QSpacerItem *verticalSpacer;
    QLabel *labelQrImg;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelAddress;
    QPushButton *pushButtonCopy;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCancel;
    QPushButton *btnSave;

    void setupUi(QWidget *AddNewAddressDialog)
    {
        if (AddNewAddressDialog->objectName().isEmpty())
            AddNewAddressDialog->setObjectName(QStringLiteral("AddNewAddressDialog"));
        AddNewAddressDialog->resize(500, 530);
        AddNewAddressDialog->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(AddNewAddressDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frameContainer = new QFrame(AddNewAddressDialog);
        frameContainer->setObjectName(QStringLiteral("frameContainer"));
        frameContainer->setFrameShape(QFrame::StyledPanel);
        frameContainer->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frameContainer);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 20, -1, 20);
        labelTitle = new QLabel(frameContainer);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        verticalLayout->addWidget(labelTitle, 0, Qt::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        labelQrImg = new QLabel(frameContainer);
        labelQrImg->setObjectName(QStringLiteral("labelQrImg"));
        labelQrImg->setMinimumSize(QSize(260, 260));
        labelQrImg->setMaximumSize(QSize(260, 260));
        labelQrImg->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelQrImg, 0, Qt::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelAddress = new QLabel(frameContainer);
        labelAddress->setObjectName(QStringLiteral("labelAddress"));

        horizontalLayout_2->addWidget(labelAddress);

        pushButtonCopy = new QPushButton(frameContainer);
        pushButtonCopy->setObjectName(QStringLiteral("pushButtonCopy"));
        pushButtonCopy->setMinimumSize(QSize(24, 24));
        pushButtonCopy->setMaximumSize(QSize(24, 24));

        horizontalLayout_2->addWidget(pushButtonCopy);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, -1, 20, -1);
        btnCancel = new QPushButton(frameContainer);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setMinimumSize(QSize(0, 50));

        horizontalLayout->addWidget(btnCancel);

        btnSave = new QPushButton(frameContainer);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setMinimumSize(QSize(0, 50));

        horizontalLayout->addWidget(btnSave);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(2, 2);

        verticalLayout_2->addWidget(frameContainer);


        retranslateUi(AddNewAddressDialog);

        QMetaObject::connectSlotsByName(AddNewAddressDialog);
    } // setupUi

    void retranslateUi(QWidget *AddNewAddressDialog)
    {
        AddNewAddressDialog->setWindowTitle(QApplication::translate("AddNewAddressDialog", "Dialog", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("AddNewAddressDialog", "My Address", Q_NULLPTR));
        labelQrImg->setText(QString());
        labelAddress->setText(QApplication::translate("AddNewAddressDialog", "D7VFR83SQbiezrW72hjcWJtcfip5krte2Z ", Q_NULLPTR));
        pushButtonCopy->setText(QApplication::translate("AddNewAddressDialog", "PushButton", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("AddNewAddressDialog", "CANCEL", Q_NULLPTR));
        btnSave->setText(QApplication::translate("AddNewAddressDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddNewAddressDialog: public Ui_AddNewAddressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWADDRESSDIALOG_H
