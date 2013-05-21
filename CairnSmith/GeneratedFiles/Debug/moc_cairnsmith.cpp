/****************************************************************************
** Meta object code from reading C++ file 'cairnsmith.h'
**
** Created: Mon May 20 14:54:27 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UI/Home/cairnsmith.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cairnsmith.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CairnSmith[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      30,   11,   11,   11, 0x08,
      47,   11,   11,   11, 0x08,
      67,   11,   11,   11, 0x08,
      80,   11,   11,   11, 0x08,
      97,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CairnSmith[] = {
    "CairnSmith\0\0OpenProjectFile()\0"
    "NewProjectFile()\0DeleteProjectFile()\0"
    "RemoveLast()\0uploadToServer()\0"
    "downloadFromServer()\0"
};

void CairnSmith::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CairnSmith *_t = static_cast<CairnSmith *>(_o);
        switch (_id) {
        case 0: _t->OpenProjectFile(); break;
        case 1: _t->NewProjectFile(); break;
        case 2: _t->DeleteProjectFile(); break;
        case 3: _t->RemoveLast(); break;
        case 4: _t->uploadToServer(); break;
        case 5: _t->downloadFromServer(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CairnSmith::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CairnSmith::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CairnSmith,
      qt_meta_data_CairnSmith, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CairnSmith::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CairnSmith::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CairnSmith::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CairnSmith))
        return static_cast<void*>(const_cast< CairnSmith*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CairnSmith::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
