/****************************************************************************
** Meta object code from reading C++ file 'settingswalletrepairwidget.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/dogecash/settings/settingswalletrepairwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingswalletrepairwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsWalletRepairWidget_t {
    QByteArrayData data[11];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsWalletRepairWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsWalletRepairWidget_t qt_meta_stringdata_SettingsWalletRepairWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "SettingsWalletRepairWidget"
QT_MOC_LITERAL(1, 27, 13), // "handleRestart"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "args"
QT_MOC_LITERAL(4, 47, 13), // "walletSalvage"
QT_MOC_LITERAL(5, 61, 12), // "walletRescan"
QT_MOC_LITERAL(6, 74, 14), // "walletZaptxes1"
QT_MOC_LITERAL(7, 89, 14), // "walletZaptxes2"
QT_MOC_LITERAL(8, 104, 13), // "walletUpgrade"
QT_MOC_LITERAL(9, 118, 13), // "walletReindex"
QT_MOC_LITERAL(10, 132, 12) // "walletResync"

    },
    "SettingsWalletRepairWidget\0handleRestart\0"
    "\0args\0walletSalvage\0walletRescan\0"
    "walletZaptxes1\0walletZaptxes2\0"
    "walletUpgrade\0walletReindex\0walletResync"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsWalletRepairWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   57,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x0a /* Public */,
       6,    0,   59,    2, 0x0a /* Public */,
       7,    0,   60,    2, 0x0a /* Public */,
       8,    0,   61,    2, 0x0a /* Public */,
       9,    0,   62,    2, 0x0a /* Public */,
      10,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SettingsWalletRepairWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsWalletRepairWidget *_t = static_cast<SettingsWalletRepairWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleRestart((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->walletSalvage(); break;
        case 2: _t->walletRescan(); break;
        case 3: _t->walletZaptxes1(); break;
        case 4: _t->walletZaptxes2(); break;
        case 5: _t->walletUpgrade(); break;
        case 6: _t->walletReindex(); break;
        case 7: _t->walletResync(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SettingsWalletRepairWidget::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsWalletRepairWidget::handleRestart)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SettingsWalletRepairWidget::staticMetaObject = {
    { &PWidget::staticMetaObject, qt_meta_stringdata_SettingsWalletRepairWidget.data,
      qt_meta_data_SettingsWalletRepairWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SettingsWalletRepairWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsWalletRepairWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsWalletRepairWidget.stringdata0))
        return static_cast<void*>(this);
    return PWidget::qt_metacast(_clname);
}

int SettingsWalletRepairWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void SettingsWalletRepairWidget::handleRestart(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
