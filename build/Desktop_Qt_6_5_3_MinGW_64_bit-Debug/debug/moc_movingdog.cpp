/****************************************************************************
** Meta object code from reading C++ file 'movingdog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../lab5/movingdog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'movingdog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMovingDogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMovingDogENDCLASS = QtMocHelpers::stringData(
    "MovingDog",
    "move",
    "",
    "handleCollisions",
    "dogRect"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMovingDogENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[10];
    char stringdata1[5];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMovingDogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMovingDogENDCLASS_t qt_meta_stringdata_CLASSMovingDogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "MovingDog"
        QT_MOC_LITERAL(10, 4),  // "move"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 16),  // "handleCollisions"
        QT_MOC_LITERAL(33, 7)   // "dogRect"
    },
    "MovingDog",
    "move",
    "",
    "handleCollisions",
    "dogRect"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMovingDogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x0a,    1 /* Public */,
       3,    1,   27,    2, 0x0a,    2 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRectF,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject MovingDog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSMovingDogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMovingDogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMovingDogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MovingDog, std::true_type>,
        // method 'move'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleCollisions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>
    >,
    nullptr
} };

void MovingDog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MovingDog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->move(); break;
        case 1: _t->handleCollisions((*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MovingDog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MovingDog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMovingDogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsEllipseItem"))
        return static_cast< QGraphicsEllipseItem*>(this);
    return QObject::qt_metacast(_clname);
}

int MovingDog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
