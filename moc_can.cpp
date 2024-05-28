/****************************************************************************
** Meta object code from reading C++ file 'can.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Test_Bench/can.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'can.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CAN_t {
    QByteArrayData data[14];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CAN_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CAN_t qt_meta_stringdata_CAN = {
    {
QT_MOC_LITERAL(0, 0, 3), // "CAN"
QT_MOC_LITERAL(1, 4, 15), // "messageReceived"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 14), // "messageDetails"
QT_MOC_LITERAL(4, 36, 11), // "messageSend"
QT_MOC_LITERAL(5, 48, 7), // "message"
QT_MOC_LITERAL(6, 56, 17), // "message_extracted"
QT_MOC_LITERAL(7, 74, 18), // "initializedChanged"
QT_MOC_LITERAL(8, 93, 10), // "readSocket"
QT_MOC_LITERAL(9, 104, 6), // "socket"
QT_MOC_LITERAL(10, 111, 11), // "sendMessage"
QT_MOC_LITERAL(11, 123, 5), // "canId"
QT_MOC_LITERAL(12, 129, 4), // "data"
QT_MOC_LITERAL(13, 134, 11) // "initialized"

    },
    "CAN\0messageReceived\0\0messageDetails\0"
    "messageSend\0message\0message_extracted\0"
    "initializedChanged\0readSocket\0socket\0"
    "sendMessage\0canId\0data\0initialized"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CAN[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       7,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   54,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    2,   57,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       3,

       0        // eod
};

void CAN::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CAN *_t = static_cast<CAN *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageReceived((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->messageSend((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->message_extracted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->initializedChanged(); break;
        case 4: _t->readSocket((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->sendMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CAN::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CAN::messageReceived)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CAN::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CAN::messageSend)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CAN::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CAN::message_extracted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CAN::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CAN::initializedChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CAN *_t = static_cast<CAN *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->initialized(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CAN *_t = static_cast<CAN *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInitialized(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject CAN::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CAN.data,
      qt_meta_data_CAN,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CAN::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CAN::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CAN.stringdata0))
        return static_cast<void*>(const_cast< CAN*>(this));
    return QObject::qt_metacast(_clname);
}

int CAN::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CAN::messageReceived(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CAN::messageSend(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CAN::message_extracted(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CAN::initializedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
