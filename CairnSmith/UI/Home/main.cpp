#include "cairnsmith.h"
#include <QtGui/QApplication>
#include "cslogin.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CairnSmith *mainwin = new CairnSmith(NULL, Qt::Window);
	mainwin->showMaximized();
	CSLogin *login = new CSLogin(mainwin, Qt::SubWindow);
	mainwin->setCentralWidget(login);
	return a.exec();
}
