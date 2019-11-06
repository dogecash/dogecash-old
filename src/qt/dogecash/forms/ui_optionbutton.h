/********************************************************************************
** Form generated from reading UI file 'optionbutton.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONBUTTON_H
#define UI_OPTIONBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionButton
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *layoutOptions2;
    QHBoxLayout *layoutArrow3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QWidget *layoutCircle;
    QHBoxLayout *horizontalLayout1;
    QLabel *labelCircle;
    QLabel *labelTitleChange;
    QLabel *labelSubtitleChange;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *labelArrow3;

    void setupUi(QWidget *OptionButton)
    {
        if (OptionButton->objectName().isEmpty())
            OptionButton->setObjectName(QStringLiteral("OptionButton"));
        OptionButton->resize(563, 80);
        verticalLayout_2 = new QVBoxLayout(OptionButton);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        layoutOptions2 = new QWidget(OptionButton);
        layoutOptions2->setObjectName(QStringLiteral("layoutOptions2"));
        layoutArrow3 = new QHBoxLayout(layoutOptions2);
        layoutArrow3->setSpacing(0);
        layoutArrow3->setObjectName(QStringLiteral("layoutArrow3"));
        layoutArrow3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        layoutCircle = new QWidget(layoutOptions2);
        layoutCircle->setObjectName(QStringLiteral("layoutCircle"));
        layoutCircle->setMinimumSize(QSize(20, 0));
        layoutCircle->setMaximumSize(QSize(20, 16777215));
        horizontalLayout1 = new QHBoxLayout(layoutCircle);
        horizontalLayout1->setSpacing(0);
        horizontalLayout1->setObjectName(QStringLiteral("horizontalLayout1"));
        horizontalLayout1->setContentsMargins(0, 0, 0, 0);
        labelCircle = new QLabel(layoutCircle);
        labelCircle->setObjectName(QStringLiteral("labelCircle"));
        labelCircle->setMinimumSize(QSize(10, 10));
        labelCircle->setMaximumSize(QSize(10, 10));

        horizontalLayout1->addWidget(labelCircle, 0, Qt::AlignLeft);


        horizontalLayout->addWidget(layoutCircle);

        labelTitleChange = new QLabel(layoutOptions2);
        labelTitleChange->setObjectName(QStringLiteral("labelTitleChange"));

        horizontalLayout->addWidget(labelTitleChange);


        verticalLayout->addLayout(horizontalLayout);

        labelSubtitleChange = new QLabel(layoutOptions2);
        labelSubtitleChange->setObjectName(QStringLiteral("labelSubtitleChange"));

        verticalLayout->addWidget(labelSubtitleChange);


        layoutArrow3->addLayout(verticalLayout);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutArrow3->addItem(horizontalSpacer_8);

        labelArrow3 = new QPushButton(layoutOptions2);
        labelArrow3->setObjectName(QStringLiteral("labelArrow3"));
        labelArrow3->setMinimumSize(QSize(24, 24));
        labelArrow3->setMaximumSize(QSize(24, 24));
        labelArrow3->setIconSize(QSize(24, 24));
        labelArrow3->setCheckable(true);
        labelArrow3->setChecked(false);

        layoutArrow3->addWidget(labelArrow3);


        verticalLayout_2->addWidget(layoutOptions2);


        retranslateUi(OptionButton);

        QMetaObject::connectSlotsByName(OptionButton);
    } // setupUi

    void retranslateUi(QWidget *OptionButton)
    {
        OptionButton->setWindowTitle(QApplication::translate("OptionButton", "Form", Q_NULLPTR));
        labelCircle->setText(QString());
        labelTitleChange->setText(QApplication::translate("OptionButton", "TextLabel", Q_NULLPTR));
        labelSubtitleChange->setText(QApplication::translate("OptionButton", "TextLabel", Q_NULLPTR));
        labelArrow3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OptionButton: public Ui_OptionButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONBUTTON_H
