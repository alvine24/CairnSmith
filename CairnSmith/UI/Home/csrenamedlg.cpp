#include "csrenamedlg.h"
#include "csmodellingpage.h"
CSRenameDlg::CSRenameDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(ok()));
	connect(ui.pushButton_2,SIGNAL(clicked()),this,SLOT(cancel()));
}

CSRenameDlg::~CSRenameDlg()
{

}

void CSRenameDlg::ok()
{
	CSModellingPage *modellin = qobject_cast<CSModellingPage*> (parent());
	modellin->ui.tabWidget->setTabText(modellin->ui.tabWidget->currentIndex(),ui.lineEdit->text());
}

void CSRenameDlg::cancel()
{
	ui.lineEdit->clear();
}