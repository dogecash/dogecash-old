/****************************************************************************
** Meta object code from reading C++ file 'masternodeswidget.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/dogecash/masternodeswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masternodeswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MasterNodesWidget_t {
    QByteArrayData data[13];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasterNodesWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasterNodesWidget_t qt_meta_stringdata_MasterNodesWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MasterNodesWidget"
QT_MOC_LITERAL(1, 18, 17), // "onCreateMNClicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "changeTheme"
QT_MOC_LITERAL(4, 49, 12), // "isLightTheme"
QT_MOC_LITERAL(5, 62, 8), // "QString&"
QT_MOC_LITERAL(6, 71, 5), // "theme"
QT_MOC_LITERAL(7, 77, 11), // "onMNClicked"
QT_MOC_LITERAL(8, 89, 5), // "index"
QT_MOC_LITERAL(9, 95, 15), // "onEditMNClicked"
QT_MOC_LITERAL(10, 111, 17), // "onDeleteMNClicked"
QT_MOC_LITERAL(11, 129, 15), // "onInfoMNClicked"
QT_MOC_LITERAL(12, 145, 15) // "updateListState"

    },
    "MasterNodesWidget\0onCreateMNClicked\0"
    "\0changeTheme\0isLightTheme\0QString&\0"
    "theme\0onMNClicked\0index\0onEditMNClicked\0"
    "onDeleteMNClicked\0onInfoMNClicked\0"
    "updateListState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasterNodesWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    2,   50,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,
      11,    0,   60,    2, 0x08 /* Private */,
      12,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::QModelIndex,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MasterNodesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MasterNodesWidget *_t = static_cast<MasterNodesWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onCreateMNClicked(); break;
        case 1: _t->changeTheme((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->onMNClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->onEditMNClicked(); break;
        case 4: _t->onDeleteMNClicked(); break;
        case 5: _t->onInfoMNClicked(); break;
        case 6: _t->updateListState(); break;
        default: ;
        }
    }
}

const QMetaObject MasterNodesWidget::staticMetaObject = {
    { &PWidget::staticMetaObject, qt_meta_stringdata_MasterNodesWidget.data,
      qt_meta_data_MasterNodesWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MasterNodesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasterNodesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MasterNodesWidget.stringdata0))
        return static_cast<void*>(this);
    return PWidget::qt_metacast(_clname);
}

int MasterNodesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
