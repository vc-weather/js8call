/****************************************************************************
** Meta object code from reading C++ file 'soundin.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../soundin.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'soundin.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10SoundInputE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10SoundInputE = QtMocHelpers::stringData(
    "SoundInput",
    "error",
    "",
    "message",
    "status",
    "start",
    "QAudioDevice",
    "framesPerBuffer",
    "AudioDevice*",
    "sink",
    "AudioDevice::Channel",
    "suspend",
    "resume",
    "stop",
    "handleStateChanged",
    "QAudio::State"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10SoundInputE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x106,    1 /* Public | MethodIsConst  */,
       4,    1,   65,    2, 0x106,    3 /* Public | MethodIsConst  */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    4,   68,    2, 0x0a,    5 /* Public */,
       5,    3,   77,    2, 0x2a,   10 /* Public | MethodCloned */,
      11,    0,   84,    2, 0x0a,   14 /* Public */,
      12,    0,   85,    2, 0x0a,   15 /* Public */,
      13,    0,   86,    2, 0x0a,   16 /* Public */,
      14,    1,   87,    2, 0x108,   17 /* Private | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int, 0x80000000 | 8, 0x80000000 | 10,    2,    7,    9,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int, 0x80000000 | 8,    2,    7,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject SoundInput::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN10SoundInputE.offsetsAndSizes,
    qt_meta_data_ZN10SoundInputE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10SoundInputE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SoundInput, std::true_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'status'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAudioDevice const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioDevice *, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioDevice::Channel, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAudioDevice const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<AudioDevice *, std::false_type>,
        // method 'suspend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resume'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAudio::State, std::false_type>
    >,
    nullptr
} };

void SoundInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SoundInput *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->status((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->start((*reinterpret_cast< std::add_pointer_t<QAudioDevice>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<AudioDevice*>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<AudioDevice::Channel>>(_a[4]))); break;
        case 3: _t->start((*reinterpret_cast< std::add_pointer_t<QAudioDevice>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<AudioDevice*>>(_a[3]))); break;
        case 4: _t->suspend(); break;
        case 5: _t->resume(); break;
        case 6: _t->stop(); break;
        case 7: _t->handleStateChanged((*reinterpret_cast< std::add_pointer_t<QAudio::State>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< AudioDevice::Channel >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (SoundInput::*)(QString ) const;
            if (_q_method_type _q_method = &SoundInput::error; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (SoundInput::*)(QString ) const;
            if (_q_method_type _q_method = &SoundInput::status; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *SoundInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoundInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10SoundInputE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SoundInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SoundInput::error(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< SoundInput *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SoundInput::status(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< SoundInput *>(this), &staticMetaObject, 1, _a);
}
QT_WARNING_POP
