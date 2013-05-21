#include "csmodellingpage.h"
#include "csrenamedlg.h"
#include "cspromptdlg.h"
CSModellingPage::CSModellingPage(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//button = new QPushButton(QIcon("Resources/addTab.png"),"",this);
	//layout()->addWidget(button);
	//button->setGeometry(200,0,25,25);
	ui.tabWidget->setTabPosition(QTabWidget::North);
	ui.tabWidget->setStyleSheet("QTabBar::tab { width: 100px; height: 25px; }"
								"QTabBar::tab { font: 10pt; } ");
	//ui.tabWidget->setCornerWidget(button,Qt::TopLeftCorner);
	//connect(button,SIGNAL(clicked()),this,SLOT(addTabCallBack()));
	//button->show();

	action_Rename = new QAction("Rename",&menu);
	action_Duplicate = new QAction("Duplicate",&menu);
	action_Delete = new QAction("Delete",&menu);
	connect(action_Rename,SIGNAL(triggered()),this,SLOT(slot_Rename()));
	connect(action_Duplicate,SIGNAL(triggered()),this,SLOT(slot_Duplicate()));
	connect(action_Delete,SIGNAL(triggered()),this,SLOT(slot_Delete()));
	menu.addAction(action_Rename);
	menu.addAction(action_Duplicate);
	menu.addAction(action_Delete);

	//m_Buttoncount=100;
}

CSModellingPage::~CSModellingPage()
{
}

void CSModellingPage::addTabCallBack()
{
	//if(button->pos().x() < width())
	//button->setGeometry(200+m_Buttoncount,0,25,25);
	//Add Tab
	QTabWidget *parentTab = qobject_cast<QTabWidget*>(parent()->parent()->parent());
	int index = parentTab->currentIndex();
	if(index==0)
		ui.tabWidget->addTab(new QWidget(),"BluePrint-" + QString::number(ui.tabWidget->count()+1));
	else if(index==1)
		ui.tabWidget->addTab(new QWidget(),"Design-" + QString::number(ui.tabWidget->count()+1));
	else
		ui.tabWidget->addTab(new QWidget(),"Rendering-" + QString::number(ui.tabWidget->count()+1));
	//m_Buttoncount+=100;
}

void CSModellingPage::closeTab(int index)
{
	//Re-arrange the whole list
}

void CSModellingPage::contextMenuEvent(QContextMenuEvent *e)
{
	menu.exec(QCursor::pos());
}

void CSModellingPage::slot_Rename()
{
	CSRenameDlg dlg(this);
	dlg.exec();
}

void CSModellingPage::slot_Duplicate()
{
	ui.tabWidget->insertTab(ui.tabWidget->currentIndex(),new QWidget(),ui.tabWidget->tabText(ui.tabWidget->currentIndex()));
}

void CSModellingPage::slot_Delete()
{
	CSPromptDLG dlg(this);
	dlg.exec();
}