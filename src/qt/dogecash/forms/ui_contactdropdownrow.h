/********************************************************************************
** Form generated from reading UI file 'contactdropdownrow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTDROPDOWNROW_H
#define UI_CONTACTDROPDOWNROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContactDropdownRow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *rowContainer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblLabel;
    QLabel *lblAddress;
    QLabel *lblDivisory;

    void setupUi(QWidget *ContactDropdownRow)
    {
        if (ContactDropdownRow->objectName().isEmpty())
            ContactDropdownRow->setObjectName(QStringLiteral("ContactDropdownRow"));
        ContactDropdownRow->resize(660, 60);
        ContactDropdownRow->setMinimumSize(QSize(0, 60));
        verticalLayout = new QVBoxLayout(ContactDropdownRow);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        rowContainer = new QWidget(ContactDropdownRow);
        rowContainer->setObjectName(QStringLiteral("rowContainer"));
        rowContainer->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(rowContainer);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 12, -1, 12);
        lblLabel = new QLabel(rowContainer);
        lblLabel->setObjectName(QStringLiteral("lblLabel"));
        lblLabel->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(lblLabel);

        lblAddress = new QLabel(rowContainer);
        lblAddress->setObjectName(QStringLiteral("lblAddress"));
        lblAddress->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(lblAddress);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addWidget(rowContainer);

        lblDivisory = new QLabel(ContactDropdownRow);
        lblDivisory->setObjectName(QStringLiteral("lblDivisory"));
        lblDivisory->setMinimumSize(QSize(0, 1));
        lblDivisory->setMaximumSize(QSize(16777215, 1));
        lblDivisory->setStyleSheet(QStringLiteral("background-color:#bababa;"));
        lblDivisory->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(lblDivisory);


        retranslateUi(ContactDropdownRow);

        QMetaObject::connectSlotsByName(ContactDropdownRow);
    } // setupUi

    void retranslateUi(QWidget *ContactDropdownRow)
    {
        ContactDropdownRow->setWindowTitle(QApplication::translate("ContactDropdownRow", "Form", Q_NULLPTR));
        lblLabel->setText(QApplication::translate("ContactDropdownRow", "Bob Allen", Q_NULLPTR));
        lblAddress->setText(QApplication::translate("ContactDropdownRow", "DN6i46dytMPVhV1JMGZFuQBh7BZZ6nNLox", Q_NULLPTR));
        lblDivisory->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ContactDropdownRow: public Ui_ContactDropdownRow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTDROPDOWNROW_H
