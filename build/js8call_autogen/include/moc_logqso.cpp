/****************************************************************************
** Meta object code from reading C++ file 'logqso.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../logqso.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logqso.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6LogQSOE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN6LogQSOE = QtMocHelpers::stringData(
    "LogQSO",
    "acceptQSO",
    "",
    "QSO_date_off",
    "call",
    "grid",
    "Radio::Frequency",
    "dial_freq",
    "mode",
    "submode",
    "rpt_sent",
    "rpt_received",
    "comments",
    "name",
    "QSO_date_on",
    "operator_call",
    "my_call",
    "my_grid",
    "ADIF",
    "QVariantMap",
    "additionalFields",
    "accept",
    "acceptText",
    "text",
    "currentCall",
    "createAdditionalField",
    "key",
    "value",
    "resetAdditionalFields",
    "collectAdditionalFields",
    "on_add_new_field_button_pressed",
    "on_start_now_button_pressed",
    "on_end_now_button_pressed"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN6LogQSOE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,   16,   86,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      21,    0,  119,    2, 0x0a,   18 /* Public */,
      22,    1,  120,    2, 0x0a,   19 /* Public */,
      24,    0,  123,    2, 0x0a,   21 /* Public */,
      25,    2,  124,    2, 0x08,   22 /* Private */,
      25,    1,  129,    2, 0x28,   25 /* Private | MethodCloned */,
      25,    0,  132,    2, 0x28,   27 /* Private | MethodCloned */,
      28,    0,  133,    2, 0x08,   28 /* Private */,
      29,    0,  134,    2, 0x08,   29 /* Private */,
      30,    0,  135,    2, 0x08,   30 /* Private */,
      31,    0,  136,    2, 0x08,   31 /* Private */,
      32,    0,  137,    2, 0x08,   32 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDateTime, QMetaType::QString, QMetaType::QString, 0x80000000 | 6, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QDateTime, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray, 0x80000000 | 19,    3,    4,    5,    7,    8,    9,   10,   11,   12,   13,   14,   15,   16,   17,   18,   20,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   23,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   26,   27,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LogQSO::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ZN6LogQSOE.offsetsAndSizes,
    qt_meta_data_ZN6LogQSOE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN6LogQSOE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LogQSO, std::true_type>,
        // method 'acceptQSO'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDateTime const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<Radio::Frequency, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDateTime const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray const &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariantMap const &, std::false_type>,
        // method 'accept'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'acceptText'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'currentCall'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'createAdditionalField'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'createAdditionalField'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'createAdditionalField'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetAdditionalFields'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'collectAdditionalFields'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        // method 'on_add_new_field_button_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_start_now_button_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_end_now_button_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LogQSO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LogQSO *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->acceptQSO((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<Radio::Frequency>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[9])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[10])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[11])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[12])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[13])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[14])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[15])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[16]))); break;
        case 1: _t->accept(); break;
        case 2: { bool _r = _t->acceptText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->currentCall();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->createAdditionalField((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->createAdditionalField((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->createAdditionalField(); break;
        case 7: _t->resetAdditionalFields(); break;
        case 8: { QVariantMap _r = _t->collectAdditionalFields();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->on_add_new_field_button_pressed(); break;
        case 10: _t->on_start_now_button_pressed(); break;
        case 11: _t->on_end_now_button_pressed(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Radio::Frequency >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (LogQSO::*)(QDateTime const & , QString const & , QString const & , Radio::Frequency , QString const & , QString const & , QString const & , QString const & , QString const & , QString const & , QDateTime const & , QString const & , QString const & , QString const & , QByteArray const & , QVariantMap const & );
            if (_q_method_type _q_method = &LogQSO::acceptQSO; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *LogQSO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogQSO::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN6LogQSOE.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LogQSO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void LogQSO::acceptQSO(QDateTime const & _t1, QString const & _t2, QString const & _t3, Radio::Frequency _t4, QString const & _t5, QString const & _t6, QString const & _t7, QString const & _t8, QString const & _t9, QString const & _t10, QDateTime const & _t11, QString const & _t12, QString const & _t13, QString const & _t14, QByteArray const & _t15, QVariantMap const & _t16)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t10))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t11))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t12))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t13))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t14))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t15))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t16))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
