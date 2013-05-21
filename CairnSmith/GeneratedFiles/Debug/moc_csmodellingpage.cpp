/****************************************************************************
** Meta object code from reading C++ file 'csmodellingpage.h'
**
** Created: Mon May 20 14:54:26 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UI/Home/csmodellingpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'csmodellingpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CSModellingPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      40,   34,   16,   16, 0x0a,
      54,   16,   16,   16, 0x0a,
      68,   16,   16,   16, 0x0a,
      85,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CSModellingPage[] = {
    "CSModellingPage\0\0addTabCallBack()\0"
    "index\0closeTab(int)\0slot_Rename()\0"
    "slot_Duplicate()\0slot_Delete()\0"
};

void CSModellingPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CSModellingPage *_t = static_cast<CSModellingPage *>(_o);
        switch (_id) {
        case 0: _t->addTabCallBack(); break;
        case 1: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slot_Rename(); break;
        case 3: _t->slot_Duplicate(); break;
        case 4: _t->slot_Delete(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CSModellingPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CSModellingPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CSModellingPage,
      qt_meta_data_CSModellingPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CSModellingPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CSModellingPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CSModellingPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CSModellingPage))
        return static_cast<void*>(const_cast< CSModellingPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int CSModellingPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
