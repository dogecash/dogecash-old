/********************************************************************************
** Form generated from reading UI file 'navmenuwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVMENUWIDGET_H
#define UI_NAVMENUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NavMenuWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *navContainer_2;
    QVBoxLayout *navContainer;
    QPushButton *imgLogo;
    QToolButton *btnDashboard;
    QToolButton *btnSend;
    QToolButton *btnReceive;
    QToolButton *btnAddress;
    QToolButton *btnPrivacy;
    QToolButton *btnMaster;
    QToolButton *btnGovernance;
    QToolButton *btnSettings;
    QSpacerItem *verticalSpacer;
    QLabel *labelVersion;

    void setupUi(QWidget *NavMenuWidget)
    {
        if (NavMenuWidget->objectName().isEmpty())
            NavMenuWidget->setObjectName(QStringLiteral("NavMenuWidget"));
        NavMenuWidget->resize(102, 706);
        NavMenuWidget->setStyleSheet(QLatin1String("padding:0px;\n"
"border:none;\n"
"margin:0px;"));
        verticalLayout = new QVBoxLayout(NavMenuWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        navContainer_2 = new QWidget(NavMenuWidget);
        navContainer_2->setObjectName(QStringLiteral("navContainer_2"));
        navContainer = new QVBoxLayout(navContainer_2);
        navContainer->setSpacing(0);
        navContainer->setObjectName(QStringLiteral("navContainer"));
        navContainer->setContentsMargins(0, 0, 0, 10);
        imgLogo = new QPushButton(navContainer_2);
        imgLogo->setObjectName(QStringLiteral("imgLogo"));
        imgLogo->setMinimumSize(QSize(0, 120));
        imgLogo->setIconSize(QSize(64, 64));

        navContainer->addWidget(imgLogo);

        btnDashboard = new QToolButton(navContainer_2);
        btnDashboard->setObjectName(QStringLiteral("btnDashboard"));
        btnDashboard->setMinimumSize(QSize(100, 80));
        btnDashboard->setIconSize(QSize(32, 32));
        btnDashboard->setCheckable(true);
        btnDashboard->setChecked(true);
        btnDashboard->setAutoExclusive(true);

        navContainer->addWidget(btnDashboard);

        btnSend = new QToolButton(navContainer_2);
        btnSend->setObjectName(QStringLiteral("btnSend"));
        btnSend->setMinimumSize(QSize(100, 80));
        btnSend->setIconSize(QSize(32, 32));
        btnSend->setCheckable(true);
        btnSend->setAutoExclusive(true);

        navContainer->addWidget(btnSend);

        btnReceive = new QToolButton(navContainer_2);
        btnReceive->setObjectName(QStringLiteral("btnReceive"));
        btnReceive->setMinimumSize(QSize(100, 80));
        btnReceive->setCheckable(true);
        btnReceive->setAutoExclusive(true);

        navContainer->addWidget(btnReceive);

        btnAddress = new QToolButton(navContainer_2);
        btnAddress->setObjectName(QStringLiteral("btnAddress"));
        btnAddress->setMinimumSize(QSize(100, 80));
        btnAddress->setIconSize(QSize(32, 32));
        btnAddress->setCheckable(true);
        btnAddress->setAutoExclusive(true);

        navContainer->addWidget(btnAddress);

        btnPrivacy = new QToolButton(navContainer_2);
        btnPrivacy->setObjectName(QStringLiteral("btnPrivacy"));
        btnPrivacy->setMinimumSize(QSize(100, 80));
        btnPrivacy->setIconSize(QSize(32, 32));
        btnPrivacy->setCheckable(true);
        btnPrivacy->setAutoExclusive(true);

        navContainer->addWidget(btnPrivacy);

        btnMaster = new QToolButton(navContainer_2);
        btnMaster->setObjectName(QStringLiteral("btnMaster"));
        btnMaster->setMinimumSize(QSize(100, 80));
        btnMaster->setIconSize(QSize(32, 32));
        btnMaster->setCheckable(true);
        btnMaster->setAutoExclusive(true);

        navContainer->addWidget(btnMaster);

        btnGovernance = new QToolButton(navContainer_2);
        btnGovernance->setObjectName(QStringLiteral("btnGovernance"));
        btnGovernance->setMinimumSize(QSize(100, 80));
        btnGovernance->setIconSize(QSize(32, 32));
        btnGovernance->setCheckable(true);
        btnGovernance->setAutoExclusive(true);

        navContainer->addWidget(btnGovernance);

        btnSettings = new QToolButton(navContainer_2);
        btnSettings->setObjectName(QStringLiteral("btnSettings"));
        btnSettings->setMinimumSize(QSize(100, 80));
        btnSettings->setIconSize(QSize(32, 32));
        btnSettings->setCheckable(true);
        btnSettings->setAutoExclusive(true);

        navContainer->addWidget(btnSettings);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        navContainer->addItem(verticalSpacer);

        labelVersion = new QLabel(navContainer_2);
        labelVersion->setObjectName(QStringLiteral("labelVersion"));
        labelVersion->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        navContainer->addWidget(labelVersion, 0, Qt::AlignHCenter);

        navContainer->setStretch(8, 1);

        verticalLayout->addWidget(navContainer_2);


        retranslateUi(NavMenuWidget);

        QMetaObject::connectSlotsByName(NavMenuWidget);
    } // setupUi

    void retranslateUi(QWidget *NavMenuWidget)
    {
        NavMenuWidget->setWindowTitle(QApplication::translate("NavMenuWidget", "Form", Q_NULLPTR));
        imgLogo->setText(QString());
        btnDashboard->setText(QString());
        btnSend->setText(QString());
        btnReceive->setText(QString());
        btnAddress->setText(QString());
        btnPrivacy->setText(QString());
        btnMaster->setText(QString());
        btnGovernance->setText(QString());
        btnSettings->setText(QString());
        labelVersion->setText(QApplication::translate("NavMenuWidget", "V 1.0.0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NavMenuWidget: public Ui_NavMenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVMENUWIDGET_H
