#include "cairnsmith.h"
#include <QtGui\qdirmodel.h>
#include <QtGui\qdesktopservices.h>
#include <QtCore\qurl.h>
#include <QtCore\qdebug.h>
CairnSmith::CairnSmith(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
	, m_Central_BluePrint_Design_Rendering(NULL)
	, m_DocView(NULL)
	, m_TabCentral(NULL)
{
	ui.setupUi(this);
	menuBar()->hide();
	ui.toolBar->setVisible(false);
	MODEL_DIR = "Models"; //Model directory
}

CairnSmith::~CairnSmith()
{

}

void CairnSmith::connectingSignalsAndSlotsInit()
{
	connect(m_TabCentral->ui.tableWidget_MYPROJECTS, SIGNAL(cellDoubleClicked(int, int)), this, SLOT(OpenProjectFile()));
	connect(m_TabCentral->ui.tableWidget_RECENTPROJECTS, SIGNAL(cellDoubleClicked(int, int)), this, SLOT(OpenProjectFile()));
	connect(m_TabCentral->ui.pushButton_OPEN, SIGNAL(clicked()), this, SLOT(OpenProjectFile()));
	connect(m_TabCentral->ui.pushButton_DELETE, SIGNAL(clicked()), this, SLOT(DeleteProjectFile()));
}


void CairnSmith::OpenProjectFile()
{
	//if(m_DocView->getMyProjects().isEmpty() && m_DocView->getRecentProjects().isEmpty())
	//	return;
	//QTableWidgetItem *m_oItem;
	//if(m_TabCentral->ui.tableWidget_MYPROJECTS->currentItem()) 
	//{
	//	if(m_TabCentral->ui.tableWidget_MYPROJECTS->currentItem()->isSelected())
	//		m_oItem = m_TabCentral->ui.tableWidget_MYPROJECTS->item(m_TabCentral->ui.tableWidget_MYPROJECTS->currentRow(), 0);
	//}
	//else if(m_TabCentral->ui.tableWidget_RECENTPROJECTS->currentItem())
	//{
	//	if(m_TabCentral->ui.tableWidget_RECENTPROJECTS->currentItem()->isSelected())
	//		m_oItem = m_TabCentral->ui.tableWidget_RECENTPROJECTS->item(m_TabCentral->ui.tableWidget_RECENTPROJECTS->currentRow(), 0);
	//}
	//else
	//return;
 //   QDir m_oCurrentDir = QDir(MODEL_DIR);

 //   QDesktopServices::openUrl(QUrl::fromLocalFile(m_oCurrentDir.absoluteFilePath(m_oItem->text())));

	if(!m_Central_BluePrint_Design_Rendering)
	m_Central_BluePrint_Design_Rendering = new CSCentralWidget_BluePrint_Design_Rendering(this);
	else
	return;
	setCentralWidget(m_Central_BluePrint_Design_Rendering);


	m_TabCentral->ui.tableWidget_MYPROJECTS->setCurrentItem(NULL);
	m_TabCentral->ui.tableWidget_RECENTPROJECTS->setCurrentItem(NULL);
}

void CairnSmith::NewProjectFile()
{
}

void CairnSmith::DeleteProjectFile()
{
	if(!m_TabCentral->ui.tableWidget_MYPROJECTS->currentItem())
	return;
	QTableWidgetItem *m_oItem = m_TabCentral->ui.tableWidget_MYPROJECTS->item(m_TabCentral->ui.tableWidget_MYPROJECTS->currentRow(), 0);
	QDir m_oCurrentDir = QDir(MODEL_DIR);
	QFile fileToBeRemoved = m_oCurrentDir.filePath(m_oItem->text());

	//Update RecentProjects Table
	for(int row=0; row < m_TabCentral->ui.tableWidget_RECENTPROJECTS->rowCount(); row++)
	{
		if(m_TabCentral->ui.tableWidget_RECENTPROJECTS->item(row,0)->text().compare(m_oItem->text(), Qt::CaseInsensitive)==0)
			m_TabCentral->ui.tableWidget_RECENTPROJECTS->removeRow(row);
		//Delete from DocumentView-RecentProjects List
		if(m_DocView->getRecentProjects().at(row).compare(m_oItem->text(), Qt::CaseInsensitive)==0)
			m_DocView->getRecentProjects().removeAt(row);
	}
	//Delete from DocumentView-MyProjects List
	m_DocView->getMyProjects().removeAt(m_TabCentral->ui.tableWidget_MYPROJECTS->currentRow());
	//Delete Row from TableWidget
	m_TabCentral->ui.tableWidget_MYPROJECTS->removeRow(m_TabCentral->ui.tableWidget_MYPROJECTS->currentRow());
	
	//Delete Local Dir
	fileToBeRemoved.remove();

	//Delete at the server.

	m_TabCentral->ui.tableWidget_MYPROJECTS->setCurrentItem(NULL);
	m_TabCentral->ui.tableWidget_RECENTPROJECTS->setCurrentItem(NULL);
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