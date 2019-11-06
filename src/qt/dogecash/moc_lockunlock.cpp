/****************************************************************************
** Meta object code from reading C++ file 'lockunlock.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/dogecash/lockunlock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lockunlock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LockUnlock_t {
    QByteArrayData data[10];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LockUnlock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LockUnlock_t qt_meta_stringdata_LockUnlock = {
    {
QT_MOC_LITERAL(0, 0, 10), // "LockUnlock"
QT_MOC_LITERAL(1, 11, 13), // "Mouse_Entered"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "Mouse_Leave"
QT_MOC_LITERAL(4, 38, 11), // "lockClicked"
QT_MOC_LITERAL(5, 50, 12), // "StateClicked"
QT_MOC_LITERAL(6, 63, 5), // "state"
QT_MOC_LITERAL(7, 69, 13), // "onLockClicked"
QT_MOC_LITERAL(8, 83, 15), // "onUnlockClicked"
QT_MOC_LITERAL(9, 99, 16) // "onStakingClicked"

    },
    "LockUnlock\0Mouse_Entered\0\0Mouse_Leave\0"
    "lockClicked\0StateClicked\0state\0"
    "onLockClicked\0onUnlockClicked\0"
    "onStakingClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LockUnlock[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   49,    2, 0x0a /* Public */,
       8,    0,   50,    2, 0x0a /* Public */,
       9,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LockUnlock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LockUnlock *_t = static_cast<LockUnlock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Mouse_Entered(); break;
        case 1: _t->Mouse_Leave(); break;
        case 2: _t->lockClicked((*reinterpret_cast< const StateClicked(*)>(_a[1]))); break;
        case 3: _t->onLockClicked(); break;
        case 4: _t->onUnlockClicked(); break;
        case 5: _t->onStakingClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (LockUnlock::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LockUnlock::Mouse_Entered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LockUnlock::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LockUnlock::Mouse_Leave)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LockUnlock::*_t)(const StateClicked & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LockUnlock::lockClicked)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject LockUnlock::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LockUnlock.data,
      qt_meta_data_LockUnlock,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LockUnlock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LockUnlock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LockUnlock.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LockUnlock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void LockUnlock::Mouse_Entered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LockUnlock::Mouse_Leave()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LockUnlock::lockClicked(const StateClicked & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
