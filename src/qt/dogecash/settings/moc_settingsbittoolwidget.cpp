/****************************************************************************
** Meta object code from reading C++ file 'settingsbittoolwidget.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/dogecash/settings/settingsbittoolwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsbittoolwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsBitToolWidget_t {
    QByteArrayData data[12];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsBitToolWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsBitToolWidget_t qt_meta_stringdata_SettingsBitToolWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "SettingsBitToolWidget"
QT_MOC_LITERAL(1, 22, 17), // "onEncryptSelected"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "isEncr"
QT_MOC_LITERAL(4, 48, 14), // "setAddress_ENC"
QT_MOC_LITERAL(5, 63, 7), // "address"
QT_MOC_LITERAL(6, 71, 28), // "onEncryptKeyButtonENCClicked"
QT_MOC_LITERAL(7, 100, 10), // "onClearAll"
QT_MOC_LITERAL(8, 111, 14), // "onClearDecrypt"
QT_MOC_LITERAL(9, 126, 18), // "onAddressesClicked"
QT_MOC_LITERAL(10, 145, 16), // "onDecryptClicked"
QT_MOC_LITERAL(11, 162, 23) // "importAddressFromDecKey"

    },
    "SettingsBitToolWidget\0onEncryptSelected\0"
    "\0isEncr\0setAddress_ENC\0address\0"
    "onEncryptKeyButtonENCClicked\0onClearAll\0"
    "onClearDecrypt\0onAddressesClicked\0"
    "onDecryptClicked\0importAddressFromDecKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsBitToolWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    1,   57,    2, 0x0a /* Public */,
       6,    0,   60,    2, 0x0a /* Public */,
       7,    0,   61,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x0a /* Public */,
      10,    0,   64,    2, 0x0a /* Public */,
      11,    0,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SettingsBitToolWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsBitToolWidget *_t = static_cast<SettingsBitToolWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onEncryptSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setAddress_ENC((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onEncryptKeyButtonENCClicked(); break;
        case 3: _t->onClearAll(); break;
        case 4: _t->onClearDecrypt(); break;
        case 5: _t->onAddressesClicked(); break;
        case 6: _t->onDecryptClicked(); break;
        case 7: _t->importAddressFromDecKey(); break;
        default: ;
        }
    }
}

const QMetaObject SettingsBitToolWidget::staticMetaObject = {
    { &PWidget::staticMetaObject, qt_meta_stringdata_SettingsBitToolWidget.data,
      qt_meta_data_SettingsBitToolWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SettingsBitToolWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsBitToolWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsBitToolWidget.stringdata0))
        return static_cast<void*>(this);
    return PWidget::qt_metacast(_clname);
}

int SettingsBitToolWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
