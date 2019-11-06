/********************************************************************************
** Form generated from reading UI file 'mnrow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNROW_H
#define UI_MNROW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MNRow
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *labelName;
    QLabel *labelAddress;
    QSpacerItem *horizontalSpacer;
    QLabel *labelDate;
    QPushButton *pushButtonMenu;
    QLabel *lblDivisory;

    void setupUi(QWidget *MNRow)
    {
        if (MNRow->objectName().isEmpty())
            MNRow->setObjectName(QStringLiteral("MNRow"));
        MNRow->resize(475, 65);
        MNRow->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(MNRow);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(20, 0, 20, 0);
        frame_2 = new QFrame(MNRow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setStyleSheet(QStringLiteral("border:none;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        frame = new QFrame(frame_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral("border:none;padding:0px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelName = new QLabel(frame);
        labelName->setObjectName(QStringLiteral("labelName"));

        verticalLayout->addWidget(labelName);

        labelAddress = new QLabel(frame);
        labelAddress->setObjectName(QStringLiteral("labelAddress"));

        verticalLayout->addWidget(labelAddress);


        horizontalLayout->addWidget(frame);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelDate = new QLabel(frame_2);
        labelDate->setObjectName(QStringLiteral("labelDate"));

        horizontalLayout->addWidget(labelDate);

        pushButtonMenu = new QPushButton(frame_2);
        pushButtonMenu->setObjectName(QStringLiteral("pushButtonMenu"));
        pushButtonMenu->setStyleSheet(QStringLiteral("border:none; background-color:transparent; padding:0px;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/ic-menu-hover"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMenu->setIcon(icon);
        pushButtonMenu->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(pushButtonMenu);


        verticalLayout_2->addWidget(frame_2);

        lblDivisory = new QLabel(MNRow);
        lblDivisory->setObjectName(QStringLiteral("lblDivisory"));
        lblDivisory->setMinimumSize(QSize(0, 1));
        lblDivisory->setMaximumSize(QSize(16777215, 1));
        lblDivisory->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_2->addWidget(lblDivisory);


        retranslateUi(MNRow);

        QMetaObject::connectSlotsByName(MNRow);
    } // setupUi

    void retranslateUi(QWidget *MNRow)
    {
        MNRow->setWindowTitle(QApplication::translate("MNRow", "Form", Q_NULLPTR));
        labelName->setText(QApplication::translate("MNRow", "user_masternode", Q_NULLPTR));
        labelAddress->setText(QApplication::translate("MNRow", "Address: 88.26.164.88:51474", Q_NULLPTR));
        labelDate->setText(QApplication::translate("MNRow", "Jan. 19, 2019", Q_NULLPTR));
        pushButtonMenu->setText(QString());
        lblDivisory->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MNRow: public Ui_MNRow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNROW_H
