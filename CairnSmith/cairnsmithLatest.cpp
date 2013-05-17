#include "cairnsmith.h"
#include <QtGui\qdirmodel.h>
#include <QtGui\qdesktopservices.h>
#include <QtCore\qurl.h>
CairnSmith::CairnSmith(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	menuBar()->hide();
	ui.toolBar->setVisible
	MODEL_DIR = "Models"; //Model directory
}

CairnSmith::~CairnSmith()
{

}

void CairnSmith::settingTableWidgetColumnWidth()
{
	//ui_central.tableWidget_MYPROJECTS->setColumnWidth(0,ui_central.tableWidget_MYPROJECTS->width() * 2 );
	//ui_central.tableWidget_MYPROJECTS->setColumnWidth(1,ui_central.tableWidget_MYPROJECTS->width() / 2 );
	//ui_central.tableWidget_MYPROJECTS->setColumnWidth(2,ui_central.tableWidget_MYPROJECTS->width() * 0.75 );

	//ui_central.tableWidget_RECENTPROJECTS->setColumnWidth(0,ui_central.tableWidget_RECENTPROJECTS->width() * 2 );
	//ui_central.tableWidget_RECENTPROJECTS->setColumnWidth(1,ui_central.tableWidget_RECENTPROJECTS->width() / 2 );
	//ui_central.tableWidget_RECENTPROJECTS->setColumnWidth(2,ui_central.tableWidget_RECENTPROJECTS->width() * 0.75 );
}

void CairnSmith::connectingSignalsAndSlotsInit()
{
	//connect(ui_central.tableWidget_MYPROJECTS, SIGNAL(cellDoubleClicked(int, int)), this, SLOT(OpenProjectFile()));
	//connect(ui_central.tableWidget_RECENTPROJECTS, SIGNAL(cellDoubleClicked(int, int)), this, SLOT(OpenProjectFile()));
	//connect(ui_central.pushButton_OPEN, SIGNAL(clicked()), this, SLOT(OpenProjectFile()));
}


void CairnSmith::OpenProjectFile()
{
	//QTableWidgetItem *m_oItem;
	//if(ui_central.tableWidget_MYPROJECTS->currentRow()>=0)
	//m_oItem = ui_central.tableWidget_MYPROJECTS->item(ui_central.tableWidget_MYPROJECTS->currentRow(), 0);
	//else if(ui_central.tableWidget_RECENTPROJECTS->currentRow()>=0)
	//m_oItem = ui_central.tableWidget_RECENTPROJECTS->item(ui_central.tableWidget_RECENTPROJECTS->currentRow(), 0);
	//else
	//return;
 //   QDir m_oCurrentDir = QDir(MODEL_DIR);

 //   QDesktopServices::openUrl(QUrl::fromLocalFile(m_oCurrentDir.absoluteFilePath(m_oItem->text())));
}

void CairnSmith::NewProjectFile()
{
}

void CairnSmith::DeleteProjectFile()
{
	//QTableWidgetItem *m_oItem = ui_central.tableWidget_MYPROJECTS->item(ui_central.tableWidget_MYPROJECTS->currentRow(), 0);
	//QDir m_oCurrentDir = QDir(MODEL_DIR);
	//QFile fileToBeRemoved = m_oCurrentDir.filePath(m_oItem->text());

	////Update RecentProjects Table
	//for(int row=0; row < ui_central.tableWidget_RECENTPROJECTS->rowCount(); row++)
	//{
	//	if(ui_central.tableWidget_RECENTPROJECTS->item(row,0)->text().compare(m_oItem->text(), Qt::CaseInsensitive)==0)
	//		ui_central.tableWidget_RECENTPROJECTS->removeRow(row);
	//	//Delete from DocumentView-RecentProjects List
	//	if(m_DocView->getRecentProjects().at(row).compare(m_oItem->text(), Qt::CaseInsensitive)==0)
	//		m_DocView->getRecentProjects().removeAt(row);
	//}
	////Delete from DocumentView-MyProjects List
	//m_DocView->getMyProjects().removeAt(ui_central.tableWidget_MYPROJECTS->currentRow());
	////Delete Row from TableWidget
	//ui_central.tableWidget_MYPROJECTS->removeRow(ui_central.tableWidget_MYPROJECTS->currentRow());
	//
	////Delete Local Dir
	//fileToBeRemoved.remove();

	//Delete at the server.

}

void CairnSmith::RemoveLast()
{
}

void CairnSmith::uploadToServer()
{
}

void CairnSmith::downloadFromServer()
{
}