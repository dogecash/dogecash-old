/****************************************************************************
** Meta object code from reading C++ file 'expandablebutton.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/dogecash/expandablebutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'expandablebutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExpandableButton_t {
    QByteArrayData data[11];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExpandableButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExpandableButton_t qt_meta_stringdata_ExpandableButton = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ExpandableButton"
QT_MOC_LITERAL(1, 17, 13), // "Mouse_Pressed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "Mouse_Hover"
QT_MOC_LITERAL(4, 44, 16), // "Mouse_HoverLeave"
QT_MOC_LITERAL(5, 61, 8), // "setText2"
QT_MOC_LITERAL(6, 70, 5), // "text2"
QT_MOC_LITERAL(7, 76, 7), // "getText"
QT_MOC_LITERAL(8, 84, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 106, 7), // "checked"
QT_MOC_LITERAL(10, 114, 15) // "mousePressEvent"

    },
    "ExpandableButton\0Mouse_Pressed\0\0"
    "Mouse_Hover\0Mouse_HoverLeave\0setText2\0"
    "text2\0getText\0on_pushButton_clicked\0"
    "checked\0mousePressEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExpandableButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x0a /* Public */,
       8,    1,   56,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,

       0        // eod
};

void ExpandableButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExpandableButton *_t = static_cast<ExpandableButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Mouse_Pressed(); break;
        case 1: _t->Mouse_Hover(); break;
        case 2: _t->Mouse_HoverLeave(); break;
        case 3: _t->setText2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: { QString _r = _t->getText();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->on_pushButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->mousePressEvent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ExpandableButton::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExpandableButton::Mouse_Pressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ExpandableButton::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExpandableButton::Mouse_Hover)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ExpandableButton::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExpandableButton::Mouse_HoverLeave)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ExpandableButton::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ExpandableButton.data,
      qt_meta_data_ExpandableButton,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ExpandableButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExpandableButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExpandableButton.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ExpandableButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ExpandableButton::Mouse_Pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ExpandableButton::Mouse_Hover()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ExpandableButton::Mouse_HoverLeave()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
