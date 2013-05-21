#ifndef CSMODELLINGPAGE_H
#define CSMODELLINGPAGE_H

#include <QtGui>
#include <QtCore>
#include "ui_modelling.h"
class CSModellingPage : public QWidget
{
	Q_OBJECT

public:
	CSModellingPage(QWidget *parent=0);
	~CSModellingPage();
	Ui::Form_INDEPENDENT ui;
	virtual void contextMenuEvent(QContextMenuEvent *e);
private:
	QMenu menu;
	QAction *action_Rename, *action_Duplicate, *action_Delete;
	//QPushButton *button;
	//int m_Buttoncount;
public slots:
	void addTabCallBack();
	void closeTab(int index);
	void slot_Rename();
	void slot_Duplicate();
	void slot_Delete();
};

#endif // CSBLUEPRINT_H
