#ifndef CSTABWIDGET_H
#define CSTABWIDGET_H

#include <QTabWidget>
#include "ui_projectsTab.h"
class CSTabWidget : public QTabWidget
{
	Q_OBJECT

public:
	CSTabWidget(QWidget *parent);
	~CSTabWidget();
	Ui::Form_TabWidget ui;
	
private slots:
	void updateTableMYPROJECTS(int index);
	void updateTableRECENTPROJECTS(int index);	
};

#endif // CSTABWIDGET_H
