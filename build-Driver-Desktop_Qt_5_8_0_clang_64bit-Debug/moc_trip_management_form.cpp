/****************************************************************************
** Meta object code from reading C++ file 'trip_management_form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Driver/trip_management_form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trip_management_form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Trip_management_form_t {
    QByteArrayData data[7];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Trip_management_form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Trip_management_form_t qt_meta_stringdata_Trip_management_form = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Trip_management_form"
QT_MOC_LITERAL(1, 21, 22), // "on_back_button_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 27), // "on_show_reqs_button_clicked"
QT_MOC_LITERAL(4, 73, 24), // "on_accept_button_clicked"
QT_MOC_LITERAL(5, 98, 25), // "on_arrived_button_clicked"
QT_MOC_LITERAL(6, 124, 24) // "on_finish_button_clicked"

    },
    "Trip_management_form\0on_back_button_clicked\0"
    "\0on_show_reqs_button_clicked\0"
    "on_accept_button_clicked\0"
    "on_arrived_button_clicked\0"
    "on_finish_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Trip_management_form[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Trip_management_form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Trip_management_form *_t = static_cast<Trip_management_form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_back_button_clicked(); break;
        case 1: _t->on_show_reqs_button_clicked(); break;
        case 2: _t->on_accept_button_clicked(); break;
        case 3: _t->on_arrived_button_clicked(); break;
        case 4: _t->on_finish_button_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Trip_management_form::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Trip_management_form.data,
      qt_meta_data_Trip_management_form,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Trip_management_form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Trip_management_form::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Trip_management_form.stringdata0))
        return static_cast<void*>(const_cast< Trip_management_form*>(this));
    return QWidget::qt_metacast(_clname);
}

int Trip_management_form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
