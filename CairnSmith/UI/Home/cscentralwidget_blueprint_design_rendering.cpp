#include "cscentralwidget_blueprint_design_rendering.h"
#include "cairnsmith.h"
CSCentralWidget_BluePrint_Design_Rendering::CSCentralWidget_BluePrint_Design_Rendering(QWidget *parent)
	: QWidget(parent)
	, modelling_BluePrint(NULL)
	, modelling_Designs(NULL)
	, modelling_Rendering(NULL)
{
	Init();
}

CSCentralWidget_BluePrint_Design_Rendering::~CSCentralWidget_BluePrint_Design_Rendering()
{

}

void CSCentralWidget_BluePrint_Design_Rendering::Init()
{
	desktop = new QDesktopWidget;
	CairnSmith *mainwin = qobject_cast<CairnSmith*> (parent());
	desktop->setGeometry(mainwin->centralWidget()->x(),mainwin->centralWidget()->y(),
	mainwin->centralWidget()->width(),mainwin->centralWidget()->height());
	resize(desktop->size());
	form_Holder = new QWidget(this);
	form_Holder->resize(size());
	m_ViewTabWidget = new CSViewTabWidget(form_Holder);
	m_ViewTabWidget->resize(form_Holder->size());
	QGridLayout *layout1 = new QGridLayout(form_Holder);
	layout1->setSpacing(0);
	layout1->setContentsMargins(0,0,0,0);
	layout1->addWidget(m_ViewTabWidget);
	form_Holder->setLayout(layout1);

	m_ViewTabWidget->setCurrentIndex(0);
	modelling_BluePrint = new CSModellingPage(m_ViewTabWidget->currentWidget());
	m_ViewTabWidget->setCurrentWidget(modelling_BluePrint);
	QGridLayout *layout2 = new QGridLayout(m_ViewTabWidget->currentWidget());
	layout2->addWidget(modelling_BluePrint);
	layout2->setSpacing(0);
	layout2->setContentsMargins(0,0,0,0);
	m_ViewTabWidget->currentWidget()->setLayout(layout2);
	connect(m_ViewTabWidget,SIGNAL(currentChanged(int)),this,SLOT(loadModellingPage(int)));

	QGridLayout *layout = new QGridLayout;
	layout->addWidget(form_Holder);
	layout->setSpacing(0);
	layout->setContentsMargins(0,0,0,0);
	setLayout(layout);
}

void CSCentralWidget_BluePrint_Design_Rendering::loadModellingPage(int ind)
{
	if(ind==1)
	{
		if(!modelling_Designs)
			modelling_Designs = new CSModellingPage(m_ViewTabWidget->currentWidget());
			m_ViewTabWidget->setCurrentWidget(modelling_Designs);
			QGridLayout *layout = new QGridLayout(m_ViewTabWidget->currentWidget());
			layout->addWidget(modelling_Designs);
			layout->setSpacing(0);
			layout->setContentsMargins(0,0,0,0);
			m_ViewTabWidget->currentWidget()->setLayout(layout);
			modelling_Designs->ui.tabWidget->setTabText(0, "Design-"+QString::number(1));
	}
	else if(ind==2)
	{
		if(!modelling_Rendering)
			modelling_Rendering = new CSModellingPage(m_ViewTabWidget->currentWidget());
			m_ViewTabWidget->setCurrentWidget(modelling_Rendering);
			QGridLayout *layout = new QGridLayout(m_ViewTabWidget->currentWidget());
			layout->addWidget(modelling_Rendering);
			layout->setSpacing(0);
			layout->setContentsMargins(0,0,0,0);
			m_ViewTabWidget->currentWidget()->setLayout(layout);
			modelling_Rendering->ui.tabWidget->setTabText(0, "Rendering-"+QString::number(1));
	}

}