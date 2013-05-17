#ifndef CSCENTRALWIDGET_BLUEPRINT_DESIGN_RENDERING_H
#define CSCENTRALWIDGET_BLUEPRINT_DESIGN_RENDERING_H

#include <QWidget>
#include "csorientationbutton.h"
#include "csblueprint.h"
class CSCentralWidget_BluePrint_Design_Rendering : public QWidget
{
	Q_OBJECT

public:
	CSCentralWidget_BluePrint_Design_Rendering(QWidget *parent);
	~CSCentralWidget_BluePrint_Design_Rendering();
	void setupLayout();
	
private:
	CSOrientationButton *m_BluePrint, *m_Design, *m_Rendering;
	CSBluePrint *bluePrint;
private slots:
		void loadBluePrint();
};

#endif // CSCENTRALWIDGET_BLUEPRINT_DESIGN_RENDERING_H
