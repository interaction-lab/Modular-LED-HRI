/****************************************************************************
** Meta object code from reading C++ file 'behaviorwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BlockTrial/behaviorwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'behaviorwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BehaviorWindow_t {
    QByteArrayData data[9];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BehaviorWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BehaviorWindow_t qt_meta_stringdata_BehaviorWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "BehaviorWindow"
QT_MOC_LITERAL(1, 15, 20), // "on_setButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 23), // "on_cancelButton_clicked"
QT_MOC_LITERAL(4, 61, 27), // "on_patternMenuBox_activated"
QT_MOC_LITERAL(5, 89, 5), // "index"
QT_MOC_LITERAL(6, 95, 7), // "SetUpUi"
QT_MOC_LITERAL(7, 103, 23), // "on_color1Button_clicked"
QT_MOC_LITERAL(8, 127, 23) // "on_color2Button_clicked"

    },
    "BehaviorWindow\0on_setButton_clicked\0"
    "\0on_cancelButton_clicked\0"
    "on_patternMenuBox_activated\0index\0"
    "SetUpUi\0on_color1Button_clicked\0"
    "on_color2Button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BehaviorWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BehaviorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BehaviorWindow *_t = static_cast<BehaviorWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_setButton_clicked(); break;
        case 1: _t->on_cancelButton_clicked(); break;
        case 2: _t->on_patternMenuBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SetUpUi(); break;
        case 4: _t->on_color1Button_clicked(); break;
        case 5: _t->on_color2Button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject BehaviorWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BehaviorWindow.data,
      qt_meta_data_BehaviorWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BehaviorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BehaviorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BehaviorWindow.stringdata0))
        return static_cast<void*>(const_cast< BehaviorWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int BehaviorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
