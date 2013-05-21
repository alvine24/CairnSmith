#ifndef CSCENTRALWIDGET_BLUEPRINT_DESIGN_RENDERING_H
#define CSCENTRALWIDGET_BLUEPRINT_DESIGN_RENDERING_H
#include "csviewtabwidget.h"
#include <QtCore>
#include <QtGui>
#include "csmodellingpage.h"

class CSCentralWidget_BluePrint_Design_Rendering : public QWidget
{
	Q_OBJECT

public:
	CSCentralWidget_BluePrint_Design_Rendering(QWidget *parent);
	~CSCentralWidget_BluePrint_Design_Rendering();
	void Init();
	CSViewTabWidget *m_ViewTabWidget;
private:
	QDesktopWidget *desktop;
	QWidget *form_Holder;
	
	CSModellingPage *modelling_BluePrint, *modelling_Designs, *modelling_Rendering;
private slots:
	void loadModellingPage(int ind);
};

#endif // CSCENTRALWIDGET_BLUEPRINT_DESIGN_RENDERING_H
