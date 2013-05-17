#include "csblueprint.h"
#include <QtGui\qlayout.h>
#include <qicon.h>


CSBluePrint::CSBluePrint(QWidget *parent)
	: QTabWidget(parent)
{
	setTabsClosable ( true );
	connect(this,SIGNAL(tabCloseRequested ( int )),this,SLOT(closeTab(int)));
	//Default BluePrint Tab
	CSBluePrintWidget *tabWid = new CSBluePrintWidget(this);
	m_BluePrintWidgetList.append(tabWid);
	addTab(m_BluePrintWidgetList.last(), "BluePrint-1");
}

CSBluePrint::~CSBluePrint()
{
}

void CSBluePrint::addTabCallBack()
{
	//Add BluePrints
	CSBluePrintWidget *tabWid = new CSBluePrintWidget(this);
	m_BluePrintWidgetList.append(tabWid);
	addTab(m_BluePrintWidgetList.last(), "BluePrint-" + QString::number(count()+1));
}

void CSBluePrint::closeTab(int index)
{
	//Re-arrange the whole list
}