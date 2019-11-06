/****************************************************************************
** Meta object code from reading C++ file 'sendmultirow.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/dogecash/sendmultirow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendmultirow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SendMultiRow_t {
    QByteArrayData data[16];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendMultiRow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendMultiRow_t qt_meta_stringdata_SendMultiRow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SendMultiRow"
QT_MOC_LITERAL(1, 13, 11), // "removeEntry"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "SendMultiRow*"
QT_MOC_LITERAL(4, 40, 5), // "entry"
QT_MOC_LITERAL(5, 46, 17), // "onContactsClicked"
QT_MOC_LITERAL(6, 64, 13), // "onMenuClicked"
QT_MOC_LITERAL(7, 78, 14), // "onValueChanged"
QT_MOC_LITERAL(8, 93, 11), // "onUriParsed"
QT_MOC_LITERAL(9, 105, 18), // "SendCoinsRecipient"
QT_MOC_LITERAL(10, 124, 3), // "rcp"
QT_MOC_LITERAL(11, 128, 5), // "clear"
QT_MOC_LITERAL(12, 134, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(13, 152, 13), // "amountChanged"
QT_MOC_LITERAL(14, 166, 14), // "addressChanged"
QT_MOC_LITERAL(15, 181, 13) // "deleteClicked"

    },
    "SendMultiRow\0removeEntry\0\0SendMultiRow*\0"
    "entry\0onContactsClicked\0onMenuClicked\0"
    "onValueChanged\0onUriParsed\0"
    "SendCoinsRecipient\0rcp\0clear\0"
    "updateDisplayUnit\0amountChanged\0"
    "addressChanged\0deleteClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendMultiRow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,
       7,    0,   73,    2, 0x06 /* Public */,
       8,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   77,    2, 0x0a /* Public */,
      12,    0,   78,    2, 0x0a /* Public */,
      13,    1,   79,    2, 0x08 /* Private */,
      14,    1,   82,    2, 0x08 /* Private */,
      15,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Bool, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void SendMultiRow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendMultiRow *_t = static_cast<SendMultiRow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeEntry((*reinterpret_cast< SendMultiRow*(*)>(_a[1]))); break;
        case 1: _t->onContactsClicked((*reinterpret_cast< SendMultiRow*(*)>(_a[1]))); break;
        case 2: _t->onMenuClicked((*reinterpret_cast< SendMultiRow*(*)>(_a[1]))); break;
        case 3: _t->onValueChanged(); break;
        case 4: _t->onUriParsed((*reinterpret_cast< SendCoinsRecipient(*)>(_a[1]))); break;
        case 5: _t->clear(); break;
        case 6: _t->updateDisplayUnit(); break;
        case 7: _t->amountChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: { bool _r = _t->addressChanged((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->deleteClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SendMultiRow* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SendMultiRow* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SendMultiRow* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SendMultiRow::*_t)(SendMultiRow * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SendMultiRow::removeEntry)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SendMultiRow::*_t)(SendMultiRow * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SendMultiRow::onContactsClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SendMultiRow::*_t)(SendMultiRow * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SendMultiRow::onMenuClicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SendMultiRow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SendMultiRow::onValueChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SendMultiRow::*_t)(SendCoinsRecipient );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SendMultiRow::onUriParsed)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject SendMultiRow::staticMetaObject = {
    { &PWidget::staticMetaObject, qt_meta_stringdata_SendMultiRow.data,
      qt_meta_data_SendMultiRow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SendMultiRow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendMultiRow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SendMultiRow.stringdata0))
        return static_cast<void*>(this);
    return PWidget::qt_metacast(_clname);
}

int SendMultiRow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void SendMultiRow::removeEntry(SendMultiRow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SendMultiRow::onContactsClicked(SendMultiRow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SendMultiRow::onMenuClicked(SendMultiRow * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SendMultiRow::onValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SendMultiRow::onUriParsed(SendCoinsRecipient _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
