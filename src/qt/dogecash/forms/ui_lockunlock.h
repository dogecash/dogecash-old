/********************************************************************************
** Form generated from reading UI file 'lockunlock.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOCKUNLOCK_H
#define UI_LOCKUNLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LockUnlock
{
public:
    QHBoxLayout *horizontalLayout_3;
    QWidget *container;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonUnlocked;
    QHBoxLayout *horizontalLayout_31;
    QPushButton *pushButtonLocked;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonStaking;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *LockUnlock)
    {
        if (LockUnlock->objectName().isEmpty())
            LockUnlock->setObjectName(QStringLiteral("LockUnlock"));
        LockUnlock->resize(528, 141);
        LockUnlock->setStyleSheet(QStringLiteral("margin:0px; padding:0px; border:none;"));
        horizontalLayout_3 = new QHBoxLayout(LockUnlock);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        container = new QWidget(LockUnlock);
        container->setObjectName(QStringLiteral("container"));
        verticalLayout_2 = new QVBoxLayout(container);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(container);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonUnlocked = new QPushButton(groupBox);
        pushButtonUnlocked->setObjectName(QStringLiteral("pushButtonUnlocked"));
        pushButtonUnlocked->setMinimumSize(QSize(36, 36));
        pushButtonUnlocked->setMaximumSize(QSize(16777215, 36));
        pushButtonUnlocked->setCheckable(true);
        pushButtonUnlocked->setChecked(true);
        pushButtonUnlocked->setAutoExclusive(true);

        horizontalLayout_2->addWidget(pushButtonUnlocked);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        pushButtonLocked = new QPushButton(groupBox);
        pushButtonLocked->setObjectName(QStringLiteral("pushButtonLocked"));
        pushButtonLocked->setMinimumSize(QSize(36, 36));
        pushButtonLocked->setMaximumSize(QSize(16777215, 36));
        pushButtonLocked->setCheckable(true);
        pushButtonLocked->setAutoExclusive(true);

        horizontalLayout_31->addWidget(pushButtonLocked);


        verticalLayout->addLayout(horizontalLayout_31);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonStaking = new QPushButton(groupBox);
        pushButtonStaking->setObjectName(QStringLiteral("pushButtonStaking"));
        pushButtonStaking->setMinimumSize(QSize(36, 36));
        pushButtonStaking->setMaximumSize(QSize(16777215, 36));
        pushButtonStaking->setCheckable(true);
        pushButtonStaking->setAutoExclusive(true);

        horizontalLayout->addWidget(pushButtonStaking);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addWidget(groupBox);


        horizontalLayout_3->addWidget(container);


        retranslateUi(LockUnlock);

        QMetaObject::connectSlotsByName(LockUnlock);
    } // setupUi

    void retranslateUi(QWidget *LockUnlock)
    {
        LockUnlock->setWindowTitle(QApplication::translate("LockUnlock", "Form", Q_NULLPTR));
        pushButtonUnlocked->setText(QString());
        pushButtonLocked->setText(QString());
        pushButtonStaking->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LockUnlock: public Ui_LockUnlock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOCKUNLOCK_H
