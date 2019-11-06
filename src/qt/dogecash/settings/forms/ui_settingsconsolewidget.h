/********************************************************************************
** Form generated from reading UI file 'settingsconsolewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSCONSOLEWIDGET_H
#define UI_SETTINGSCONSOLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsConsoleWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonOpenDebug;
    QPushButton *pushButtonCommandOptions;
    QSpacerItem *verticalSpacer_2;
    QWidget *consoleWidget;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *messagesWidget;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit;

    void setupUi(QWidget *SettingsConsoleWidget)
    {
        if (SettingsConsoleWidget->objectName().isEmpty())
            SettingsConsoleWidget->setObjectName(QStringLiteral("SettingsConsoleWidget"));
        SettingsConsoleWidget->resize(418, 434);
        verticalLayout = new QVBoxLayout(SettingsConsoleWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsConsoleWidget);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        horizontalLayout_3->addWidget(labelTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonOpenDebug = new QPushButton(left);
        pushButtonOpenDebug->setObjectName(QStringLiteral("pushButtonOpenDebug"));
        pushButtonOpenDebug->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(pushButtonOpenDebug);

        pushButtonCommandOptions = new QPushButton(left);
        pushButtonCommandOptions->setObjectName(QStringLiteral("pushButtonCommandOptions"));
        pushButtonCommandOptions->setMinimumSize(QSize(0, 40));
        pushButtonCommandOptions->setMaximumSize(QSize(16777215, 40));

        horizontalLayout_3->addWidget(pushButtonCommandOptions);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        consoleWidget = new QWidget(left);
        consoleWidget->setObjectName(QStringLiteral("consoleWidget"));
        consoleWidget->setMinimumSize(QSize(0, 300));
        verticalLayout_4 = new QVBoxLayout(consoleWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        messagesWidget = new QTextEdit(consoleWidget);
        messagesWidget->setObjectName(QStringLiteral("messagesWidget"));

        verticalLayout_4->addWidget(messagesWidget);


        verticalLayout_2->addWidget(consoleWidget);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton = new QPushButton(left);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(45, 45));
        pushButton->setMaximumSize(QSize(45, 45));

        horizontalLayout_7->addWidget(pushButton);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        lineEdit = new QLineEdit(left);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 45));
        lineEdit->setMaximumSize(QSize(16777215, 45));

        horizontalLayout_7->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout->addWidget(left);


        retranslateUi(SettingsConsoleWidget);

        QMetaObject::connectSlotsByName(SettingsConsoleWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsConsoleWidget)
    {
        SettingsConsoleWidget->setWindowTitle(QApplication::translate("SettingsConsoleWidget", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SettingsConsoleWidget", "TextLabel", Q_NULLPTR));
        pushButtonOpenDebug->setText(QApplication::translate("SettingsConsoleWidget", "PushButton", Q_NULLPTR));
        pushButtonCommandOptions->setText(QApplication::translate("SettingsConsoleWidget", "PushButton", Q_NULLPTR));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SettingsConsoleWidget: public Ui_SettingsConsoleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSCONSOLEWIDGET_H
