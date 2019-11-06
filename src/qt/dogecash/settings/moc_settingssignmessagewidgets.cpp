/****************************************************************************
** Meta object code from reading C++ file 'settingssignmessagewidgets.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/dogecash/settings/settingssignmessagewidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingssignmessagewidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsSignMessageWidgets_t {
    QByteArrayData data[12];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsSignMessageWidgets_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsSignMessageWidgets_t qt_meta_stringdata_SettingsSignMessageWidgets = {
    {
QT_MOC_LITERAL(0, 0, 26), // "SettingsSignMessageWidgets"
QT_MOC_LITERAL(1, 27, 28), // "onSignMessageButtonSMClicked"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 15), // "onVerifyMessage"
QT_MOC_LITERAL(4, 73, 22), // "onPasteButtonSMClicked"
QT_MOC_LITERAL(5, 96, 28), // "onAddressBookButtonSMClicked"
QT_MOC_LITERAL(6, 125, 11), // "onGoClicked"
QT_MOC_LITERAL(7, 137, 10), // "onClearAll"
QT_MOC_LITERAL(8, 148, 18), // "onAddressesClicked"
QT_MOC_LITERAL(9, 167, 14), // "onModeSelected"
QT_MOC_LITERAL(10, 182, 6), // "isSign"
QT_MOC_LITERAL(11, 189, 10) // "updateMode"

    },
    "SettingsSignMessageWidgets\0"
    "onSignMessageButtonSMClicked\0\0"
    "onVerifyMessage\0onPasteButtonSMClicked\0"
    "onAddressBookButtonSMClicked\0onGoClicked\0"
    "onClearAll\0onAddressesClicked\0"
    "onModeSelected\0isSign\0updateMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsSignMessageWidgets[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    1,   66,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,

       0        // eod
};

void SettingsSignMessageWidgets::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsSignMessageWidgets *_t = static_cast<SettingsSignMessageWidgets *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSignMessageButtonSMClicked(); break;
        case 1: _t->onVerifyMessage(); break;
        case 2: _t->onPasteButtonSMClicked(); break;
        case 3: _t->onAddressBookButtonSMClicked(); break;
        case 4: _t->onGoClicked(); break;
        case 5: _t->onClearAll(); break;
        case 6: _t->onAddressesClicked(); break;
        case 7: _t->onModeSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->updateMode(); break;
        default: ;
        }
    }
}

const QMetaObject SettingsSignMessageWidgets::staticMetaObject = {
    { &PWidget::staticMetaObject, qt_meta_stringdata_SettingsSignMessageWidgets.data,
      qt_meta_data_SettingsSignMessageWidgets,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SettingsSignMessageWidgets::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsSignMessageWidgets::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsSignMessageWidgets.stringdata0))
        return static_cast<void*>(this);
    return PWidget::qt_metacast(_clname);
}

int SettingsSignMessageWidgets::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
