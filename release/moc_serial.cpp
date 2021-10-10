/****************************************************************************
** Meta object code from reading C++ file 'serial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../serial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Serial_t {
    QByteArrayData data[14];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Serial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Serial_t qt_meta_stringdata_Serial = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Serial"
QT_MOC_LITERAL(1, 7, 10), // "table_init"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 11), // "Timer0_Task"
QT_MOC_LITERAL(4, 31, 11), // "Timer1_Task"
QT_MOC_LITERAL(5, 43, 14), // "ButtonOpenPort"
QT_MOC_LITERAL(6, 58, 14), // "ButtonSendPort"
QT_MOC_LITERAL(7, 73, 10), // "ReciveDate"
QT_MOC_LITERAL(8, 84, 11), // "ButtonClear"
QT_MOC_LITERAL(9, 96, 14), // "ButtonStopShow"
QT_MOC_LITERAL(10, 111, 26), // "on_textBrowser_textChanged"
QT_MOC_LITERAL(11, 138, 9), // "AutoClear"
QT_MOC_LITERAL(12, 148, 32), // "on_pushButton_tab2_clear_clicked"
QT_MOC_LITERAL(13, 181, 31) // "on_pushButton_tab2_save_clicked"

    },
    "Serial\0table_init\0\0Timer0_Task\0"
    "Timer1_Task\0ButtonOpenPort\0ButtonSendPort\0"
    "ReciveDate\0ButtonClear\0ButtonStopShow\0"
    "on_textBrowser_textChanged\0AutoClear\0"
    "on_pushButton_tab2_clear_clicked\0"
    "on_pushButton_tab2_save_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Serial[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    1,   77,    2, 0x08 /* Private */,
       6,    1,   80,    2, 0x08 /* Private */,
       7,    0,   83,    2, 0x08 /* Private */,
       8,    0,   84,    2, 0x08 /* Private */,
       9,    0,   85,    2, 0x08 /* Private */,
      10,    0,   86,    2, 0x08 /* Private */,
      11,    0,   87,    2, 0x08 /* Private */,
      12,    0,   88,    2, 0x08 /* Private */,
      13,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Serial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Serial *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->table_init(); break;
        case 1: _t->Timer0_Task(); break;
        case 2: _t->Timer1_Task(); break;
        case 3: _t->ButtonOpenPort((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->ButtonSendPort((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->ReciveDate(); break;
        case 6: _t->ButtonClear(); break;
        case 7: _t->ButtonStopShow(); break;
        case 8: _t->on_textBrowser_textChanged(); break;
        case 9: _t->AutoClear(); break;
        case 10: _t->on_pushButton_tab2_clear_clicked(); break;
        case 11: _t->on_pushButton_tab2_save_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Serial::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Serial.data,
    qt_meta_data_Serial,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Serial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Serial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Serial.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Serial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
