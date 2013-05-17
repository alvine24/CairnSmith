#include <QContextMenuEvent>
#include "csblueprintwidget.h"

CSBluePrintWidget::CSBluePrintWidget(QWidget *parent)
	: QWidget(parent)
{
	m_Rename = new QAction("Rename",this);
	m_Duplicate = new QAction("Duplicate",this);
	m_Delete = new QAction("Delete",this);
	connect(m_Rename,SIGNAL(triggerred()),this,SLOT(rename_ActionTriggerred()));
	connect(m_Duplicate,SIGNAL(triggerred()),this,SLOT(duplicate_ActionTriggerred()));
	connect(m_Delete,SIGNAL(triggerred()),this,SLOT(delete_ActionTriggerred()));
	m_MenuContext.addAction(m_Rename);
	m_MenuContext.addAction(m_Duplicate);
	m_MenuContext.addAction(m_Delete);
}

CSBluePrintWidget::~CSBluePrintWidget()
{

}

void CSBluePrintWidget::contextMenuEvent(QContextMenuEvent *e)
{
	m_MenuContext.exec(e->globalPos());
}

void CSBluePrintWidget::rename_ActionTriggerred()
{

}

void CSBluePrintWidget::duplicate_ActionTriggerred()
{

}

void CSBluePrintWidget::delete_ActionTriggerred()
{

}
