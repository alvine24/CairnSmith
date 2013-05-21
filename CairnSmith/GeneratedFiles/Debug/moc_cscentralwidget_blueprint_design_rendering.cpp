/****************************************************************************
** Meta object code from reading C++ file 'cscentralwidget_blueprint_design_rendering.h'
**
** Created: Mon May 20 14:54:26 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UI/Home/cscentralwidget_blueprint_design_rendering.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cscentralwidget_blueprint_design_rendering.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CSCentralWidget_BluePrint_Design_Rendering[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      48,   44,   43,   43, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CSCentralWidget_BluePrint_Design_Rendering[] = {
    "CSCentralWidget_BluePrint_Design_Rendering\0"
    "\0ind\0loadModellingPage(int)\0"
};

void CSCentralWidget_BluePrint_Design_Rendering::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CSCentralWidget_BluePrint_Design_Rendering *_t = static_cast<CSCentralWidget_BluePrint_Design_Rendering *>(_o);
        switch (_id) {
        case 0: _t->loadModellingPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CSCentralWidget_BluePrint_Design_Rendering::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CSCentralWidget_BluePrint_Design_Rendering::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CSCentralWidget_BluePrint_Design_Rendering,
      qt_meta_data_CSCentralWidget_BluePrint_Design_Rendering, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CSCentralWidget_BluePrint_Design_Rendering::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CSCentralWidget_BluePrint_Design_Rendering::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CSCentralWidget_BluePrint_Design_Rendering::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CSCentralWidget_BluePrint_Design_Rendering))
        return static_cast<void*>(const_cast< CSCentralWidget_BluePrint_Design_Rendering*>(this));
    return QWidget::qt_metacast(_clname);
}

int CSCentralWidget_BluePrint_Design_Rendering::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
