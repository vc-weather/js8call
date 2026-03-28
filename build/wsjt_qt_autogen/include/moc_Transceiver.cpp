/****************************************************************************
** Meta object code from reading C++ file 'Transceiver.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Transceiver.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Transceiver.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN11TransceiverE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11TransceiverE = QtMocHelpers::stringData(
    "Transceiver",
    "resolution",
    "",
    "update",
    "Transceiver::TransceiverState",
    "sequence_number",
    "failure",
    "reason",
    "finished",
    "set",
    "start",
    "stop",
    "MODE",
    "UNK",
    "CW",
    "CW_R",
    "USB",
    "LSB",
    "FSK",
    "FSK_R",
    "DIG_U",
    "DIG_L",
    "AM",
    "FM",
    "DIG_FM"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11TransceiverE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       1,   77, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    2 /* Public */,
       3,    2,   59,    2, 0x106,    4 /* Public | MethodIsConst  */,
       6,    1,   64,    2, 0x106,    7 /* Public | MethodIsConst  */,
       8,    0,   67,    2, 0x106,    9 /* Public | MethodIsConst  */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    2,   68,    2, 0x0a,   10 /* Public */,
      10,    1,   73,    2, 0x0a,   13 /* Public */,
      11,    0,   76,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 4, QMetaType::UInt,    2,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::UInt,    2,    5,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      12,   12, 0x0,   12,   82,

 // enum data: key, value
      13, uint(Transceiver::UNK),
      14, uint(Transceiver::CW),
      15, uint(Transceiver::CW_R),
      16, uint(Transceiver::USB),
      17, uint(Transceiver::LSB),
      18, uint(Transceiver::FSK),
      19, uint(Transceiver::FSK_R),
      20, uint(Transceiver::DIG_U),
      21, uint(Transceiver::DIG_L),
      22, uint(Transceiver::AM),
      23, uint(Transceiver::FM),
      24, uint(Transceiver::DIG_FM),

       0        // eod
};

Q_CONSTINIT const QMetaObject Transceiver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN11TransceiverE.offsetsAndSizes,
    qt_meta_data_ZN11TransceiverE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11TransceiverE_t,
        // enum 'MODE'
        QtPrivate::TypeAndForceComplete<Transceiver::MODE, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Transceiver, std::true_type>,
        // method 'resolution'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Transceiver::TransceiverState const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'failure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'set'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Transceiver::TransceiverState const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Transceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Transceiver *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->resolution((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->update((*reinterpret_cast< std::add_pointer_t<Transceiver::TransceiverState>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[2]))); break;
        case 2: _t->failure((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->finished(); break;
        case 4: _t->set((*reinterpret_cast< std::add_pointer_t<Transceiver::TransceiverState>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[2]))); break;
        case 5: _t->start((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 6: _t->stop(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Transceiver::TransceiverState >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Transceiver::TransceiverState >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (Transceiver::*)(int );
            if (_q_method_type _q_method = &Transceiver::resolution; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (Transceiver::*)(Transceiver::TransceiverState const & , unsigned  ) const;
            if (_q_method_type _q_method = &Transceiver::update; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (Transceiver::*)(QString const & ) const;
            if (_q_method_type _q_method = &Transceiver::failure; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (Transceiver::*)() const;
            if (_q_method_type _q_method = &Transceiver::finished; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *Transceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Transceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11TransceiverE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Transceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Transceiver::resolution(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Transceiver::update(Transceiver::TransceiverState const & _t1, unsigned  _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< Transceiver *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Transceiver::failure(QString const & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Transceiver *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Transceiver::finished()const
{
    QMetaObject::activate(const_cast< Transceiver *>(this), &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
