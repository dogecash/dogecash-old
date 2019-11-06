/********************************************************************************
** Form generated from reading UI file 'snackbar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNACKBAR_H
#define UI_SNACKBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SnackBar
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *snackContainer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *SnackBar)
    {
        if (SnackBar->objectName().isEmpty())
            SnackBar->setObjectName(QStringLiteral("SnackBar"));
        SnackBar->resize(400, 60);
        SnackBar->setMinimumSize(QSize(0, 60));
        SnackBar->setMaximumSize(QSize(16777215, 60));
        horizontalLayout = new QHBoxLayout(SnackBar);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(100, 0, 0, 0);
        snackContainer = new QWidget(SnackBar);
        snackContainer->setObjectName(QStringLiteral("snackContainer"));
        snackContainer->setStyleSheet(QStringLiteral(""));
        horizontalLayout_2 = new QHBoxLayout(snackContainer);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 20, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(snackContainer);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("padding-left:45px;\n"
"font-size: 15px;\n"
"color:white;"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        pushButton = new QPushButton(snackContainer);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(24, 24));
        pushButton->setMaximumSize(QSize(24, 24));
        pushButton->setAutoFillBackground(true);
        pushButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(pushButton, 0, Qt::AlignVCenter);

        horizontalLayout_2->setStretch(1, 2);

        horizontalLayout->addWidget(snackContainer);


        retranslateUi(SnackBar);

        QMetaObject::connectSlotsByName(SnackBar);
    } // setupUi

    void retranslateUi(QDialog *SnackBar)
    {
        SnackBar->setWindowTitle(QApplication::translate("SnackBar", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("SnackBar", "Contact Stored", Q_NULLPTR));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SnackBar: public Ui_SnackBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNACKBAR_H
