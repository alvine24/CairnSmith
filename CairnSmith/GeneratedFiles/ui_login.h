/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created: Thu May 16 16:25:44 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_Login
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *Form_Login)
    {
        if (Form_Login->objectName().isEmpty())
            Form_Login->setObjectName(QString::fromUtf8("Form_Login"));
        Form_Login->resize(931, 478);
        gridLayout = new QGridLayout(Form_Login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(25, -1, -1, -1);
        label = new QLabel(Form_Login);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(Form_Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lineEdit = new QLineEdit(Form_Login);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(200, 25));
        lineEdit->setMaximumSize(QSize(1000, 25));

        verticalLayout_3->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(Form_Login);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(200, 25));
        lineEdit_2->setMaximumSize(QSize(1000, 25));

        verticalLayout_3->addWidget(lineEdit_2);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(0, -1, -1, 0);
        horizontalSpacer_3 = new QSpacerItem(150, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(Form_Login);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(120, 25));
        pushButton->setMaximumSize(QSize(120, 25));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(Form_Login);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(120, 25));
        pushButton_2->setMaximumSize(QSize(120, 25));

        horizontalLayout->addWidget(pushButton_2);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 3);

        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_4);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(500, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(500, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 0, 1, 1);


        retranslateUi(Form_Login);
        QObject::connect(pushButton, SIGNAL(clicked()), Form_Login, SLOT(Enter()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Form_Login, SLOT(Cancel()));

        QMetaObject::connectSlotsByName(Form_Login);
    } // setupUi

    void retranslateUi(QWidget *Form_Login)
    {
        Form_Login->setWindowTitle(QApplication::translate("Form_Login", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Form_Login", "<html><head/><body><p><span style=\" font-size:18pt;\">User ID :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Form_Login", "<html><head/><body><p><span style=\" font-size:18pt;\">Password :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Form_Login", "Enter", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Form_Login", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form_Login: public Ui_Form_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
