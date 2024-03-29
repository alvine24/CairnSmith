#ifndef __cloud_h__
#define __cloud_h__

#include <QString>
#include <QByteArray>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QFile>
#include <QtCore\qobject.h>

class SheerCloudLink : public QNetworkAccessManager {
  Q_OBJECT;
 public:
  SheerCloudLink(QString location, QString login, QString password);
  virtual ~SheerCloudLink();
  
  void Authorize();
  bool Authorized();

  void Upload(QString, const QByteArray &);
  void Download(QString, QByteArray &);

 public:
  QString m_location, m_login, m_password;
  QNetworkReply *reply;

  bool m_is_authorized;

  QByteArray m_out; // Keep track of output

  public slots:
  void login_completed( QNetworkReply *);
  void upload_completed();
  void download_completed();
  void uploadProgress(qint64 bytesSent, qint64 bytesTotal);
  void downloadProgress(qint64 bytesReceived, qint64 bytesTotal);
  void action();

  signals:
  void done();
};

#endif
