/********************************************************************************
** Form generated from reading UI file 'expandablebutton.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPANDABLEBUTTON_H
#define UI_EXPANDABLEBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExpandableButton
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;

    void setupUi(QWidget *ExpandableButton)
    {
        if (ExpandableButton->objectName().isEmpty())
            ExpandableButton->setObjectName(QStringLiteral("ExpandableButton"));
        ExpandableButton->resize(48, 42);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ExpandableButton->sizePolicy().hasHeightForWidth());
        ExpandableButton->setSizePolicy(sizePolicy);
        ExpandableButton->setMinimumSize(QSize(36, 0));
        horizontalLayout = new QHBoxLayout(ExpandableButton);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(ExpandableButton);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(36, 36));
        pushButton->setBaseSize(QSize(36, 36));
        pushButton->setStyleSheet(QStringLiteral("padding-right:5px;padding-left:5px;"));
        pushButton->setIconSize(QSize(32, 32));
        pushButton->setCheckable(true);

        horizontalLayout->addWidget(pushButton);


        retranslateUi(ExpandableButton);

        QMetaObject::connectSlotsByName(ExpandableButton);
    } // setupUi

    void retranslateUi(QWidget *ExpandableButton)
    {
        ExpandableButton->setWindowTitle(QApplication::translate("ExpandableButton", "Form", Q_NULLPTR));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ExpandableButton: public Ui_ExpandableButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPANDABLEBUTTON_H
