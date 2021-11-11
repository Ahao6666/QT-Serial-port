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
    QByteArrayData data[17];
    char stringdata0[294];
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
QT_MOC_LITERAL(3, 19, 15), // "table_tab3_init"
QT_MOC_LITERAL(4, 35, 11), // "Timer0_Task"
QT_MOC_LITERAL(5, 47, 11), // "Timer1_Task"
QT_MOC_LITERAL(6, 59, 14), // "ButtonOpenPort"
QT_MOC_LITERAL(7, 74, 14), // "ButtonSendPort"
QT_MOC_LITERAL(8, 89, 10), // "ReciveDate"
QT_MOC_LITERAL(9, 100, 11), // "ButtonClear"
QT_MOC_LITERAL(10, 112, 14), // "ButtonStopShow"
QT_MOC_LITERAL(11, 127, 26), // "on_textBrowser_textChanged"
QT_MOC_LITERAL(12, 154, 9), // "AutoClear"
QT_MOC_LITERAL(13, 164, 32), // "on_pushButton_tab2_clear_clicked"
QT_MOC_LITERAL(14, 197, 31), // "on_pushButton_tab2_save_clicked"
QT_MOC_LITERAL(15, 229, 32), // "on_pushButton_tab3_clear_clicked"
QT_MOC_LITERAL(16, 262, 31) // "on_pushButton_tab3_save_clicked"

    },
    "Serial\0table_init\0\0table_tab3_init\0"
    "Timer0_Task\0Timer1_Task\0ButtonOpenPort\0"
    "ButtonSendPort\0ReciveDate\0ButtonClear\0"
    "ButtonStopShow\0on_textBrowser_textChanged\0"
    "AutoClear\0on_pushButton_tab2_clear_clicked\0"
    "on_pushButton_tab2_save_clicked\0"
    "on_pushButton_tab3_clear_clicked\0"
    "on_pushButton_tab3_save_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Serial[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    1,   93,    2, 0x08 /* Private */,
       7,    1,   96,    2, 0x08 /* Private */,
       8,    0,   99,    2, 0x08 /* Private */,
       9,    0,  100,    2, 0x08 /* Private */,
      10,    0,  101,    2, 0x08 /* Private */,
      11,    0,  102,    2, 0x08 /* Private */,
      12,    0,  103,    2, 0x08 /* Private */,
      13,    0,  104,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
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
        case 1: _t->table_tab3_init(); break;
        case 2: _t->Timer0_Task(); break;
        case 3: _t->Timer1_Task(); break;
        case 4: _t->ButtonOpenPort((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->ButtonSendPort((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->ReciveDate(); break;
        case 7: _t->ButtonClear(); break;
        case 8: _t->ButtonStopShow(); break;
        case 9: _t->on_textBrowser_textChanged(); break;
        case 10: _t->AutoClear(); break;
        case 11: _t->on_pushButton_tab2_clear_clicked(); break;
        case 12: _t->on_pushButton_tab2_save_clicked(); break;
        case 13: _t->on_pushButton_tab3_clear_clicked(); break;
        case 14: _t->on_pushButton_tab3_save_clicked(); break;
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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
