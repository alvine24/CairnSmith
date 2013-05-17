#ifndef CSDOCUMENTVIEW_H
#define CSDOCUMENTVIEW_H

#include <QObject>
#include <QtCore\qstring.h>
#include <QtCore\qstringlist.h>
#include "sheer_cloud.h"
class CSDocumentView : public QObject
{
	Q_OBJECT

public:
	CSDocumentView(QObject *parent);
	~CSDocumentView();
	void loadRecentProjects(QString project) { m_RecentProjects.append(project); }
	void loadMyProjects(QString project) { m_MyProjects.append(project); }
	QStringList getRecentProjects() { return m_RecentProjects; }
	QStringList getMyProjects() { return m_MyProjects; }
	void setLink(SheerCloudLink* link){ m_link=link; }
	SheerCloudLink* getLink() { return m_link; }
	virtual void save(QString fileName);
	virtual void saveAs(QString fileNameIn, QString fileNameOut);
private:
	QStringList m_RecentProjects, m_MyProjects;
	SheerCloudLink *m_link;
	
};

#endif // CSDOCUMENTVIEW_H
