/****************************************************************************
** Meta object code from reading C++ file 'tooltipmenu.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/dogecash/tooltipmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tooltipmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TooltipMenu_t {
    QByteArrayData data[8];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TooltipMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TooltipMenu_t qt_meta_stringdata_TooltipMenu = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TooltipMenu"
QT_MOC_LITERAL(1, 12, 15), // "onDeleteClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "onCopyClicked"
QT_MOC_LITERAL(4, 43, 13), // "onEditClicked"
QT_MOC_LITERAL(5, 57, 13), // "deleteClicked"
QT_MOC_LITERAL(6, 71, 11), // "copyClicked"
QT_MOC_LITERAL(7, 83, 11) // "editClicked"

    },
    "TooltipMenu\0onDeleteClicked\0\0onCopyClicked\0"
    "onEditClicked\0deleteClicked\0copyClicked\0"
    "editClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TooltipMenu[] = {

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
       4,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TooltipMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TooltipMenu *_t = static_cast<TooltipMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onDeleteClicked(); break;
        case 1: _t->onCopyClicked(); break;
        case 2: _t->onEditClicked(); break;
        case 3: _t->deleteClicked(); break;
        case 4: _t->copyClicked(); break;
        case 5: _t->editClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TooltipMenu::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TooltipMenu::onDeleteClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TooltipMenu::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TooltipMenu::onCopyClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TooltipMenu::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TooltipMenu::onEditClicked)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TooltipMenu::staticMetaObject = {
    { &PWidget::staticMetaObject, qt_meta_stringdata_TooltipMenu.data,
      qt_meta_data_TooltipMenu,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TooltipMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TooltipMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TooltipMenu.stringdata0))
        return static_cast<void*>(this);
    return PWidget::qt_metacast(_clname);
}

int TooltipMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PWidget::qt_metacall(_c, _id, _a);
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
void TooltipMenu::onDeleteClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TooltipMenu::onCopyClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TooltipMenu::onEditClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
