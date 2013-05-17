#include "cscentralwidget_blueprint_design_rendering.h"
#include "cairnsmith.h"
CSCentralWidget_BluePrint_Design_Rendering::CSCentralWidget_BluePrint_Design_Rendering(QWidget *parent)
	: QWidget(parent)
	, bluePrint(NULL)
{
	setupLayout();
}

CSCentralWidget_BluePrint_Design_Rendering::~CSCentralWidget_BluePrint_Design_Rendering()
{

}

void CSCentralWidget_BluePrint_Design_Rendering::setupLayout()
{
	int height_view = qobject_cast<CairnSmith*>(parent())->height()-qobject_cast<CairnSmith*>(parent())->menuBar()->height()-qobject_cast<CairnSmith*>(parent())->ui.toolBar->height()
		-qobject_cast<CairnSmith*>(parent())->statusBar()->height();
	int height_avail = height_view - 30;
	int each_height = height_avail/3;
	m_BluePrint = new CSOrientationButton("BluePrint",this);
	m_BluePrint->setOrientation(Qt::Vertical);
	m_BluePrint->setMirrored(true);
	m_BluePrint->setGeometry(0,5,25,each_height);

	m_Design = new CSOrientationButton("Design",this);
	m_Design->setOrientation(Qt::Vertical);
	m_Design->setMirrored(true);
	m_Design->setGeometry(0,5+each_height+10,25,each_height);

	m_Rendering = new CSOrientationButton("Rendering",this);
	m_Rendering->setOrientation(Qt::Vertical);
	m_Rendering->setMirrored(true);
	m_Rendering->setGeometry(0,5+2*(each_height+10),25,each_height);

	connect(m_BluePrint,SIGNAL(clicked()),this,SLOT(loadBluePrint()));
}

void CSCentralWidget_BluePrint_Design_Rendering::loadBluePrint()
{
	if(!bluePrint)
	{
	bluePrint = new CSBluePrint(this);
	bluePrint->setGeometry(25,0,width()-25,height());
	bluePrint->show();
	}
	else
	{
		bluePrint->addTabCallBack();
	}
}