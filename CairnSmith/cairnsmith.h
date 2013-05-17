//			CairnSmith - class MainFrame
//			COPYRIGHT : SHEER INDUSTRIES LTD
//			
//			Author	:	SUJAN DASMAHAPATRA
//			DATE	:	13/05/2013 
//
//
//
//
#ifndef CAIRNSMITH_H
#define CAIRNSMITH_H

#include <QtGui/QMainWindow>
#include "ui_cairnsmith.h"
#include "csdocumentview.h"
#include "ui_projectsTab.h"
#include "cstabwidget.h"
#include "cslogin.h"
#include "cscentralwidget_blueprint_design_rendering.h"
class CSLogin;
class CairnSmith : public QMainWindow
{
	Q_OBJECT

public:
	CairnSmith(QWidget *parent = 0, Qt::WFlags flags = 0);
	~CairnSmith();
	void connectingSignalsAndSlotsInit();
	QString getModelDir() { return MODEL_DIR; }
	void setDocView(CSDocumentView *docView){m_DocView = docView;}
	CSTabWidget *getCentral() { return m_TabCentral; }
	void setTab(CSTabWidget *tab) {m_TabCentral = tab;}
public:
	Ui::CairnSmithClass ui;
private slots:
	void OpenProjectFile();
	void NewProjectFile();
	void DeleteProjectFile();
	void RemoveLast();
	void uploadToServer();
	void downloadFromServer();
private: //Custom Memebers
	CSDocumentView *m_DocView;
	CSCentralWidget_BluePrint_Design_Rendering *m_Central_BluePrint_Design_Rendering;
	CSTabWidget *m_TabCentral;
private: //Qt Memebers
	QString MODEL_DIR;
};

#endif // CAIRNSMITH_H
