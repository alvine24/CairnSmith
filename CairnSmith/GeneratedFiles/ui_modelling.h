/********************************************************************************
** Form generated from reading UI file 'modelling.ui'
**
** Created: Mon May 20 14:54:27 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELLING_H
#define UI_MODELLING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_INDEPENDENT
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *Form_INDEPENDENT)
    {
        if (Form_INDEPENDENT->objectName().isEmpty())
            Form_INDEPENDENT->setObjectName(QString::fromUtf8("Form_INDEPENDENT"));
        Form_INDEPENDENT->resize(744, 631);
        gridLayout = new QGridLayout(Form_INDEPENDENT);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(Form_INDEPENDENT);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(20, 0));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/CairnSmith/Resources/addTab.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(Form_INDEPENDENT);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Form_INDEPENDENT);
    } // setupUi

    void retranslateUi(QWidget *Form_INDEPENDENT)
    {
        Form_INDEPENDENT->setWindowTitle(QApplication::translate("Form_INDEPENDENT", "Modelling Page", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Form_INDEPENDENT", "BluePrint-1", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString());
    } // retranslateUi

};

namespace Ui {
    class Form_INDEPENDENT: public Ui_Form_INDEPENDENT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELLING_H
