/********************************************************************************
** Form generated from reading UI file 'splash.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASH_H
#define UI_SPLASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Splash
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QToolButton *imgLogo;
    QSpacerItem *verticalSpacer;
    QLabel *lblMessage;
    QWidget *layoutProgress;
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Splash)
    {
        if (Splash->objectName().isEmpty())
            Splash->setObjectName(QStringLiteral("Splash"));
        Splash->resize(1200, 700);
        Splash->setMinimumSize(QSize(0, 700));
        Splash->setMaximumSize(QSize(16777215, 700));
        verticalLayout_2 = new QVBoxLayout(Splash);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(Splash);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(750, 520));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        imgLogo = new QToolButton(frame);
        imgLogo->setObjectName(QStringLiteral("imgLogo"));
        imgLogo->setMinimumSize(QSize(300, 100));
        imgLogo->setMaximumSize(QSize(300, 100));

        verticalLayout->addWidget(imgLogo, 0, Qt::AlignHCenter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        lblMessage = new QLabel(frame);
        lblMessage->setObjectName(QStringLiteral("lblMessage"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblMessage->sizePolicy().hasHeightForWidth());
        lblMessage->setSizePolicy(sizePolicy);
        lblMessage->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setPointSize(16);
        lblMessage->setFont(font);
        lblMessage->setStyleSheet(QStringLiteral("color:white;"));
        lblMessage->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(lblMessage, 0, Qt::AlignHCenter);

        layoutProgress = new QWidget(frame);
        layoutProgress->setObjectName(QStringLiteral("layoutProgress"));
        layoutProgress->setMinimumSize(QSize(0, 8));
        layoutProgress->setMaximumSize(QSize(16777215, 8));
        horizontalLayout = new QHBoxLayout(layoutProgress);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 4, 0, 0);
        progressBar = new QProgressBar(layoutProgress);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout->addWidget(progressBar);


        verticalLayout->addWidget(layoutProgress);

        verticalSpacer_3 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);


        verticalLayout_2->addWidget(frame);


        retranslateUi(Splash);

        QMetaObject::connectSlotsByName(Splash);
    } // setupUi

    void retranslateUi(QWidget *Splash)
    {
        Splash->setWindowTitle(QApplication::translate("Splash", "Form", Q_NULLPTR));
        imgLogo->setText(QString());
        lblMessage->setText(QApplication::translate("Splash", "Loading\342\200\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Splash: public Ui_Splash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASH_H
