/****************************************************************************
** Meta object code from reading C++ file 'settingsconsolewidget.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/dogecash/settings/settingsconsolewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsconsolewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsConsoleWidget_t {
    QByteArrayData data[18];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsConsoleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsConsoleWidget_t qt_meta_stringdata_SettingsConsoleWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "SettingsConsoleWidget"
QT_MOC_LITERAL(1, 22, 12), // "stopExecutor"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 17), // "cmdCommandRequest"
QT_MOC_LITERAL(4, 54, 7), // "command"
QT_MOC_LITERAL(5, 62, 5), // "clear"
QT_MOC_LITERAL(6, 68, 7), // "message"
QT_MOC_LITERAL(7, 76, 8), // "category"
QT_MOC_LITERAL(8, 85, 4), // "html"
QT_MOC_LITERAL(9, 90, 13), // "browseHistory"
QT_MOC_LITERAL(10, 104, 6), // "offset"
QT_MOC_LITERAL(11, 111, 11), // "scrollToEnd"
QT_MOC_LITERAL(12, 123, 17), // "onCommandsClicked"
QT_MOC_LITERAL(13, 141, 11), // "changeTheme"
QT_MOC_LITERAL(14, 153, 12), // "isLightTheme"
QT_MOC_LITERAL(15, 166, 8), // "QString&"
QT_MOC_LITERAL(16, 175, 5), // "theme"
QT_MOC_LITERAL(17, 181, 25) // "on_lineEdit_returnPressed"

    },
    "SettingsConsoleWidget\0stopExecutor\0\0"
    "cmdCommandRequest\0command\0clear\0message\0"
    "category\0html\0browseHistory\0offset\0"
    "scrollToEnd\0onCommandsClicked\0changeTheme\0"
    "isLightTheme\0QString&\0theme\0"
    "on_lineEdit_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsConsoleWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   68,    2, 0x0a /* Public */,
       6,    3,   69,    2, 0x0a /* Public */,
       6,    2,   76,    2, 0x2a /* Public | MethodCloned */,
       9,    1,   81,    2, 0x0a /* Public */,
      11,    0,   84,    2, 0x0a /* Public */,
      12,    0,   85,    2, 0x0a /* Public */,
      13,    2,   86,    2, 0x09 /* Protected */,
      17,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,    7,    6,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,    6,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 15,   14,   16,
    QMetaType::Void,

       0        // eod
};

void SettingsConsoleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsConsoleWidget *_t = static_cast<SettingsConsoleWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopExecutor(); break;
        case 1: _t->cmdCommandRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->clear(); break;
        case 3: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->browseHistory((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->scrollToEnd(); break;
        case 7: _t->onCommandsClicked(); break;
        case 8: _t->changeTheme((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->on_lineEdit_returnPressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SettingsConsoleWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsConsoleWidget::stopExecutor)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SettingsConsoleWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SettingsConsoleWidget::cmdCommandRequest)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SettingsConsoleWidget::staticMetaObject = {
    { &PWidget::staticMetaObject, qt_meta_stringdata_SettingsConsoleWidget.data,
      qt_meta_data_SettingsConsoleWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SettingsConsoleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsConsoleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsConsoleWidget.stringdata0))
        return static_cast<void*>(this);
    return PWidget::qt_metacast(_clname);
}

int SettingsConsoleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void SettingsConsoleWidget::stopExecutor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SettingsConsoleWidget::cmdCommandRequest(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
