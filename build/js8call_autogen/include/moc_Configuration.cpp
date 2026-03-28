/****************************************************************************
** Meta object code from reading C++ file 'Configuration.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Configuration.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Configuration.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13ConfigurationE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13ConfigurationE = QtMocHelpers::stringData(
    "Configuration",
    "test_notify",
    "",
    "key",
    "gui_text_font_changed",
    "tx_text_font_changed",
    "rx_text_font_changed",
    "compose_text_font_changed",
    "table_font_changed",
    "colors_changed",
    "udp_server_name_changed",
    "name",
    "udp_server_port_changed",
    "port_type",
    "port",
    "tcp_server_changed",
    "host",
    "tcp_server_port_changed",
    "tcp_max_connections_changed",
    "n",
    "band_schedule_changed",
    "StationList&",
    "stations",
    "auto_switch_bands_changed",
    "auto_switch_bands",
    "manual_band_hop_requested",
    "StationList::Station",
    "station",
    "transceiver_update",
    "Transceiver::TransceiverState",
    "transceiver_failure",
    "reason",
    "enumerating_audio_devices",
    "transceiver_frequency",
    "Frequency",
    "transceiver_tx_frequency",
    "transceiver_mode",
    "MODE",
    "transceiver_ptt",
    "sync_transceiver",
    "force_signal",
    "enforce_mode_and_split",
    "invalidate_audio_input_device",
    "error",
    "invalidate_audio_output_device",
    "invalidate_notification_audio_output_device",
    "DataMode",
    "data_mode_none",
    "data_mode_USB",
    "data_mode_data"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN13ConfigurationE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       1,  276, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  194,    2, 0x06,    2 /* Public */,
       4,    1,  197,    2, 0x06,    4 /* Public */,
       5,    1,  200,    2, 0x06,    6 /* Public */,
       6,    1,  203,    2, 0x06,    8 /* Public */,
       7,    1,  206,    2, 0x06,   10 /* Public */,
       8,    1,  209,    2, 0x06,   12 /* Public */,
       9,    0,  212,    2, 0x06,   14 /* Public */,
      10,    1,  213,    2, 0x06,   15 /* Public */,
      12,    1,  216,    2, 0x06,   17 /* Public */,
      15,    1,  219,    2, 0x06,   19 /* Public */,
      17,    1,  222,    2, 0x06,   21 /* Public */,
      18,    1,  225,    2, 0x06,   23 /* Public */,
      20,    1,  228,    2, 0x06,   25 /* Public */,
      23,    1,  231,    2, 0x06,   27 /* Public */,
      25,    1,  234,    2, 0x06,   29 /* Public */,
      28,    1,  237,    2, 0x106,   31 /* Public | MethodIsConst  */,
      30,    1,  240,    2, 0x106,   33 /* Public | MethodIsConst  */,
      32,    0,  243,    2, 0x06,   35 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      33,    1,  244,    2, 0x0a,   36 /* Public */,
      35,    1,  247,    2, 0x0a,   38 /* Public */,
      35,    0,  250,    2, 0x2a,   40 /* Public | MethodCloned */,
      36,    1,  251,    2, 0x0a,   41 /* Public */,
      38,    1,  254,    2, 0x0a,   43 /* Public */,
      38,    0,  257,    2, 0x2a,   45 /* Public | MethodCloned */,
      39,    2,  258,    2, 0x0a,   46 /* Public */,
      39,    1,  263,    2, 0x2a,   49 /* Public | MethodCloned */,
      39,    0,  266,    2, 0x2a,   51 /* Public | MethodCloned */,
      42,    1,  267,    2, 0x0a,   52 /* Public */,
      44,    1,  270,    2, 0x0a,   54 /* Public */,
      45,    1,  273,    2, 0x0a,   56 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QFont,    2,
    QMetaType::Void, QMetaType::QFont,    2,
    QMetaType::Void, QMetaType::QFont,    2,
    QMetaType::Void, QMetaType::QFont,    2,
    QMetaType::Void, QMetaType::QFont,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 29,    2,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 34,    2,
    QMetaType::Void, 0x80000000 | 34,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 37,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   40,   41,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void, QMetaType::QString,   43,
    QMetaType::Void, QMetaType::QString,   43,

 // enums: name, alias, flags, count, data
      46,   46, 0x0,    3,  281,

 // enum data: key, value
      47, uint(Configuration::data_mode_none),
      48, uint(Configuration::data_mode_USB),
      49, uint(Configuration::data_mode_data),

       0        // eod
};

Q_CONSTINIT const QMetaObject Configuration::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN13ConfigurationE.offsetsAndSizes,
    qt_meta_data_ZN13ConfigurationE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13ConfigurationE_t,
        // enum 'DataMode'
        QtPrivate::TypeAndForceComplete<Configuration::DataMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Configuration, std::true_type>,
        // method 'test_notify'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'gui_text_font_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QFont, std::false_type>,
        // method 'tx_text_font_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QFont, std::false_type>,
        // method 'rx_text_font_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QFont, std::false_type>,
        // method 'compose_text_font_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QFont, std::false_type>,
        // method 'table_font_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QFont, std::false_type>,
        // method 'colors_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'udp_server_name_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'udp_server_port_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<port_type, std::false_type>,
        // method 'tcp_server_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'tcp_server_port_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<port_type, std::false_type>,
        // method 'tcp_max_connections_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'band_schedule_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<StationList &, std::false_type>,
        // method 'auto_switch_bands_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'manual_band_hop_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<StationList::Station const, std::false_type>,
        // method 'transceiver_update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Transceiver::TransceiverState const &, std::false_type>,
        // method 'transceiver_failure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        // method 'enumerating_audio_devices'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'transceiver_frequency'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Frequency, std::false_type>,
        // method 'transceiver_tx_frequency'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Frequency, std::false_type>,
        // method 'transceiver_tx_frequency'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'transceiver_mode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<MODE, std::false_type>,
        // method 'transceiver_ptt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'transceiver_ptt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sync_transceiver'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sync_transceiver'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sync_transceiver'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'invalidate_audio_input_device'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'invalidate_audio_output_device'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'invalidate_notification_audio_output_device'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void Configuration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Configuration *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->test_notify((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->gui_text_font_changed((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        case 2: _t->tx_text_font_changed((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        case 3: _t->rx_text_font_changed((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        case 4: _t->compose_text_font_changed((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        case 5: _t->table_font_changed((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        case 6: _t->colors_changed(); break;
        case 7: _t->udp_server_name_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->udp_server_port_changed((*reinterpret_cast< std::add_pointer_t<port_type>>(_a[1]))); break;
        case 9: _t->tcp_server_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->tcp_server_port_changed((*reinterpret_cast< std::add_pointer_t<port_type>>(_a[1]))); break;
        case 11: _t->tcp_max_connections_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->band_schedule_changed((*reinterpret_cast< std::add_pointer_t<StationList&>>(_a[1]))); break;
        case 13: _t->auto_switch_bands_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->manual_band_hop_requested((*reinterpret_cast< std::add_pointer_t<StationList::Station>>(_a[1]))); break;
        case 15: _t->transceiver_update((*reinterpret_cast< std::add_pointer_t<Transceiver::TransceiverState>>(_a[1]))); break;
        case 16: _t->transceiver_failure((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->enumerating_audio_devices(); break;
        case 18: _t->transceiver_frequency((*reinterpret_cast< std::add_pointer_t<Frequency>>(_a[1]))); break;
        case 19: _t->transceiver_tx_frequency((*reinterpret_cast< std::add_pointer_t<Frequency>>(_a[1]))); break;
        case 20: _t->transceiver_tx_frequency(); break;
        case 21: _t->transceiver_mode((*reinterpret_cast< std::add_pointer_t<MODE>>(_a[1]))); break;
        case 22: _t->transceiver_ptt((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->transceiver_ptt(); break;
        case 24: _t->sync_transceiver((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 25: _t->sync_transceiver((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->sync_transceiver(); break;
        case 27: _t->invalidate_audio_input_device((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->invalidate_audio_output_device((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 29: _t->invalidate_notification_audio_output_device((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< StationList::Station >(); break;
            }
            break;
        case 15:
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
            using _q_method_type = void (Configuration::*)(const QString & );
            if (_q_method_type _q_method = &Configuration::test_notify; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (Configuration::*)(QFont );
            if (_q_method_type _q_method = &Configuration::gui_text_font_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (Configuration::*)(QFont );
            if (_q_method_type _q_method = &Configuration::tx_text_font_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (Configuration::*)(QFont );
            if (_q_method_type _q_method = &Configuration::rx_text_font_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (Configuration::*)(QFont );
            if (_q_method_type _q_method = &Configuration::compose_text_font_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (Configuration::*)(QFont );
            if (_q_method_type _q_method = &Configuration::table_font_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (Configuration::*)();
            if (_q_method_type _q_method = &Configuration::colors_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (Configuration::*)(QString const & );
            if (_q_method_type _q_method = &Configuration::udp_server_name_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (Configuration::*)(port_type );
            if (_q_method_type _q_method = &Configuration::udp_server_port_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (Configuration::*)(QString const & );
            if (_q_method_type _q_method = &Configuration::tcp_server_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (Configuration::*)(port_type );
            if (_q_method_type _q_method = &Configuration::tcp_server_port_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (Configuration::*)(int );
            if (_q_method_type _q_method = &Configuration::tcp_max_connections_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (Configuration::*)(StationList & );
            if (_q_method_type _q_method = &Configuration::band_schedule_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (Configuration::*)(bool );
            if (_q_method_type _q_method = &Configuration::auto_switch_bands_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (Configuration::*)(StationList::Station const );
            if (_q_method_type _q_method = &Configuration::manual_band_hop_requested; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (Configuration::*)(Transceiver::TransceiverState const & ) const;
            if (_q_method_type _q_method = &Configuration::transceiver_update; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _q_method_type = void (Configuration::*)(QString const & ) const;
            if (_q_method_type _q_method = &Configuration::transceiver_failure; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _q_method_type = void (Configuration::*)();
            if (_q_method_type _q_method = &Configuration::enumerating_audio_devices; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
    }
}

const QMetaObject *Configuration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Configuration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13ConfigurationE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Configuration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void Configuration::test_notify(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Configuration::gui_text_font_changed(QFont _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Configuration::tx_text_font_changed(QFont _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Configuration::rx_text_font_changed(QFont _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Configuration::compose_text_font_changed(QFont _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Configuration::table_font_changed(QFont _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Configuration::colors_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Configuration::udp_server_name_changed(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Configuration::udp_server_port_changed(port_type _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Configuration::tcp_server_changed(QString const & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Configuration::tcp_server_port_changed(port_type _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Configuration::tcp_max_connections_changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Configuration::band_schedule_changed(StationList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Configuration::auto_switch_bands_changed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Configuration::manual_band_hop_requested(StationList::Station const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Configuration::transceiver_update(Transceiver::TransceiverState const & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Configuration *>(this), &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Configuration::transceiver_failure(QString const & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< Configuration *>(this), &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Configuration::enumerating_audio_devices()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
