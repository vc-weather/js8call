/****************************************************************************
** Meta object code from reading C++ file 'TransceiverFactory.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../TransceiverFactory.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransceiverFactory.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18TransceiverFactoryE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN18TransceiverFactoryE = QtMocHelpers::stringData(
    "TransceiverFactory",
    "DataBits",
    "seven_data_bits",
    "eight_data_bits",
    "default_data_bits",
    "StopBits",
    "one_stop_bit",
    "two_stop_bits",
    "default_stop_bits",
    "Handshake",
    "handshake_default",
    "handshake_none",
    "handshake_XonXoff",
    "handshake_hardware",
    "PTTMethod",
    "PTT_method_VOX",
    "PTT_method_CAT",
    "PTT_method_DTR",
    "PTT_method_RTS",
    "TXAudioSource",
    "TX_audio_source_front",
    "TX_audio_source_rear",
    "SplitMode",
    "split_mode_none",
    "split_mode_rig",
    "split_mode_emulate"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN18TransceiverFactoryE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       6,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    3,   44,
       5,    5, 0x0,    3,   50,
       9,    9, 0x0,    4,   56,
      14,   14, 0x0,    4,   64,
      19,   19, 0x0,    2,   72,
      22,   22, 0x0,    3,   76,

 // enum data: key, value
       2, uint(TransceiverFactory::seven_data_bits),
       3, uint(TransceiverFactory::eight_data_bits),
       4, uint(TransceiverFactory::default_data_bits),
       6, uint(TransceiverFactory::one_stop_bit),
       7, uint(TransceiverFactory::two_stop_bits),
       8, uint(TransceiverFactory::default_stop_bits),
      10, uint(TransceiverFactory::handshake_default),
      11, uint(TransceiverFactory::handshake_none),
      12, uint(TransceiverFactory::handshake_XonXoff),
      13, uint(TransceiverFactory::handshake_hardware),
      15, uint(TransceiverFactory::PTT_method_VOX),
      16, uint(TransceiverFactory::PTT_method_CAT),
      17, uint(TransceiverFactory::PTT_method_DTR),
      18, uint(TransceiverFactory::PTT_method_RTS),
      20, uint(TransceiverFactory::TX_audio_source_front),
      21, uint(TransceiverFactory::TX_audio_source_rear),
      23, uint(TransceiverFactory::split_mode_none),
      24, uint(TransceiverFactory::split_mode_rig),
      25, uint(TransceiverFactory::split_mode_emulate),

       0        // eod
};

Q_CONSTINIT const QMetaObject TransceiverFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN18TransceiverFactoryE.offsetsAndSizes,
    qt_meta_data_ZN18TransceiverFactoryE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN18TransceiverFactoryE_t,
        // enum 'DataBits'
        QtPrivate::TypeAndForceComplete<TransceiverFactory::DataBits, std::true_type>,
        // enum 'StopBits'
        QtPrivate::TypeAndForceComplete<TransceiverFactory::StopBits, std::true_type>,
        // enum 'Handshake'
        QtPrivate::TypeAndForceComplete<TransceiverFactory::Handshake, std::true_type>,
        // enum 'PTTMethod'
        QtPrivate::TypeAndForceComplete<TransceiverFactory::PTTMethod, std::true_type>,
        // enum 'TXAudioSource'
        QtPrivate::TypeAndForceComplete<TransceiverFactory::TXAudioSource, std::true_type>,
        // enum 'SplitMode'
        QtPrivate::TypeAndForceComplete<TransceiverFactory::SplitMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TransceiverFactory, std::true_type>
    >,
    nullptr
} };

void TransceiverFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TransceiverFactory *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *TransceiverFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransceiverFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN18TransceiverFactoryE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TransceiverFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
