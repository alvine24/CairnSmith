#ifndef CSBLUEPRINTWIDGET_H
#define CSBLUEPRINTWIDGET_H

#include <QWidget>
#include <qmenu.h>
#include <QAction>
class CSBluePrintWidget : public QWidget
{
	Q_OBJECT

public:
	CSBluePrintWidget(QWidget *parent);
	~CSBluePrintWidget();
	virtual void contextMenuEvent(QContextMenuEvent *e);
private:
	QAction *m_Rename, *m_Duplicate, *m_Delete;
	QMenu m_MenuContext;
public slots:
	void rename_ActionTriggerred();
	void duplicate_ActionTriggerred();
	void delete_ActionTriggerred();
};

#endif // CSBLUEPRINTWIDGET_H
