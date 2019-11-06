/********************************************************************************
** Form generated from reading UI file 'addresslabelrow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSLABELROW_H
#define UI_ADDRESSLABELROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressLabelRow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *rowContainer;
    QHBoxLayout *horizontalLayout;
    QLabel *lblLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *lblAddress;
    QPushButton *btnMenu;
    QLabel *lblDivisory;

    void setupUi(QWidget *AddressLabelRow)
    {
        if (AddressLabelRow->objectName().isEmpty())
            AddressLabelRow->setObjectName(QStringLiteral("AddressLabelRow"));
        AddressLabelRow->resize(660, 60);
        AddressLabelRow->setMinimumSize(QSize(0, 60));
        verticalLayout = new QVBoxLayout(AddressLabelRow);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        rowContainer = new QWidget(AddressLabelRow);
        rowContainer->setObjectName(QStringLiteral("rowContainer"));
        rowContainer->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(rowContainer);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblLabel = new QLabel(rowContainer);
        lblLabel->setObjectName(QStringLiteral("lblLabel"));
        lblLabel->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(lblLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lblAddress = new QLabel(rowContainer);
        lblAddress->setObjectName(QStringLiteral("lblAddress"));
        lblAddress->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(lblAddress);

        btnMenu = new QPushButton(rowContainer);
        btnMenu->setObjectName(QStringLiteral("btnMenu"));
        btnMenu->setStyleSheet(QStringLiteral("border:none; background-color:transparent;"));
        QIcon icon;
        icon.addFile(QStringLiteral("://ic-menu-hover"), QSize(), QIcon::Normal, QIcon::Off);
        btnMenu->setIcon(icon);
        btnMenu->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(btnMenu);


        verticalLayout->addWidget(rowContainer);

        lblDivisory = new QLabel(AddressLabelRow);
        lblDivisory->setObjectName(QStringLiteral("lblDivisory"));
        lblDivisory->setMinimumSize(QSize(0, 1));
        lblDivisory->setMaximumSize(QSize(16777215, 1));
        lblDivisory->setStyleSheet(QStringLiteral("background-color:#bababa;"));
        lblDivisory->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(lblDivisory);


        retranslateUi(AddressLabelRow);

        QMetaObject::connectSlotsByName(AddressLabelRow);
    } // setupUi

    void retranslateUi(QWidget *AddressLabelRow)
    {
        AddressLabelRow->setWindowTitle(QApplication::translate("AddressLabelRow", "Form", Q_NULLPTR));
        lblLabel->setText(QApplication::translate("AddressLabelRow", "Bob Allen", Q_NULLPTR));
        lblAddress->setText(QApplication::translate("AddressLabelRow", "DN6i46dytMPVhV1JMGZFuQBh7BZZ6nNLox", Q_NULLPTR));
        btnMenu->setText(QString());
        lblDivisory->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddressLabelRow: public Ui_AddressLabelRow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSLABELROW_H
