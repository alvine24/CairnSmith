//			CSLogin - class Login to Server
//			COPYRIGHT : SHEER INDUSTRIES LTD
//			
//			Author	:	SUJAN DASMAHAPATRA
//			DATE	:	13/05/2013 
//
//
//
//

#ifndef CSLOGIN_H
#define CSLOGIN_H

#include <QDialog>
#include "ui_login.h"
#include "sheer_cloud.h"
#include "cairnsmith.h"
#include "csdocumentview.h"
#include <QtGui\qkeyeventtransition.h>
class CairnSmith;
class CSLogin : public QDialog
{
	Q_OBJECT

public:
	CSLogin(QWidget *parent,Qt::WindowFlags f = 0);
	~CSLogin();
	void loadRecentProjects(QString dir);
	void loadMyProjects(QString dir);
	Ui::Form_Login ui;
private slots:
	void Enter();
	void Cancel();
private:
	CSDocumentView *m_DocView;
	QString m_loginString;
	QString m_passwdString;
	SheerCloudLink *m_link;
	CairnSmith *mainwin;
};

#endif // CSLOGIN_H
