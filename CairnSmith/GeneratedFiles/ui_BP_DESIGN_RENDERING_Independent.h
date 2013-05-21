/********************************************************************************
** Form generated from reading UI file 'BP_DESIGN_RENDERING_Independent.ui'
**
** Created: Mon May 20 14:54:25 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BP_DESIGN_RENDERING_INDEPENDENT_H
#define UI_BP_DESIGN_RENDERING_INDEPENDENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BP_DESIGN_RENDERING_INDEPENDENT
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QWidget *BP_DESIGN_RENDERING_INDEPENDENT)
    {
        if (BP_DESIGN_RENDERING_INDEPENDENT->objectName().isEmpty())
            BP_DESIGN_RENDERING_INDEPENDENT->setObjectName(QString::fromUtf8("BP_DESIGN_RENDERING_INDEPENDENT"));
        BP_DESIGN_RENDERING_INDEPENDENT->resize(859, 630);
        gridLayout = new QGridLayout(BP_DESIGN_RENDERING_INDEPENDENT);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(BP_DESIGN_RENDERING_INDEPENDENT);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(BP_DESIGN_RENDERING_INDEPENDENT);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BP_DESIGN_RENDERING_INDEPENDENT);
    } // setupUi

    void retranslateUi(QWidget *BP_DESIGN_RENDERING_INDEPENDENT)
    {
        BP_DESIGN_RENDERING_INDEPENDENT->setWindowTitle(QApplication::translate("BP_DESIGN_RENDERING_INDEPENDENT", "Independent Page", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("BP_DESIGN_RENDERING_INDEPENDENT", "BluePrint-1", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("BP_DESIGN_RENDERING_INDEPENDENT", "BluePrint-2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BP_DESIGN_RENDERING_INDEPENDENT: public Ui_BP_DESIGN_RENDERING_INDEPENDENT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BP_DESIGN_RENDERING_INDEPENDENT_H
