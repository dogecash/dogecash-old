/****************************************************************************
** Meta object code from reading C++ file 'sendcustomfeedialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/dogecash/sendcustomfeedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendcustomfeedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SendCustomFeeDialog_t {
    QByteArrayData data[9];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendCustomFeeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendCustomFeeDialog_t qt_meta_stringdata_SendCustomFeeDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SendCustomFeeDialog"
QT_MOC_LITERAL(1, 20, 20), // "onRecommendedChecked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 15), // "onCustomChecked"
QT_MOC_LITERAL(4, 58, 9), // "updateFee"
QT_MOC_LITERAL(5, 68, 13), // "onChangeTheme"
QT_MOC_LITERAL(6, 82, 12), // "isLightTheme"
QT_MOC_LITERAL(7, 95, 8), // "QString&"
QT_MOC_LITERAL(8, 104, 5) // "theme"

    },
    "SendCustomFeeDialog\0onRecommendedChecked\0"
    "\0onCustomChecked\0updateFee\0onChangeTheme\0"
    "isLightTheme\0QString&\0theme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendCustomFeeDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    0,   36,    2, 0x0a /* Public */,
       5,    2,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 7,    6,    8,

       0        // eod
};

void SendCustomFeeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendCustomFeeDialog *_t = static_cast<SendCustomFeeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onRecommendedChecked(); break;
        case 1: _t->onCustomChecked(); break;
        case 2: _t->updateFee(); break;
        case 3: _t->onChangeTheme((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject SendCustomFeeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SendCustomFeeDialog.data,
      qt_meta_data_SendCustomFeeDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SendCustomFeeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendCustomFeeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SendCustomFeeDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SendCustomFeeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
