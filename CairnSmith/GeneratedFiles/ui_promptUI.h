/********************************************************************************
** Form generated from reading UI file 'promptUI.ui'
**
** Created: Mon May 20 14:54:27 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMPTUI_H
#define UI_PROMPTUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_PROMPTUI
{
public:
    QLabel *label;
    QPushButton *pushButton_YES;
    QPushButton *pushButton_NO;

    void setupUi(QWidget *Form_PROMPTUI)
    {
        if (Form_PROMPTUI->objectName().isEmpty())
            Form_PROMPTUI->setObjectName(QString::fromUtf8("Form_PROMPTUI"));
        Form_PROMPTUI->resize(219, 190);
        label = new QLabel(Form_PROMPTUI);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 171, 41));
        pushButton_YES = new QPushButton(Form_PROMPTUI);
        pushButton_YES->setObjectName(QString::fromUtf8("pushButton_YES"));
        pushButton_YES->setGeometry(QRect(10, 130, 75, 23));
        pushButton_NO = new QPushButton(Form_PROMPTUI);
        pushButton_NO->setObjectName(QString::fromUtf8("pushButton_NO"));
        pushButton_NO->setGeometry(QRect(110, 130, 75, 23));

        retranslateUi(Form_PROMPTUI);
        QObject::connect(pushButton_YES, SIGNAL(clicked()), Form_PROMPTUI, SLOT(yes()));
        QObject::connect(pushButton_NO, SIGNAL(clicked()), Form_PROMPTUI, SLOT(close()));

        QMetaObject::connectSlotsByName(Form_PROMPTUI);
    } // setupUi

    void retranslateUi(QWidget *Form_PROMPTUI)
    {
        Form_PROMPTUI->setWindowTitle(QApplication::translate("Form_PROMPTUI", "Prompt", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Form_PROMPTUI", "<html><head/><body><p><span style=\" font-size:14pt;\">Are you sure ?</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_YES->setText(QApplication::translate("Form_PROMPTUI", "Yes", 0, QApplication::UnicodeUTF8));
        pushButton_NO->setText(QApplication::translate("Form_PROMPTUI", "No", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form_PROMPTUI: public Ui_Form_PROMPTUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMPTUI_H
