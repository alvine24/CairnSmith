/********************************************************************************
** Form generated from reading UI file 'cairnsmith.ui'
**
** Created: Mon May 20 14:54:27 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAIRNSMITH_H
#define UI_CAIRNSMITH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CairnSmithClass
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionPan;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionRotate;
    QAction *actionFit;
    QAction *actionAbout;
    QAction *actionManual;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CairnSmithClass)
    {
        if (CairnSmithClass->objectName().isEmpty())
            CairnSmithClass->setObjectName(QString::fromUtf8("CairnSmithClass"));
        CairnSmithClass->resize(750, 622);
        CairnSmithClass->setMinimumSize(QSize(700, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8("Resources/CS.png"), QSize(), QIcon::Normal, QIcon::Off);
        CairnSmithClass->setWindowIcon(icon);
        actionNew = new QAction(CairnSmithClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("Resources/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(CairnSmithClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("Resources/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionExit = new QAction(CairnSmithClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionCut = new QAction(CairnSmithClass);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("Resources/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon3);
        actionCopy = new QAction(CairnSmithClass);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("Resources/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionPaste = new QAction(CairnSmithClass);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("Resources/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon5);
        actionPan = new QAction(CairnSmithClass);
        actionPan->setObjectName(QString::fromUtf8("actionPan"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("Resources/pan.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPan->setIcon(icon6);
        actionZoom_In = new QAction(CairnSmithClass);
        actionZoom_In->setObjectName(QString::fromUtf8("actionZoom_In"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("Resources/zoomIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_In->setIcon(icon7);
        actionZoom_Out = new QAction(CairnSmithClass);
        actionZoom_Out->setObjectName(QString::fromUtf8("actionZoom_Out"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("Resources/zoomOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_Out->setIcon(icon8);
        actionRotate = new QAction(CairnSmithClass);
        actionRotate->setObjectName(QString::fromUtf8("actionRotate"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("Resources/rotate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotate->setIcon(icon9);
        actionFit = new QAction(CairnSmithClass);
        actionFit->setObjectName(QString::fromUtf8("actionFit"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("Resources/fit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFit->setIcon(icon10);
        actionAbout = new QAction(CairnSmithClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("Resources/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon11);
        actionManual = new QAction(CairnSmithClass);
        actionManual->setObjectName(QString::fromUtf8("actionManual"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("Resources/manual.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionManual->setIcon(icon12);
        centralWidget = new QWidget(CairnSmithClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, -1, 0);
        CairnSmithClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CairnSmithClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 750, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        CairnSmithClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(CairnSmithClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CairnSmithClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuView->addAction(actionPan);
        menuView->addAction(actionZoom_In);
        menuView->addAction(actionZoom_Out);
        menuView->addAction(actionRotate);
        menuView->addAction(actionFit);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionManual);
        menuHelp->addSeparator();

        retranslateUi(CairnSmithClass);
        QObject::connect(actionExit, SIGNAL(triggered()), CairnSmithClass, SLOT(close()));

        QMetaObject::connectSlotsByName(CairnSmithClass);
    } // setupUi

    void retranslateUi(QMainWindow *CairnSmithClass)
    {
        CairnSmithClass->setWindowTitle(QApplication::translate("CairnSmithClass", "CairnSmith", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("CairnSmithClass", "New", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("CairnSmithClass", "Open", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("CairnSmithClass", "Exit", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("CairnSmithClass", "Cut", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("CairnSmithClass", "Copy", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("CairnSmithClass", "Paste", 0, QApplication::UnicodeUTF8));
        actionPan->setText(QApplication::translate("CairnSmithClass", "Pan", 0, QApplication::UnicodeUTF8));
        actionZoom_In->setText(QApplication::translate("CairnSmithClass", "Zoom In", 0, QApplication::UnicodeUTF8));
        actionZoom_Out->setText(QApplication::translate("CairnSmithClass", "Zoom Out", 0, QApplication::UnicodeUTF8));
        actionRotate->setText(QApplication::translate("CairnSmithClass", "Rotate", 0, QApplication::UnicodeUTF8));
        actionFit->setText(QApplication::translate("CairnSmithClass", "Fit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("CairnSmithClass", "About", 0, QApplication::UnicodeUTF8));
        actionManual->setText(QApplication::translate("CairnSmithClass", "Manual", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("CairnSmithClass", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("CairnSmithClass", "Edit", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("CairnSmithClass", "View", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("CairnSmithClass", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CairnSmithClass: public Ui_CairnSmithClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAIRNSMITH_H
