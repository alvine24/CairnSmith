/****************************************************************************
** Meta object code from reading C++ file 'sheer_cloud.h'
**
** Created: Mon May 20 14:54:25 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UI/Home/sheer_cloud.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sheer_cloud.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SheerCloudLink[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      23,   15,   15,   15, 0x0a,
      55,   15,   15,   15, 0x0a,
      74,   15,   15,   15, 0x0a,
     116,   95,   15,   15, 0x0a,
     171,  146,   15,   15, 0x0a,
     203,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SheerCloudLink[] = {
    "SheerCloudLink\0\0done()\0"
    "login_completed(QNetworkReply*)\0"
    "upload_completed()\0download_completed()\0"
    "bytesSent,bytesTotal\0uploadProgress(qint64,qint64)\0"
    "bytesReceived,bytesTotal\0"
    "downloadProgress(qint64,qint64)\0"
    "action()\0"
};

void SheerCloudLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SheerCloudLink *_t = static_cast<SheerCloudLink *>(_o);
        switch (_id) {
        case 0: _t->done(); break;
        case 1: _t->login_completed((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->upload_completed(); break;
        case 3: _t->download_completed(); break;
        case 4: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 5: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: _t->action(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SheerCloudLink::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SheerCloudLink::staticMetaObject = {
    { &QNetworkAccessManager::staticMetaObject, qt_meta_stringdata_SheerCloudLink,
      qt_meta_data_SheerCloudLink, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SheerCloudLink::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SheerCloudLink::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SheerCloudLink::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SheerCloudLink))
        return static_cast<void*>(const_cast< SheerCloudLink*>(this));
    return QNetworkAccessManager::qt_metacast(_clname);
}

int SheerCloudLink::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SheerCloudLink::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
