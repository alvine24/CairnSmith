#ifndef CSBLUEPRINT_H
#define CSBLUEPRINT_H

#include <QWidget>
#include <QtGui\qtabwidget.h>
#include <QtCore\qlist.h>
#include <qpushbutton.h>
#include "csblueprintwidget.h"
class CSBluePrint : public QTabWidget
{
	Q_OBJECT

public:
	CSBluePrint(QWidget *parent=0);
	~CSBluePrint();
private:
	QTabWidget* m_TabWidget;
	QList<CSBluePrintWidget*> m_BluePrintWidgetList;
public slots:
	void addTabCallBack();
	void closeTab(int index);
};

#endif // CSBLUEPRINT_H
