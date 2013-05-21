#include "cspromptdlg.h"
#include "csmodellingpage.h"
CSPromptDLG::CSPromptDLG(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

CSPromptDLG::~CSPromptDLG()
{

}

void CSPromptDLG::yes()
{
	CSModellingPage *modellin = qobject_cast<CSModellingPage*> (parent());
	if(modellin->ui.tabWidget->count()==1)
	{
		QMessageBox msg;
		msg.setText("Only one page is present, cannot be closed");
		msg.exec();
		close();
		return;
	}
	modellin->ui.tabWidget->removeTab(modellin->ui.tabWidget->currentIndex());
	close();
}