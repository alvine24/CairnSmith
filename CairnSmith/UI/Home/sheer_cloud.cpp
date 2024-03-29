#include "sheer_cloud.h"
#include <QtCore\qeventloop.h>
#include <QDebug>


SheerCloudLink::SheerCloudLink(QString location, QString login, QString password){
  m_is_authorized = false;

  m_location = location;
  m_login = login;
  m_password = password;
  m_out = NULL;
};

SheerCloudLink::~SheerCloudLink(){
};
  
void SheerCloudLink::Authorize(){
  reply = get( QNetworkRequest( QUrl( m_location + "/authorize?login=" + m_login + "&password=" + m_password ) ));
  /*connect( this, SIGNAL(finished( QNetworkReply *)),
       this, SLOT(login_completed( QNetworkReply *)) );*/
   QEventLoop loop;
  QObject::connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
  connect( this, SIGNAL(finished( QNetworkReply *)),
       this, SLOT(login_completed( QNetworkReply *)) );
  loop.exec();
}

void SheerCloudLink::Upload(QString file, const QByteArray & in){
    qDebug() << m_location << "youpii";
  QNetworkRequest upload_req( QUrl( m_location + "/upload?login=" + m_login + "&password=" + m_password + "&file=" + file ));
  upload_req.setRawHeader( "content-type", "application/octet-stream");
  reply = post( upload_req, in);
  connect(reply, SIGNAL(uploadProgress(qint64,qint64)), SLOT(uploadProgress(qint64,qint64)));
  connect(reply, SIGNAL(finished()), SLOT(upload_completed()));
  /*connect( this, SIGNAL(finished( QNetworkReply *)),
       this, SLOT(upload_completed( QNetworkReply *)) );*/

};

void SheerCloudLink::Download(QString file, QByteArray & out){
  reply = get( QNetworkRequest( QUrl( m_location + "/download?login=" + m_login + "&password=" + m_password + "&file=" + file ) ));
  m_out = out;
  connect(reply, SIGNAL(downloadProgress(qint64,qint64)), SLOT(downloadProgress(qint64,qint64)));
  connect(reply, SIGNAL(finished()), SLOT(download_completed()));
  /*connect( this, SIGNAL(finished( QNetworkReply *)),
       this, SLOT(download_completed( QNetworkReply *)) );*/


};

bool SheerCloudLink::Authorized(){
  return m_is_authorized;
};

void SheerCloudLink::login_completed( QNetworkReply * reply){
    

	if(reply->isFinished() == true){
		QByteArray got = reply->readAll();
		if( got.contains( "OK" ) ) {
			m_is_authorized = true;
			m_out = got;
		};
	}
  disconnect( this, SLOT(login_completed( QNetworkReply *)) );
  done();
};

void SheerCloudLink::upload_completed( ){
  QByteArray got = reply->readAll();
  //TODO error reporting
  m_out = got;
  qDebug() << "Data : " << got;
  disconnect( this, SLOT(upload_completed()) );
  done();
};

void SheerCloudLink::download_completed(){
  QByteArray got = reply->readAll();
  qDebug() << "Data : " << got;
  if( !m_out.isEmpty() ) {
    m_out = got;
  };
  disconnect( this, SLOT(download_completed()) );
  done();
};

void SheerCloudLink::action()
{
    QFile m_oFile("C:/Data/reply.txt");
    m_oFile.open(QIODevice::WriteOnly);
    m_oFile.write(m_out.data());
    m_oFile.close();
}

//slot to check the upload progress
void SheerCloudLink::uploadProgress(qint64 bytesSent, qint64 bytesTotal)
{
    qDebug() << "Uploaded" << bytesSent << "of" << bytesTotal;
}

//slot to check the download progress
void SheerCloudLink::downloadProgress(qint64 bytesReceived, qint64 bytesTotal)
{
    qDebug() << "Downloaded " << bytesReceived << " of " << bytesTotal;
}
