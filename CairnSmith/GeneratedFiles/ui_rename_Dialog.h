/********************************************************************************
** Form generated from reading UI file 'rename_Dialog.ui'
**
** Created: Mon May 20 14:54:27 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAME_DIALOG_H
#define UI_RENAME_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_RENAMEDLG
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Form_RENAMEDLG)
    {
        if (Form_RENAMEDLG->objectName().isEmpty())
            Form_RENAMEDLG->setObjectName(QString::fromUtf8("Form_RENAMEDLG"));
        Form_RENAMEDLG->resize(331, 105);
        label = new QLabel(Form_RENAMEDLG);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 20, 51, 16));
        lineEdit = new QLineEdit(Form_RENAMEDLG);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(9, 47, 291, 20));
        pushButton = new QPushButton(Form_RENAMEDLG);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(115, 73, 75, 23));
        pushButton_2 = new QPushButton(Form_RENAMEDLG);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(222, 73, 75, 23));

        retranslateUi(Form_RENAMEDLG);

        QMetaObject::connectSlotsByName(Form_RENAMEDLG);
    } // setupUi

    void retranslateUi(QWidget *Form_RENAMEDLG)
    {
        Form_RENAMEDLG->setWindowTitle(QApplication::translate("Form_RENAMEDLG", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Form_RENAMEDLG", "New Name", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Form_RENAMEDLG", "Ok", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Form_RENAMEDLG", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form_RENAMEDLG: public Ui_Form_RENAMEDLG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENAME_DIALOG_H
