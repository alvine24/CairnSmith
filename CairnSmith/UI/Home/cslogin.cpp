#include <QtGui\qmessagebox.h>
#include "cslogin.h"
#include <QtCore\qdebug.h>
#include <QSplashScreen>
#include <QtGui\qdirmodel.h>
#include <QtCore\qdatetime.h>
#include "cstabwidget.h"
#include <QtGui\qkeyevent>
CSLogin::CSLogin(QWidget *parent, Qt::WindowFlags f)
	: QDialog(parent,f)
{
	ui.setupUi(this);
	ui.lineEdit_2->setEchoMode(QLineEdit::Password);
	connect(ui.pushButton,SIGNAL(triggerred()),this,SLOT(Enter()));
	connect(ui.pushButton_2,SIGNAL(triggerred()),this,SLOT(Cencel()));
	mainwin = qobject_cast<CairnSmith*>(parent);
	m_DocView = new CSDocumentView(mainwin);
	setEnabled(true);
	setFocus();
	connect(ui.lineEdit_2,SIGNAL(returnPressed()),this,SLOT(Enter()));
	connect(ui.lineEdit,SIGNAL(returnPressed()),this,SLOT(Enter()));
}

CSLogin::~CSLogin()
{
	delete m_link;
	m_link=NULL;
}

void CSLogin::Enter()
{
	m_loginString = ui.lineEdit->text();
	m_passwdString = ui.lineEdit_2->text();
	m_link=new SheerCloudLink("http://localhost:8080", m_loginString, m_passwdString);
	m_link->Authorize();
	if(m_link->m_is_authorized == true)
	{
		CSTabWidget *tab = new CSTabWidget(mainwin);
		mainwin->setTab(tab);
		mainwin->menuBar()->show();
		mainwin->setCentralWidget(mainwin->getCentral());
		mainwin->setDocView(m_DocView);
		m_DocView->setLink(m_link);
		loadMyProjects(mainwin->getModelDir());
		loadRecentProjects(mainwin->getModelDir());
		mainwin->getCentral()->ui.tabWidget->setTabText(1, "User: " + m_loginString);
		mainwin->connectingSignalsAndSlotsInit();
		close();
	}
	else
	{
		QMessageBox msg;
		msg.setText("Not able to Login, please verify username & password");
		msg.exec();
	}
}

void CSLogin::Cancel()
{
	ui.lineEdit->clear();
	ui.lineEdit_2->clear();
}

void CSLogin::loadRecentProjects(QString dir)
{
	QDir m_oFileDir2(dir);
	m_oFileDir2.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks | QDir::Modified);
	m_oFileDir2.setSorting(QDir::Time);
	QFileInfoList m_oList2 = m_oFileDir2.entryInfoList();
	
	for (int i = 0; i < m_oList2.size(); ++i) 
	{
		QFileInfo m_oFileInfo2 = m_oList2.at(i);
		QFile m_oFile2(m_oFileInfo2.fileName());
		QTableWidgetItem *m_oFileNameItem2 = new QTableWidgetItem(m_oFile2.fileName());
		m_DocView->loadRecentProjects(m_oFile2.fileName());
		QTableWidgetItem *m_oSizeItem2 = new QTableWidgetItem(QString::number(m_oFileInfo2.size()));
		QTableWidgetItem *m_oTimeItem2 = new QTableWidgetItem(m_oFileInfo2.lastModified().toString(Qt::TextDate));
		mainwin->getCentral()->ui.tableWidget_RECENTPROJECTS->insertRow(i);
		mainwin->getCentral()->ui.tableWidget_RECENTPROJECTS->setItem(i, 0, m_oFileNameItem2);
		mainwin->getCentral()->ui.tableWidget_RECENTPROJECTS->setItem(i, 1, m_oSizeItem2);
		mainwin->getCentral()->ui.tableWidget_RECENTPROJECTS->setItem(i, 2, m_oTimeItem2);
		if(i==4)
			break;
	}
}

void CSLogin::loadMyProjects(QString dir)
{
	QDir m_oFileDir(dir);
	m_oFileDir.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
	m_oFileDir.setSorting(QDir::Size | QDir::Reversed );
	QFileInfoList m_oList = m_oFileDir.entryInfoList();

	for (int i = 0; i < m_oList.size(); ++i) 
	{
		QFileInfo m_oFileInfo = m_oList.at(i);
		QFile m_oFile(m_oFileInfo.fileName());
		QTableWidgetItem *m_oFileNameItem = new QTableWidgetItem(m_oFile.fileName());
		m_DocView->loadMyProjects(m_oFile.fileName());
		QTableWidgetItem *m_oSizeItem = new QTableWidgetItem(QString::number(m_oFileInfo.size()));
		QTableWidgetItem *m_oTimeItem = new QTableWidgetItem(m_oFileInfo.lastModified().toString(Qt::TextDate));
		mainwin->getCentral()->ui.tableWidget_MYPROJECTS->insertRow(i);
		mainwin->getCentral()->ui.tableWidget_MYPROJECTS->setItem(i, 0, m_oFileNameItem);
		mainwin->getCentral()->ui.tableWidget_MYPROJECTS->setItem(i, 1, m_oSizeItem);
		mainwin->getCentral()->ui.tableWidget_MYPROJECTS->setItem(i, 2, m_oTimeItem);
	}
}
