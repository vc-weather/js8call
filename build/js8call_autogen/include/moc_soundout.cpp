/****************************************************************************
** Meta object code from reading C++ file 'soundout.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../soundout.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'soundout.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11SoundOutputE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11SoundOutputE = QtMocHelpers::stringData(
    "SoundOutput",
    "error",
    "",
    "message",
    "status",
    "setFormat",
    "QAudioDevice",
    "device",
    "channels",
    "msBuffered",
    "setDeviceFormat",
    "QAudioFormat",
    "format",
    "restart",
    "QIODevice*",
    "suspend",
    "resume",
    "reset",
    "stop",
    "setAttenuation",
    "resetAttenuation",
    "handleStateChanged",
    "QAudio::State"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11SoundOutputE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   98,    2, 0x106,    1 /* Public | MethodIsConst  */,
       4,    1,  101,    2, 0x106,    3 /* Public | MethodIsConst  */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    3,  104,    2, 0x0a,    5 /* Public */,
       5,    2,  111,    2, 0x2a,    9 /* Public | MethodCloned */,
      10,    3,  116,    2, 0x0a,   12 /* Public */,
      10,    2,  123,    2, 0x2a,   16 /* Public | MethodCloned */,
      13,    1,  128,    2, 0x0a,   19 /* Public */,
      15,    0,  131,    2, 0x0a,   21 /* Public */,
      16,    0,  132,    2, 0x0a,   22 /* Public */,
      17,    0,  133,    2, 0x0a,   23 /* Public */,
      18,    0,  134,    2, 0x0a,   24 /* Public */,
      19,    1,  135,    2, 0x0a,   25 /* Public */,
      20,    0,  138,    2, 0x0a,   27 /* Public */,
      21,    1,  139,    2, 0x108,   28 /* Private | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::UInt, QMetaType::UInt,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 6, QMetaType::UInt,    7,    8,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 11, QMetaType::UInt,    7,   12,    9,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 11,    7,   12,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject SoundOutput::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN11SoundOutputE.offsetsAndSizes,
    qt_meta_data_ZN11SoundOutputE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11SoundOutputE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SoundOutput, std::true_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'status'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'setFormat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAudioDevice const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'setFormat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAudioDevice const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'setDeviceFormat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAudioDevice const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAudioFormat const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned , std::false_type>,
        // method 'setDeviceFormat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAudioDevice const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAudioFormat const &, std::false_type>,
        // method 'restart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QIODevice *, std::false_type>,
        // method 'suspend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setAttenuation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'resetAttenuation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAudio::State, std::false_type>
    >,
    nullptr
} };

void SoundOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SoundOutput *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->status((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->setFormat((*reinterpret_cast< std::add_pointer_t<QAudioDevice>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[3]))); break;
        case 3: _t->setFormat((*reinterpret_cast< std::add_pointer_t<QAudioDevice>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[2]))); break;
        case 4: _t->setDeviceFormat((*reinterpret_cast< std::add_pointer_t<QAudioDevice>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAudioFormat>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[3]))); break;
        case 5: _t->setDeviceFormat((*reinterpret_cast< std::add_pointer_t<QAudioDevice>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAudioFormat>>(_a[2]))); break;
        case 6: _t->restart((*reinterpret_cast< std::add_pointer_t<QIODevice*>>(_a[1]))); break;
        case 7: _t->suspend(); break;
        case 8: _t->resume(); break;
        case 9: _t->reset(); break;
        case 10: _t->stop(); break;
        case 11: _t->setAttenuation((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 12: _t->resetAttenuation(); break;
        case 13: _t->handleStateChanged((*reinterpret_cast< std::add_pointer_t<QAudio::State>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAudioFormat >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAudioFormat >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QIODevice* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (SoundOutput::*)(QString ) const;
            if (_q_method_type _q_method = &SoundOutput::error; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (SoundOutput::*)(QString ) const;
            if (_q_method_type _q_method = &SoundOutput::status; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *SoundOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoundOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11SoundOutputE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SoundOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SoundOutput::error(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< SoundOutput *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SoundOutput::status(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< SoundOutput *>(this), &staticMetaObject, 1, _a);
}
QT_WARNING_POP
