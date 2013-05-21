/********************************************************************************
** Form generated from reading UI file 'projectsTab.ui'
**
** Created: Mon May 20 14:54:27 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTSTAB_H
#define UI_PROJECTSTAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_TabWidget
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tabPROJECTS;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget_RECENTPROJECTS;
    QPushButton *pushButton_RECOVERLAST;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableWidget *tableWidget_MYPROJECTS;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_DELETE;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_OPEN;
    QPushButton *pushButton_NEW;
    QWidget *tab_USERNAME;

    void setupUi(QWidget *Form_TabWidget)
    {
        if (Form_TabWidget->objectName().isEmpty())
            Form_TabWidget->setObjectName(QString::fromUtf8("Form_TabWidget"));
        Form_TabWidget->resize(844, 631);
        gridLayout = new QGridLayout(Form_TabWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(Form_TabWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(600, 400));
        tabWidget->setMaximumSize(QSize(2600, 2000));
        QFont font;
        font.setPointSize(16);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabPROJECTS = new QWidget();
        tabPROJECTS->setObjectName(QString::fromUtf8("tabPROJECTS"));
        gridLayout_2 = new QGridLayout(tabPROJECTS);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(tabPROJECTS);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(76, 16));

        verticalLayout->addWidget(label);

        tableWidget_RECENTPROJECTS = new QTableWidget(tabPROJECTS);
        if (tableWidget_RECENTPROJECTS->columnCount() < 3)
            tableWidget_RECENTPROJECTS->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(QColor(0, 170, 0));
        tableWidget_RECENTPROJECTS->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setBackground(QColor(0, 0, 255));
        tableWidget_RECENTPROJECTS->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_RECENTPROJECTS->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_RECENTPROJECTS->setObjectName(QString::fromUtf8("tableWidget_RECENTPROJECTS"));
        tableWidget_RECENTPROJECTS->setMinimumSize(QSize(50, 100));
        tableWidget_RECENTPROJECTS->setMaximumSize(QSize(1600, 1000));
        QFont font1;
        font1.setPointSize(10);
        tableWidget_RECENTPROJECTS->setFont(font1);
        tableWidget_RECENTPROJECTS->setStyleSheet(QString::fromUtf8(""));
        tableWidget_RECENTPROJECTS->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_RECENTPROJECTS->horizontalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tableWidget_RECENTPROJECTS);

        pushButton_RECOVERLAST = new QPushButton(tabPROJECTS);
        pushButton_RECOVERLAST->setObjectName(QString::fromUtf8("pushButton_RECOVERLAST"));
        pushButton_RECOVERLAST->setMinimumSize(QSize(101, 23));
        pushButton_RECOVERLAST->setMaximumSize(QSize(101, 20));
        pushButton_RECOVERLAST->setFont(font1);

        verticalLayout->addWidget(pushButton_RECOVERLAST);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(tabPROJECTS);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(56, 16));
        QFont font2;
        font2.setPointSize(12);
        label_2->setFont(font2);

        verticalLayout_2->addWidget(label_2);

        tableWidget_MYPROJECTS = new QTableWidget(tabPROJECTS);
        if (tableWidget_MYPROJECTS->columnCount() < 3)
            tableWidget_MYPROJECTS->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setBackground(QColor(0, 170, 0));
        tableWidget_MYPROJECTS->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setBackground(QColor(0, 0, 255));
        tableWidget_MYPROJECTS->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_MYPROJECTS->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidget_MYPROJECTS->setObjectName(QString::fromUtf8("tableWidget_MYPROJECTS"));
        tableWidget_MYPROJECTS->setMinimumSize(QSize(100, 100));
        tableWidget_MYPROJECTS->setMaximumSize(QSize(1600, 1000));
        tableWidget_MYPROJECTS->setFont(font1);
        tableWidget_MYPROJECTS->setStyleSheet(QString::fromUtf8(""));
        tableWidget_MYPROJECTS->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget_MYPROJECTS->horizontalHeader()->setStretchLastSection(false);
        tableWidget_MYPROJECTS->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_MYPROJECTS->verticalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(tableWidget_MYPROJECTS);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(50);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_DELETE = new QPushButton(tabPROJECTS);
        pushButton_DELETE->setObjectName(QString::fromUtf8("pushButton_DELETE"));
        pushButton_DELETE->setMinimumSize(QSize(102, 23));
        pushButton_DELETE->setMaximumSize(QSize(80, 25));
        pushButton_DELETE->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_DELETE);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, -1, 0, -1);
        pushButton_OPEN = new QPushButton(tabPROJECTS);
        pushButton_OPEN->setObjectName(QString::fromUtf8("pushButton_OPEN"));
        pushButton_OPEN->setMinimumSize(QSize(102, 23));
        pushButton_OPEN->setMaximumSize(QSize(80, 25));
        pushButton_OPEN->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_OPEN);

        pushButton_NEW = new QPushButton(tabPROJECTS);
        pushButton_NEW->setObjectName(QString::fromUtf8("pushButton_NEW"));
        pushButton_NEW->setMinimumSize(QSize(102, 23));
        pushButton_NEW->setMaximumSize(QSize(80, 25));
        pushButton_NEW->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_NEW);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_4->setStretch(0, 3);
        horizontalLayout_4->setStretch(1, 5);

        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(tabPROJECTS, QString());
        tab_USERNAME = new QWidget();
        tab_USERNAME->setObjectName(QString::fromUtf8("tab_USERNAME"));
        tabWidget->addTab(tab_USERNAME, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);


        retranslateUi(Form_TabWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Form_TabWidget);
    } // setupUi

    void retranslateUi(QWidget *Form_TabWidget)
    {
        Form_TabWidget->setWindowTitle(QApplication::translate("Form_TabWidget", "ProjectsTab", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Form_TabWidget", "<html><head/><body><p><span style=\" font-size:12pt;\">Recent Projects</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_RECENTPROJECTS->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Form_TabWidget", "Project Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_RECENTPROJECTS->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Form_TabWidget", "Size (Bytes)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_RECENTPROJECTS->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Form_TabWidget", "Time Stamp", 0, QApplication::UnicodeUTF8));
        pushButton_RECOVERLAST->setText(QApplication::translate("Form_TabWidget", "Recover Last", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Form_TabWidget", "<html><head/><body><p>My Projects</p></body></html>", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_MYPROJECTS->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("Form_TabWidget", "Project Name", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_MYPROJECTS->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("Form_TabWidget", "Size(Bytes)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_MYPROJECTS->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("Form_TabWidget", "Time Stamp", 0, QApplication::UnicodeUTF8));
        pushButton_DELETE->setText(QApplication::translate("Form_TabWidget", "Delete", 0, QApplication::UnicodeUTF8));
        pushButton_OPEN->setText(QApplication::translate("Form_TabWidget", "Open", 0, QApplication::UnicodeUTF8));
        pushButton_NEW->setText(QApplication::translate("Form_TabWidget", "New", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabPROJECTS), QApplication::translate("Form_TabWidget", "Projects", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_USERNAME), QApplication::translate("Form_TabWidget", "User Name", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form_TabWidget: public Ui_Form_TabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTSTAB_H
