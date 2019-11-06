/********************************************************************************
** Form generated from reading UI file 'settingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWIDGET_H
#define UI_SETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_1;
    QHBoxLayout *horizontalLayout_1;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonFile;
    QWidget *fileButtonsWidget;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButtonFile2;
    QPushButton *pushButtonFile3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonConfiguration;
    QWidget *configurationButtonsWidget;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButtonConfiguration4;
    QPushButton *pushButtonConfiguration3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonOptions;
    QWidget *optionsButtonsWidget;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButtonOptions1;
    QPushButton *pushButtonOptions2;
    QPushButton *pushButtonOptions5;
    QHBoxLayout *horizontalTools;
    QPushButton *pushButtonTools;
    QWidget *toolsButtonsWidget;
    QVBoxLayout *verticalTools_11;
    QPushButton *pushButtonTools1;
    QPushButton *pushButtonTools2;
    QPushButton *pushButtonTools5;
    QHBoxLayout *horizontalHelp;
    QPushButton *pushButtonHelp;
    QWidget *helpButtonsWidget;
    QVBoxLayout *verticalHelp;
    QPushButton *pushButtonHelp1;
    QPushButton *pushButtonHelp2;
    QWidget *right;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_11;
    QStackedWidget *stackedWidgetContainer;

    void setupUi(QWidget *SettingsWidget)
    {
        if (SettingsWidget->objectName().isEmpty())
            SettingsWidget->setObjectName(QStringLiteral("SettingsWidget"));
        SettingsWidget->resize(629, 430);
        horizontalLayout = new QHBoxLayout(SettingsWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsWidget);
        left->setObjectName(QStringLiteral("left"));
        left->setMinimumSize(QSize(250, 0));
        verticalLayout = new QVBoxLayout(left);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_1 = new QVBoxLayout();
        verticalLayout_1->setSpacing(0);
        verticalLayout_1->setObjectName(QStringLiteral("verticalLayout_1"));
        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setSpacing(0);
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(20, -1, 20, -1);
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        horizontalLayout_1->addWidget(labelTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_1->addItem(horizontalSpacer);


        verticalLayout_1->addLayout(horizontalLayout_1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_1->addItem(verticalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea = new QScrollArea(left);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setStyleSheet(QStringLiteral(""));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 230, 887));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        scrollAreaWidgetContents->setAutoFillBackground(true);
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(20, -1, 20, -1);
        pushButtonFile = new QPushButton(groupBox);
        pushButtonFile->setObjectName(QStringLiteral("pushButtonFile"));
        pushButtonFile->setMinimumSize(QSize(0, 50));
        pushButtonFile->setMaximumSize(QSize(16777215, 50));
        pushButtonFile->setCheckable(true);
        pushButtonFile->setAutoExclusive(false);

        horizontalLayout_2->addWidget(pushButtonFile, 0, Qt::AlignTop);


        verticalLayout_5->addLayout(horizontalLayout_2);

        fileButtonsWidget = new QWidget(groupBox);
        fileButtonsWidget->setObjectName(QStringLiteral("fileButtonsWidget"));
        verticalLayout_6 = new QVBoxLayout(fileButtonsWidget);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButtonFile2 = new QPushButton(fileButtonsWidget);
        pushButtonFile2->setObjectName(QStringLiteral("pushButtonFile2"));
        pushButtonFile2->setMinimumSize(QSize(0, 50));
        pushButtonFile2->setMaximumSize(QSize(16777215, 50));
        pushButtonFile2->setCheckable(true);
        pushButtonFile2->setAutoExclusive(false);

        verticalLayout_6->addWidget(pushButtonFile2);

        pushButtonFile3 = new QPushButton(fileButtonsWidget);
        pushButtonFile3->setObjectName(QStringLiteral("pushButtonFile3"));
        pushButtonFile3->setMinimumSize(QSize(0, 50));
        pushButtonFile3->setMaximumSize(QSize(16777215, 50));
        pushButtonFile3->setCheckable(true);
        pushButtonFile3->setAutoExclusive(false);

        verticalLayout_6->addWidget(pushButtonFile3);


        verticalLayout_5->addWidget(fileButtonsWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(20, -1, 20, -1);
        pushButtonConfiguration = new QPushButton(groupBox);
        pushButtonConfiguration->setObjectName(QStringLiteral("pushButtonConfiguration"));
        pushButtonConfiguration->setMinimumSize(QSize(0, 50));
        pushButtonConfiguration->setMaximumSize(QSize(16777215, 50));
        pushButtonConfiguration->setCheckable(true);
        pushButtonConfiguration->setAutoExclusive(false);

        horizontalLayout_3->addWidget(pushButtonConfiguration, 0, Qt::AlignTop);


        verticalLayout_5->addLayout(horizontalLayout_3);

        configurationButtonsWidget = new QWidget(groupBox);
        configurationButtonsWidget->setObjectName(QStringLiteral("configurationButtonsWidget"));
        verticalLayout_7 = new QVBoxLayout(configurationButtonsWidget);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButtonConfiguration4 = new QPushButton(configurationButtonsWidget);
        pushButtonConfiguration4->setObjectName(QStringLiteral("pushButtonConfiguration4"));
        pushButtonConfiguration4->setMinimumSize(QSize(0, 50));
        pushButtonConfiguration4->setMaximumSize(QSize(16777215, 50));
        pushButtonConfiguration4->setCheckable(true);
        pushButtonConfiguration4->setAutoExclusive(false);

        verticalLayout_7->addWidget(pushButtonConfiguration4);

        pushButtonConfiguration3 = new QPushButton(configurationButtonsWidget);
        pushButtonConfiguration3->setObjectName(QStringLiteral("pushButtonConfiguration3"));
        pushButtonConfiguration3->setMinimumSize(QSize(0, 50));
        pushButtonConfiguration3->setMaximumSize(QSize(16777215, 50));
        pushButtonConfiguration3->setCheckable(true);
        pushButtonConfiguration3->setAutoExclusive(false);

        verticalLayout_7->addWidget(pushButtonConfiguration3);


        verticalLayout_5->addWidget(configurationButtonsWidget);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(20, -1, 20, -1);
        pushButtonOptions = new QPushButton(groupBox);
        pushButtonOptions->setObjectName(QStringLiteral("pushButtonOptions"));
        pushButtonOptions->setMinimumSize(QSize(0, 50));
        pushButtonOptions->setMaximumSize(QSize(16777215, 50));
        pushButtonOptions->setCheckable(true);
        pushButtonOptions->setAutoExclusive(false);

        horizontalLayout_4->addWidget(pushButtonOptions, 0, Qt::AlignTop);


        verticalLayout_5->addLayout(horizontalLayout_4);

        optionsButtonsWidget = new QWidget(groupBox);
        optionsButtonsWidget->setObjectName(QStringLiteral("optionsButtonsWidget"));
        verticalLayout_8 = new QVBoxLayout(optionsButtonsWidget);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButtonOptions1 = new QPushButton(optionsButtonsWidget);
        pushButtonOptions1->setObjectName(QStringLiteral("pushButtonOptions1"));
        pushButtonOptions1->setMinimumSize(QSize(0, 50));
        pushButtonOptions1->setMaximumSize(QSize(16777215, 50));
        pushButtonOptions1->setCheckable(true);
        pushButtonOptions1->setChecked(false);
        pushButtonOptions1->setAutoExclusive(false);

        verticalLayout_8->addWidget(pushButtonOptions1);

        pushButtonOptions2 = new QPushButton(optionsButtonsWidget);
        pushButtonOptions2->setObjectName(QStringLiteral("pushButtonOptions2"));
        pushButtonOptions2->setMinimumSize(QSize(0, 50));
        pushButtonOptions2->setMaximumSize(QSize(16777215, 50));
        pushButtonOptions2->setCheckable(true);
        pushButtonOptions2->setAutoExclusive(false);

        verticalLayout_8->addWidget(pushButtonOptions2);

        pushButtonOptions5 = new QPushButton(optionsButtonsWidget);
        pushButtonOptions5->setObjectName(QStringLiteral("pushButtonOptions5"));
        pushButtonOptions5->setMinimumSize(QSize(0, 50));
        pushButtonOptions5->setMaximumSize(QSize(16777215, 50));
        pushButtonOptions5->setCheckable(true);
        pushButtonOptions5->setAutoExclusive(false);

        verticalLayout_8->addWidget(pushButtonOptions5);


        verticalLayout_5->addWidget(optionsButtonsWidget);

        horizontalTools = new QHBoxLayout();
        horizontalTools->setSpacing(0);
        horizontalTools->setObjectName(QStringLiteral("horizontalTools"));
        horizontalTools->setContentsMargins(20, -1, 20, -1);
        pushButtonTools = new QPushButton(groupBox);
        pushButtonTools->setObjectName(QStringLiteral("pushButtonTools"));
        pushButtonTools->setMinimumSize(QSize(0, 50));
        pushButtonTools->setMaximumSize(QSize(16777215, 50));
        pushButtonTools->setCheckable(true);
        pushButtonTools->setAutoExclusive(false);

        horizontalTools->addWidget(pushButtonTools, 0, Qt::AlignTop);


        verticalLayout_5->addLayout(horizontalTools);

        toolsButtonsWidget = new QWidget(groupBox);
        toolsButtonsWidget->setObjectName(QStringLiteral("toolsButtonsWidget"));
        verticalTools_11 = new QVBoxLayout(toolsButtonsWidget);
        verticalTools_11->setSpacing(0);
        verticalTools_11->setObjectName(QStringLiteral("verticalTools_11"));
        verticalTools_11->setContentsMargins(0, 0, 0, 0);
        pushButtonTools1 = new QPushButton(toolsButtonsWidget);
        pushButtonTools1->setObjectName(QStringLiteral("pushButtonTools1"));
        pushButtonTools1->setMinimumSize(QSize(0, 50));
        pushButtonTools1->setMaximumSize(QSize(16777215, 50));
        pushButtonTools1->setCheckable(true);
        pushButtonTools1->setChecked(false);
        pushButtonTools1->setAutoExclusive(false);

        verticalTools_11->addWidget(pushButtonTools1);

        pushButtonTools2 = new QPushButton(toolsButtonsWidget);
        pushButtonTools2->setObjectName(QStringLiteral("pushButtonTools2"));
        pushButtonTools2->setMinimumSize(QSize(0, 50));
        pushButtonTools2->setMaximumSize(QSize(16777215, 50));
        pushButtonTools2->setCheckable(true);
        pushButtonTools2->setAutoExclusive(false);

        verticalTools_11->addWidget(pushButtonTools2);

        pushButtonTools5 = new QPushButton(toolsButtonsWidget);
        pushButtonTools5->setObjectName(QStringLiteral("pushButtonTools5"));
        pushButtonTools5->setMinimumSize(QSize(0, 50));
        pushButtonTools5->setMaximumSize(QSize(16777215, 50));
        pushButtonTools5->setCheckable(true);
        pushButtonTools5->setAutoExclusive(false);

        verticalTools_11->addWidget(pushButtonTools5);


        verticalLayout_5->addWidget(toolsButtonsWidget);

        horizontalHelp = new QHBoxLayout();
        horizontalHelp->setSpacing(0);
        horizontalHelp->setObjectName(QStringLiteral("horizontalHelp"));
        horizontalHelp->setContentsMargins(20, -1, 20, -1);
        pushButtonHelp = new QPushButton(groupBox);
        pushButtonHelp->setObjectName(QStringLiteral("pushButtonHelp"));
        pushButtonHelp->setMinimumSize(QSize(0, 50));
        pushButtonHelp->setMaximumSize(QSize(16777215, 50));
        pushButtonHelp->setCheckable(true);
        pushButtonHelp->setAutoExclusive(false);

        horizontalHelp->addWidget(pushButtonHelp, 0, Qt::AlignTop);


        verticalLayout_5->addLayout(horizontalHelp);

        helpButtonsWidget = new QWidget(groupBox);
        helpButtonsWidget->setObjectName(QStringLiteral("helpButtonsWidget"));
        verticalHelp = new QVBoxLayout(helpButtonsWidget);
        verticalHelp->setSpacing(0);
        verticalHelp->setObjectName(QStringLiteral("verticalHelp"));
        verticalHelp->setContentsMargins(0, 0, 0, 0);
        pushButtonHelp1 = new QPushButton(helpButtonsWidget);
        pushButtonHelp1->setObjectName(QStringLiteral("pushButtonHelp1"));
        pushButtonHelp1->setMinimumSize(QSize(0, 50));
        pushButtonHelp1->setMaximumSize(QSize(16777215, 50));
        pushButtonHelp1->setCheckable(false);
        pushButtonHelp1->setChecked(false);
        pushButtonHelp1->setAutoExclusive(false);

        verticalHelp->addWidget(pushButtonHelp1);

        pushButtonHelp2 = new QPushButton(helpButtonsWidget);
        pushButtonHelp2->setObjectName(QStringLiteral("pushButtonHelp2"));
        pushButtonHelp2->setMinimumSize(QSize(0, 50));
        pushButtonHelp2->setMaximumSize(QSize(16777215, 50));
        pushButtonHelp2->setCheckable(false);
        pushButtonHelp2->setAutoExclusive(false);

        verticalHelp->addWidget(pushButtonHelp2);


        verticalLayout_5->addWidget(helpButtonsWidget);


        verticalLayout_4->addWidget(groupBox);


        verticalLayout_3->addLayout(verticalLayout_4);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        verticalLayout_1->addLayout(verticalLayout_2);


        verticalLayout->addLayout(verticalLayout_1);


        horizontalLayout->addWidget(left);

        right = new QWidget(SettingsWidget);
        right->setObjectName(QStringLiteral("right"));
        verticalLayout_9 = new QVBoxLayout(right);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        stackedWidgetContainer = new QStackedWidget(right);
        stackedWidgetContainer->setObjectName(QStringLiteral("stackedWidgetContainer"));

        verticalLayout_11->addWidget(stackedWidgetContainer);


        verticalLayout_10->addLayout(verticalLayout_11);


        verticalLayout_9->addLayout(verticalLayout_10);


        horizontalLayout->addWidget(right);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);

        retranslateUi(SettingsWidget);

        QMetaObject::connectSlotsByName(SettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsWidget)
    {
        SettingsWidget->setWindowTitle(QApplication::translate("SettingsWidget", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SettingsWidget", "TextLabel", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButtonFile->setText(QApplication::translate("SettingsWidget", "Wallet Data", Q_NULLPTR));
        pushButtonFile2->setText(QApplication::translate("SettingsWidget", "Wallet", Q_NULLPTR));
        pushButtonFile3->setText(QApplication::translate("SettingsWidget", "Multisend", Q_NULLPTR));
        pushButtonConfiguration->setText(QApplication::translate("SettingsWidget", "Tools", Q_NULLPTR));
        pushButtonConfiguration4->setText(QApplication::translate("SettingsWidget", "Sign/Verify Message", Q_NULLPTR));
        pushButtonConfiguration3->setText(QApplication::translate("SettingsWidget", "BIP38 Tool", Q_NULLPTR));
        pushButtonOptions->setText(QApplication::translate("SettingsWidget", "Options", Q_NULLPTR));
        pushButtonOptions1->setText(QApplication::translate("SettingsWidget", "Main", Q_NULLPTR));
        pushButtonOptions2->setText(QApplication::translate("SettingsWidget", "Wallet", Q_NULLPTR));
        pushButtonOptions5->setText(QApplication::translate("SettingsWidget", "Display", Q_NULLPTR));
        pushButtonTools->setText(QApplication::translate("SettingsWidget", "Debug", Q_NULLPTR));
        pushButtonTools1->setText(QApplication::translate("SettingsWidget", "Information", Q_NULLPTR));
        pushButtonTools2->setText(QApplication::translate("SettingsWidget", "Console", Q_NULLPTR));
        pushButtonTools5->setText(QApplication::translate("SettingsWidget", "Wallet Repair", Q_NULLPTR));
        pushButtonHelp->setText(QApplication::translate("SettingsWidget", "Help", Q_NULLPTR));
        pushButtonHelp1->setText(QApplication::translate("SettingsWidget", "FAQ", Q_NULLPTR));
        pushButtonHelp2->setText(QApplication::translate("SettingsWidget", "About DogeCash", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsWidget: public Ui_SettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWIDGET_H
