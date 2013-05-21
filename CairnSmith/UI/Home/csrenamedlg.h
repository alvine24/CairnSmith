#ifndef CSRENAMEDLG_H
#define CSRENAMEDLG_H

#include <QDialog>
#include "ui_rename_Dialog.h"
class CSRenameDlg : public QDialog
{
	Q_OBJECT

public:
	CSRenameDlg(QWidget *parent);
	~CSRenameDlg();
	Ui::Form_RENAMEDLG ui;
private slots:
	void ok();
	void cancel();
};

#endif // CSRENAMEDLG_H
