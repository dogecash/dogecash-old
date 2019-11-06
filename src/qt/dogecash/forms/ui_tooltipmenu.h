/********************************************************************************
** Form generated from reading UI file 'tooltipmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLTIPMENU_H
#define UI_TOOLTIPMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TooltipMenu
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *container;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnCopy;
    QPushButton *btnEdit;
    QPushButton *btnDelete;

    void setupUi(QWidget *TooltipMenu)
    {
        if (TooltipMenu->objectName().isEmpty())
            TooltipMenu->setObjectName(QStringLiteral("TooltipMenu"));
        TooltipMenu->resize(90, 110);
        TooltipMenu->setMinimumSize(QSize(90, 110));
        TooltipMenu->setMaximumSize(QSize(16777215, 140));
        verticalLayout_2 = new QVBoxLayout(TooltipMenu);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        container = new QWidget(TooltipMenu);
        container->setObjectName(QStringLiteral("container"));
        verticalLayout_3 = new QVBoxLayout(container);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 0, 0, 0);
        btnCopy = new QPushButton(container);
        btnCopy->setObjectName(QStringLiteral("btnCopy"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnCopy->sizePolicy().hasHeightForWidth());
        btnCopy->setSizePolicy(sizePolicy);
        btnCopy->setMinimumSize(QSize(0, 30));
        btnCopy->setMaximumSize(QSize(16777215, 30));
        btnCopy->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(btnCopy, 0, Qt::AlignLeft);

        btnEdit = new QPushButton(container);
        btnEdit->setObjectName(QStringLiteral("btnEdit"));
        sizePolicy.setHeightForWidth(btnEdit->sizePolicy().hasHeightForWidth());
        btnEdit->setSizePolicy(sizePolicy);
        btnEdit->setMinimumSize(QSize(0, 30));
        btnEdit->setMaximumSize(QSize(16777215, 30));
        btnEdit->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(btnEdit, 0, Qt::AlignLeft);

        btnDelete = new QPushButton(container);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        sizePolicy.setHeightForWidth(btnDelete->sizePolicy().hasHeightForWidth());
        btnDelete->setSizePolicy(sizePolicy);
        btnDelete->setMinimumSize(QSize(0, 30));
        btnDelete->setMaximumSize(QSize(16777215, 30));
        btnDelete->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(btnDelete, 0, Qt::AlignLeft);


        verticalLayout_2->addWidget(container);


        retranslateUi(TooltipMenu);

        QMetaObject::connectSlotsByName(TooltipMenu);
    } // setupUi

    void retranslateUi(QWidget *TooltipMenu)
    {
        TooltipMenu->setWindowTitle(QApplication::translate("TooltipMenu", "Form", Q_NULLPTR));
        btnCopy->setText(QApplication::translate("TooltipMenu", "Copy", Q_NULLPTR));
        btnEdit->setText(QApplication::translate("TooltipMenu", "Edit", Q_NULLPTR));
        btnDelete->setText(QApplication::translate("TooltipMenu", "Delete", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TooltipMenu: public Ui_TooltipMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLTIPMENU_H
