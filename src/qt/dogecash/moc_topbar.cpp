/****************************************************************************
** Meta object code from reading C++ file 'topbar.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/dogecash/topbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'topbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TopBar_t {
    QByteArrayData data[34];
    char stringdata0[517];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TopBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TopBar_t qt_meta_stringdata_TopBar = {
    {
QT_MOC_LITERAL(0, 0, 6), // "TopBar"
QT_MOC_LITERAL(1, 7, 12), // "themeChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "isLight"
QT_MOC_LITERAL(4, 29, 12), // "walletSynced"
QT_MOC_LITERAL(5, 42, 6), // "isSync"
QT_MOC_LITERAL(6, 49, 22), // "hdEnabledStatusChanged"
QT_MOC_LITERAL(7, 72, 9), // "hdEnabled"
QT_MOC_LITERAL(8, 82, 14), // "updateBalances"
QT_MOC_LITERAL(9, 97, 7), // "CAmount"
QT_MOC_LITERAL(10, 105, 7), // "balance"
QT_MOC_LITERAL(11, 113, 18), // "unconfirmedBalance"
QT_MOC_LITERAL(12, 132, 15), // "immatureBalance"
QT_MOC_LITERAL(13, 148, 15), // "zerocoinBalance"
QT_MOC_LITERAL(14, 164, 26), // "unconfirmedZerocoinBalance"
QT_MOC_LITERAL(15, 191, 23), // "immatureZerocoinBalance"
QT_MOC_LITERAL(16, 215, 16), // "watchOnlyBalance"
QT_MOC_LITERAL(17, 232, 18), // "watchUnconfBalance"
QT_MOC_LITERAL(18, 251, 20), // "watchImmatureBalance"
QT_MOC_LITERAL(19, 272, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(20, 290, 17), // "setNumConnections"
QT_MOC_LITERAL(21, 308, 5), // "count"
QT_MOC_LITERAL(22, 314, 12), // "setNumBlocks"
QT_MOC_LITERAL(23, 327, 20), // "updateAutoMintStatus"
QT_MOC_LITERAL(24, 348, 19), // "updateStakingStatus"
QT_MOC_LITERAL(25, 368, 19), // "onBtnReceiveClicked"
QT_MOC_LITERAL(26, 388, 14), // "onThemeClicked"
QT_MOC_LITERAL(27, 403, 16), // "onBtnLockClicked"
QT_MOC_LITERAL(28, 420, 22), // "lockDropdownMouseLeave"
QT_MOC_LITERAL(29, 443, 19), // "lockDropdownClicked"
QT_MOC_LITERAL(30, 463, 12), // "StateClicked"
QT_MOC_LITERAL(31, 476, 13), // "refreshStatus"
QT_MOC_LITERAL(32, 490, 14), // "openLockUnlock"
QT_MOC_LITERAL(33, 505, 11) // "setHDStatus"

    },
    "TopBar\0themeChanged\0\0isLight\0walletSynced\0"
    "isSync\0hdEnabledStatusChanged\0hdEnabled\0"
    "updateBalances\0CAmount\0balance\0"
    "unconfirmedBalance\0immatureBalance\0"
    "zerocoinBalance\0unconfirmedZerocoinBalance\0"
    "immatureZerocoinBalance\0watchOnlyBalance\0"
    "watchUnconfBalance\0watchImmatureBalance\0"
    "updateDisplayUnit\0setNumConnections\0"
    "count\0setNumBlocks\0updateAutoMintStatus\0"
    "updateStakingStatus\0onBtnReceiveClicked\0"
    "onThemeClicked\0onBtnLockClicked\0"
    "lockDropdownMouseLeave\0lockDropdownClicked\0"
    "StateClicked\0refreshStatus\0openLockUnlock\0"
    "setHDStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TopBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,
       6,    1,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    9,  108,    2, 0x0a /* Public */,
      19,    0,  127,    2, 0x0a /* Public */,
      20,    1,  128,    2, 0x0a /* Public */,
      22,    1,  131,    2, 0x0a /* Public */,
      23,    0,  134,    2, 0x0a /* Public */,
      24,    0,  135,    2, 0x0a /* Public */,
      25,    0,  136,    2, 0x08 /* Private */,
      26,    0,  137,    2, 0x08 /* Private */,
      27,    0,  138,    2, 0x08 /* Private */,
      28,    0,  139,    2, 0x08 /* Private */,
      29,    1,  140,    2, 0x08 /* Private */,
      31,    0,  143,    2, 0x08 /* Private */,
      32,    0,  144,    2, 0x08 /* Private */,
      33,    1,  145,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 9,   10,   11,   12,   13,   14,   15,   16,   17,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void TopBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TopBar *_t = static_cast<TopBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->themeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->walletSynced((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->hdEnabledStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->updateBalances((*reinterpret_cast< const CAmount(*)>(_a[1])),(*reinterpret_cast< const CAmount(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const CAmount(*)>(_a[4])),(*reinterpret_cast< const CAmount(*)>(_a[5])),(*reinterpret_cast< const CAmount(*)>(_a[6])),(*reinterpret_cast< const CAmount(*)>(_a[7])),(*reinterpret_cast< const CAmount(*)>(_a[8])),(*reinterpret_cast< const CAmount(*)>(_a[9]))); break;
        case 4: _t->updateDisplayUnit(); break;
        case 5: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateAutoMintStatus(); break;
        case 8: _t->updateStakingStatus(); break;
        case 9: _t->onBtnReceiveClicked(); break;
        case 10: _t->onThemeClicked(); break;
        case 11: _t->onBtnLockClicked(); break;
        case 12: _t->lockDropdownMouseLeave(); break;
        case 13: _t->lockDropdownClicked((*reinterpret_cast< const StateClicked(*)>(_a[1]))); break;
        case 14: _t->refreshStatus(); break;
        case 15: _t->openLockUnlock(); break;
        case 16: _t->setHDStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TopBar::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBar::themeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TopBar::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBar::walletSynced)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TopBar::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TopBar::hdEnabledStatusChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject TopBar::staticMetaObject = {
    { &PWidget::staticMetaObject, qt_meta_stringdata_TopBar.data,
      qt_meta_data_TopBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TopBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TopBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TopBar.stringdata0))
        return static_cast<void*>(this);
    return PWidget::qt_metacast(_clname);
}

int TopBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void TopBar::themeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TopBar::walletSynced(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TopBar::hdEnabledStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
