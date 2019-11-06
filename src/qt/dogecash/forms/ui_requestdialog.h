/********************************************************************************
** Form generated from reading UI file 'requestdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTDIALOG_H
#define UI_REQUESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RequestDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_21;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnEsc;
    QStackedWidget *stack;
    QWidget *page_1;
    QVBoxLayout *layout1;
    QSpacerItem *verticalSpacer_21;
    QLabel *labelMessage;
    QWidget *containerAmount;
    QVBoxLayout *verticalLayout;
    QLabel *labelSubtitleAmount;
    QWidget *layoutAmount;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditAmount;
    QWidget *comboContainer;
    QHBoxLayout *horizontalLayout_31;
    QComboBox *comboBoxCoin;
    QSpacerItem *verticalSpacer_31;
    QVBoxLayout *verticalLayoutLabel;
    QLabel *labelSubtitleLabel;
    QLineEdit *lineEditLabel;
    QSpacerItem *verticalSpacer_34;
    QVBoxLayout *verticalLayoutDescription;
    QLabel *labelSubtitleDescription;
    QLineEdit *lineEditDescription;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_2;
    QVBoxLayout *layout2;
    QSpacerItem *verticalSpacer_5;
    QLabel *labelQrImg;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelAddress;
    QSpacerItem *verticalSpacer_32;
    QHBoxLayout *horizontal;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnCopyAddress;
    QPushButton *btnCopyUrl;
    QSpacerItem *horizontalSpacer_2;
    QWidget *buttonsStack;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_41;
    QPushButton *btnCancel;
    QPushButton *btnSave;

    void setupUi(QDialog *RequestDialog)
    {
        if (RequestDialog->objectName().isEmpty())
            RequestDialog->setObjectName(QStringLiteral("RequestDialog"));
        RequestDialog->resize(602, 607);
        verticalLayout_5 = new QVBoxLayout(RequestDialog);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(RequestDialog);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(30, 20, 30, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_21);

        labelTitle = new QLabel(frame);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setMinimumSize(QSize(0, 40));
        labelTitle->setMaximumSize(QSize(16777215, 40));
        labelTitle->setStyleSheet(QStringLiteral("padding-left:24px;"));
        labelTitle->setAlignment(Qt::AlignCenter);
        labelTitle->setMargin(7);

        horizontalLayout_3->addWidget(labelTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnEsc = new QPushButton(frame);
        btnEsc->setObjectName(QStringLiteral("btnEsc"));
        btnEsc->setMinimumSize(QSize(24, 24));
        btnEsc->setMaximumSize(QSize(24, 24));

        horizontalLayout_3->addWidget(btnEsc);


        verticalLayout_4->addLayout(horizontalLayout_3);

        stack = new QStackedWidget(frame);
        stack->setObjectName(QStringLiteral("stack"));
        stack->setMinimumSize(QSize(540, 0));
        stack->setMaximumSize(QSize(540, 16777215));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        page_1->setMinimumSize(QSize(540, 0));
        page_1->setMaximumSize(QSize(540, 16777215));
        layout1 = new QVBoxLayout(page_1);
        layout1->setSpacing(0);
        layout1->setObjectName(QStringLiteral("layout1"));
        layout1->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_21 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        layout1->addItem(verticalSpacer_21);

        labelMessage = new QLabel(page_1);
        labelMessage->setObjectName(QStringLiteral("labelMessage"));
        labelMessage->setMinimumSize(QSize(400, 50));
        labelMessage->setAlignment(Qt::AlignCenter);
        labelMessage->setWordWrap(true);

        layout1->addWidget(labelMessage, 0, Qt::AlignHCenter);

        containerAmount = new QWidget(page_1);
        containerAmount->setObjectName(QStringLiteral("containerAmount"));
        verticalLayout = new QVBoxLayout(containerAmount);
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelSubtitleAmount = new QLabel(containerAmount);
        labelSubtitleAmount->setObjectName(QStringLiteral("labelSubtitleAmount"));
        labelSubtitleAmount->setMinimumSize(QSize(350, 16));
        labelSubtitleAmount->setMaximumSize(QSize(16777215, 16));

        verticalLayout->addWidget(labelSubtitleAmount);

        layoutAmount = new QWidget(containerAmount);
        layoutAmount->setObjectName(QStringLiteral("layoutAmount"));
        horizontalLayout = new QHBoxLayout(layoutAmount);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditAmount = new QLineEdit(layoutAmount);
        lineEditAmount->setObjectName(QStringLiteral("lineEditAmount"));
        lineEditAmount->setMinimumSize(QSize(0, 50));
        lineEditAmount->setMaximumSize(QSize(16777215, 50));

        horizontalLayout->addWidget(lineEditAmount);

        comboContainer = new QWidget(layoutAmount);
        comboContainer->setObjectName(QStringLiteral("comboContainer"));
        comboContainer->setMinimumSize(QSize(100, 50));
        comboContainer->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_31 = new QHBoxLayout(comboContainer);
        horizontalLayout_31->setSpacing(0);
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        horizontalLayout_31->setContentsMargins(0, 0, 10, 0);
        comboBoxCoin = new QComboBox(comboContainer);
        comboBoxCoin->setObjectName(QStringLiteral("comboBoxCoin"));
        comboBoxCoin->setMinimumSize(QSize(0, 50));
        comboBoxCoin->setMaximumSize(QSize(16777215, 50));

        horizontalLayout_31->addWidget(comboBoxCoin);


        horizontalLayout->addWidget(comboContainer);

        horizontalLayout->setStretch(0, 2);

        verticalLayout->addWidget(layoutAmount, 0, Qt::AlignTop);


        layout1->addWidget(containerAmount, 0, Qt::AlignBottom);

        verticalSpacer_31 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        layout1->addItem(verticalSpacer_31);

        verticalLayoutLabel = new QVBoxLayout();
        verticalLayoutLabel->setSpacing(9);
        verticalLayoutLabel->setObjectName(QStringLiteral("verticalLayoutLabel"));
        labelSubtitleLabel = new QLabel(page_1);
        labelSubtitleLabel->setObjectName(QStringLiteral("labelSubtitleLabel"));
        labelSubtitleLabel->setMinimumSize(QSize(0, 16));
        labelSubtitleLabel->setMaximumSize(QSize(16777215, 16));

        verticalLayoutLabel->addWidget(labelSubtitleLabel);

        lineEditLabel = new QLineEdit(page_1);
        lineEditLabel->setObjectName(QStringLiteral("lineEditLabel"));
        lineEditLabel->setMinimumSize(QSize(0, 50));
        lineEditLabel->setMaximumSize(QSize(16777215, 50));

        verticalLayoutLabel->addWidget(lineEditLabel);


        layout1->addLayout(verticalLayoutLabel);

        verticalSpacer_34 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        layout1->addItem(verticalSpacer_34);

        verticalLayoutDescription = new QVBoxLayout();
        verticalLayoutDescription->setSpacing(9);
        verticalLayoutDescription->setObjectName(QStringLiteral("verticalLayoutDescription"));
        labelSubtitleDescription = new QLabel(page_1);
        labelSubtitleDescription->setObjectName(QStringLiteral("labelSubtitleDescription"));
        labelSubtitleDescription->setMinimumSize(QSize(0, 16));
        labelSubtitleDescription->setMaximumSize(QSize(16777215, 16));

        verticalLayoutDescription->addWidget(labelSubtitleDescription);

        lineEditDescription = new QLineEdit(page_1);
        lineEditDescription->setObjectName(QStringLiteral("lineEditDescription"));
        lineEditDescription->setMinimumSize(QSize(0, 50));
        lineEditDescription->setMaximumSize(QSize(16777215, 50));

        verticalLayoutDescription->addWidget(lineEditDescription);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayoutDescription->addItem(verticalSpacer_4);


        layout1->addLayout(verticalLayoutDescription);

        stack->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        layout2 = new QVBoxLayout(page_2);
        layout2->setObjectName(QStringLiteral("layout2"));
        verticalSpacer_5 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        layout2->addItem(verticalSpacer_5);

        labelQrImg = new QLabel(page_2);
        labelQrImg->setObjectName(QStringLiteral("labelQrImg"));
        labelQrImg->setMinimumSize(QSize(260, 260));
        labelQrImg->setMaximumSize(QSize(260, 260));
        labelQrImg->setAlignment(Qt::AlignCenter);

        layout2->addWidget(labelQrImg, 0, Qt::AlignHCenter);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        layout2->addItem(verticalSpacer_2);

        labelAddress = new QLabel(page_2);
        labelAddress->setObjectName(QStringLiteral("labelAddress"));

        layout2->addWidget(labelAddress, 0, Qt::AlignHCenter);

        verticalSpacer_32 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layout2->addItem(verticalSpacer_32);

        horizontal = new QHBoxLayout();
        horizontal->setObjectName(QStringLiteral("horizontal"));
        horizontal->setContentsMargins(20, -1, 20, 20);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontal->addItem(horizontalSpacer_4);

        btnCopyAddress = new QPushButton(page_2);
        btnCopyAddress->setObjectName(QStringLiteral("btnCopyAddress"));
        btnCopyAddress->setMinimumSize(QSize(180, 50));

        horizontal->addWidget(btnCopyAddress);

        btnCopyUrl = new QPushButton(page_2);
        btnCopyUrl->setObjectName(QStringLiteral("btnCopyUrl"));
        btnCopyUrl->setMinimumSize(QSize(180, 50));

        horizontal->addWidget(btnCopyUrl);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontal->addItem(horizontalSpacer_2);


        layout2->addLayout(horizontal);

        stack->addWidget(page_2);

        verticalLayout_4->addWidget(stack);

        buttonsStack = new QWidget(frame);
        buttonsStack->setObjectName(QStringLiteral("buttonsStack"));
        horizontalLayout_5 = new QHBoxLayout(buttonsStack);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(20, -1, 0, -1);
        horizontalSpacer_41 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_41);

        btnCancel = new QPushButton(buttonsStack);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setMinimumSize(QSize(180, 50));

        horizontalLayout_5->addWidget(btnCancel);

        btnSave = new QPushButton(buttonsStack);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setMinimumSize(QSize(180, 50));

        horizontalLayout_5->addWidget(btnSave);


        verticalLayout_4->addWidget(buttonsStack);

        verticalLayout_4->setStretch(0, 1);

        verticalLayout_5->addWidget(frame);


        retranslateUi(RequestDialog);

        stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RequestDialog);
    } // setupUi

    void retranslateUi(QDialog *RequestDialog)
    {
        RequestDialog->setWindowTitle(QApplication::translate("RequestDialog", "Dialog", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("RequestDialog", "New Request Payment", Q_NULLPTR));
        btnEsc->setText(QString());
        labelMessage->setText(QApplication::translate("RequestDialog", "Lorem ipsum dolor sit amet, consectur cling elit, sed do ", Q_NULLPTR));
        labelSubtitleAmount->setText(QApplication::translate("RequestDialog", "Amount", Q_NULLPTR));
        labelSubtitleLabel->setText(QApplication::translate("RequestDialog", "TextLabel", Q_NULLPTR));
        labelSubtitleDescription->setText(QApplication::translate("RequestDialog", "TextLabel", Q_NULLPTR));
        labelQrImg->setText(QString());
        labelAddress->setText(QApplication::translate("RequestDialog", "D7VFR83SQbiezrW72hjcWJtcfip5krte2Z ", Q_NULLPTR));
        btnCopyAddress->setText(QApplication::translate("RequestDialog", "COPY ADDRESS", Q_NULLPTR));
        btnCopyUrl->setText(QApplication::translate("RequestDialog", "COPY URL", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("RequestDialog", "CANCEL", Q_NULLPTR));
        btnSave->setText(QApplication::translate("RequestDialog", "REQUEST", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RequestDialog: public Ui_RequestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTDIALOG_H
