#ifndef CSPROMPTDLG_H
#define CSPROMPTDLG_H

#include <QDialog>
#include "ui_promptUI.h"
class CSPromptDLG : public QDialog
{
	Q_OBJECT

public:
	CSPromptDLG(QWidget *parent);
	~CSPromptDLG();
	Ui::Form_PROMPTUI ui;
private slots:
	void yes();
};

#endif // CSPROMPTDLG_H
