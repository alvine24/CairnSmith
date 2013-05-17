#include "cstabwidget.h"

CSTabWidget::CSTabWidget(QWidget *parent)
	: QTabWidget(parent)
{
	ui.setupUi(this);
	connect(ui.tableWidget_MYPROJECTS,SIGNAL(cellClicked ( int, int )),this,SLOT(updateTableMYPROJECTS(int)));
	connect(ui.tableWidget_RECENTPROJECTS,SIGNAL(cellClicked ( int, int )),this,SLOT(updateTableRECENTPROJECTS(int)));

	//ui.tableWidget_MYPROJECTS->horizontalHeader()->setResizeMode(QHeaderView::ResizeToContents);
	ui.tableWidget_MYPROJECTS->setColumnWidth(0, 500);
	ui.tableWidget_MYPROJECTS->setColumnWidth(1, 250);
	ui.tableWidget_MYPROJECTS->setColumnWidth(2, 250);
	ui.tableWidget_RECENTPROJECTS->horizontalHeader()->setResizeMode(QHeaderView::ResizeToContents);
}

CSTabWidget::~CSTabWidget()
{

}

void CSTabWidget::updateTableMYPROJECTS(int index)
{
	ui.tableWidget_RECENTPROJECTS->setCurrentItem(NULL);
}

void CSTabWidget::updateTableRECENTPROJECTS(int index)
{
	ui.tableWidget_MYPROJECTS->setCurrentItem(NULL);
}