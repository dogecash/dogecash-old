/********************************************************************************
** Form generated from reading UI file 'settingsmainoptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSMAINOPTIONSWIDGET_H
#define UI_SETTINGSMAINOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsMainOptionsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *left;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayoutTitle;
    QLabel *labelTitle;
    QLabel *labelSubtitle1;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushSwitchStart;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTitleSizeDb;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *databaseCache;
    QSpacerItem *verticalThreads2;
    QHBoxLayout *horizontalThreads;
    QLabel *labelTitleThreads;
    QSpacerItem *horizontalSpacerThreads;
    QSpinBox *threadsScriptVerif;
    QSpacerItem *verticalPercentagezDogec;
    QLabel *labelDivider;
    QSpacerItem *verticalThreads;
    QHBoxLayout *horizontalLayout_34;
    QVBoxLayout *verticalLayoutTitle2;
    QLabel *labelTitleDown;
    QLabel *labelSubtitleDown;
    QSpacerItem *verticalSpacer_5;
    QCheckBox *checkBoxMinTaskbar;
    QSpacerItem *verticalSpacer_4;
    QCheckBox *checkBoxMinClose;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButtonReset;
    QPushButton *pushButtonClean;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonSave;

    void setupUi(QWidget *SettingsMainOptionsWidget)
    {
        if (SettingsMainOptionsWidget->objectName().isEmpty())
            SettingsMainOptionsWidget->setObjectName(QStringLiteral("SettingsMainOptionsWidget"));
        SettingsMainOptionsWidget->resize(428, 434);
        verticalLayout = new QVBoxLayout(SettingsMainOptionsWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QWidget(SettingsMainOptionsWidget);
        left->setObjectName(QStringLiteral("left"));
        verticalLayout_3 = new QVBoxLayout(left);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayoutTitle = new QVBoxLayout();
        verticalLayoutTitle->setSpacing(5);
        verticalLayoutTitle->setObjectName(QStringLiteral("verticalLayoutTitle"));
        labelTitle = new QLabel(left);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        verticalLayoutTitle->addWidget(labelTitle);

        labelSubtitle1 = new QLabel(left);
        labelSubtitle1->setObjectName(QStringLiteral("labelSubtitle1"));
        labelSubtitle1->setWordWrap(true);

        verticalLayoutTitle->addWidget(labelSubtitle1);


        horizontalLayout_3->addLayout(verticalLayoutTitle);

        horizontalLayout_3->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushSwitchStart = new QPushButton(left);
        pushSwitchStart->setObjectName(QStringLiteral("pushSwitchStart"));
        pushSwitchStart->setMinimumSize(QSize(0, 30));
        pushSwitchStart->setMaximumSize(QSize(16777215, 30));
        pushSwitchStart->setCheckable(true);
        pushSwitchStart->setChecked(true);

        horizontalLayout->addWidget(pushSwitchStart);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelTitleSizeDb = new QLabel(left);
        labelTitleSizeDb->setObjectName(QStringLiteral("labelTitleSizeDb"));

        horizontalLayout_2->addWidget(labelTitleSizeDb);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        databaseCache = new QSpinBox(left);
        databaseCache->setObjectName(QStringLiteral("databaseCache"));
        databaseCache->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(databaseCache);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalThreads2 = new QSpacerItem(20, 14, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalThreads2);

        horizontalThreads = new QHBoxLayout();
        horizontalThreads->setObjectName(QStringLiteral("horizontalThreads"));
        labelTitleThreads = new QLabel(left);
        labelTitleThreads->setObjectName(QStringLiteral("labelTitleThreads"));

        horizontalThreads->addWidget(labelTitleThreads);

        horizontalSpacerThreads = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalThreads->addItem(horizontalSpacerThreads);

        threadsScriptVerif = new QSpinBox(left);
        threadsScriptVerif->setObjectName(QStringLiteral("threadsScriptVerif"));
        threadsScriptVerif->setMinimumSize(QSize(120, 0));

        horizontalThreads->addWidget(threadsScriptVerif);


        verticalLayout_2->addLayout(horizontalThreads);

        verticalPercentagezDogec = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalPercentagezDogec);

        labelDivider = new QLabel(left);
        labelDivider->setObjectName(QStringLiteral("labelDivider"));
        labelDivider->setMinimumSize(QSize(0, 1));
        labelDivider->setMaximumSize(QSize(16777215, 1));

        verticalLayout_2->addWidget(labelDivider);

        verticalThreads = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalThreads);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setSpacing(0);
        horizontalLayout_34->setObjectName(QStringLiteral("horizontalLayout_34"));
        verticalLayoutTitle2 = new QVBoxLayout();
        verticalLayoutTitle2->setSpacing(5);
        verticalLayoutTitle2->setObjectName(QStringLiteral("verticalLayoutTitle2"));
        labelTitleDown = new QLabel(left);
        labelTitleDown->setObjectName(QStringLiteral("labelTitleDown"));

        verticalLayoutTitle2->addWidget(labelTitleDown);

        labelSubtitleDown = new QLabel(left);
        labelSubtitleDown->setObjectName(QStringLiteral("labelSubtitleDown"));
        labelSubtitleDown->setWordWrap(true);

        verticalLayoutTitle2->addWidget(labelSubtitleDown);


        horizontalLayout_34->addLayout(verticalLayoutTitle2);

        horizontalLayout_34->setStretch(0, 1);

        verticalLayout_2->addLayout(horizontalLayout_34);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_5);

        checkBoxMinTaskbar = new QCheckBox(left);
        checkBoxMinTaskbar->setObjectName(QStringLiteral("checkBoxMinTaskbar"));

        verticalLayout_2->addWidget(checkBoxMinTaskbar);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_4);

        checkBoxMinClose = new QCheckBox(left);
        checkBoxMinClose->setObjectName(QStringLiteral("checkBoxMinClose"));

        verticalLayout_2->addWidget(checkBoxMinClose);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(12);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButtonReset = new QPushButton(left);
        pushButtonReset->setObjectName(QStringLiteral("pushButtonReset"));
        pushButtonReset->setMinimumSize(QSize(160, 50));
        pushButtonReset->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_7->addWidget(pushButtonReset);

        pushButtonClean = new QPushButton(left);
        pushButtonClean->setObjectName(QStringLiteral("pushButtonClean"));
        pushButtonClean->setMinimumSize(QSize(0, 50));

        horizontalLayout_7->addWidget(pushButtonClean);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        pushButtonSave = new QPushButton(left);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));
        pushButtonSave->setMinimumSize(QSize(200, 50));
        pushButtonSave->setMaximumSize(QSize(200, 50));

        horizontalLayout_7->addWidget(pushButtonSave);


        verticalLayout_2->addLayout(horizontalLayout_7);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout->addWidget(left);


        retranslateUi(SettingsMainOptionsWidget);

        QMetaObject::connectSlotsByName(SettingsMainOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *SettingsMainOptionsWidget)
    {
        SettingsMainOptionsWidget->setWindowTitle(QApplication::translate("SettingsMainOptionsWidget", "Form", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SettingsMainOptionsWidget", "TextLabel", Q_NULLPTR));
        labelSubtitle1->setText(QApplication::translate("SettingsMainOptionsWidget", "TextLabel", Q_NULLPTR));
        pushSwitchStart->setText(QString());
        labelTitleSizeDb->setText(QApplication::translate("SettingsMainOptionsWidget", "TextLabel", Q_NULLPTR));
        labelTitleThreads->setText(QApplication::translate("SettingsMainOptionsWidget", "TextLabel", Q_NULLPTR));
        labelDivider->setText(QString());
        labelTitleDown->setText(QApplication::translate("SettingsMainOptionsWidget", "Window", Q_NULLPTR));
        labelSubtitleDown->setText(QApplication::translate("SettingsMainOptionsWidget", "Customize the application window options", Q_NULLPTR));
        checkBoxMinTaskbar->setText(QApplication::translate("SettingsMainOptionsWidget", "CheckBox", Q_NULLPTR));
        checkBoxMinClose->setText(QApplication::translate("SettingsMainOptionsWidget", "CheckBox", Q_NULLPTR));
        pushButtonReset->setText(QApplication::translate("SettingsMainOptionsWidget", "Reset to default", Q_NULLPTR));
        pushButtonClean->setText(QApplication::translate("SettingsMainOptionsWidget", "Discard changes", Q_NULLPTR));
        pushButtonSave->setText(QApplication::translate("SettingsMainOptionsWidget", "SAVE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SettingsMainOptionsWidget: public Ui_SettingsMainOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSMAINOPTIONSWIDGET_H
