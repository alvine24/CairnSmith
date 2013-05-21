#include "csviewtabwidget.h"
#include "cairnsmith.h"

CSViewTabWidget::CSViewTabWidget(QWidget *parent)
	: QTabWidget(parent)
{
	setTabPosition(QTabWidget::West);

	addTab(new QWidget,"BluePrint");
	addTab(new QWidget,"Design");
	addTab(new QWidget,"Rendering");

	int eachTabHeight = parent->height()/3;
	setStyleSheet( 
		
		"QTabBar::tab { width: 25px; height: " + QString::number(eachTabHeight) + "px; }"
		"QTabBar::tab { font: 14pt; } ");
	
}

CSViewTabWidget::~CSViewTabWidget()
{

}
