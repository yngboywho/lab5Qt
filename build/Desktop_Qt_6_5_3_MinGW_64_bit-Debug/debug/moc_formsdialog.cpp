/****************************************************************************
** Meta object code from reading C++ file 'formsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../lab6/formsdialog.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formsdialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFormsDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFormsDialogENDCLASS = QtMocHelpers::stringData(
    "FormsDialog",
    "formsCreated",
    "",
    "formsType",
    "formsSize",
    "fillColor",
    "strokeColor",
    "filled",
    "QList<int>",
    "triangleSides",
    "on_buttonBox_accepted",
    "on_fillColorButton_clicked",
    "on_strokeColorButton_clicked",
    "onFormsChanged",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFormsDialogENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[12];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[10];
    char stringdata5[10];
    char stringdata6[12];
    char stringdata7[7];
    char stringdata8[11];
    char stringdata9[14];
    char stringdata10[22];
    char stringdata11[27];
    char stringdata12[29];
    char stringdata13[15];
    char stringdata14[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFormsDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFormsDialogENDCLASS_t qt_meta_stringdata_CLASSFormsDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "FormsDialog"
        QT_MOC_LITERAL(12, 12),  // "formsCreated"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 9),  // "formsType"
        QT_MOC_LITERAL(36, 9),  // "formsSize"
        QT_MOC_LITERAL(46, 9),  // "fillColor"
        QT_MOC_LITERAL(56, 11),  // "strokeColor"
        QT_MOC_LITERAL(68, 6),  // "filled"
        QT_MOC_LITERAL(75, 10),  // "QList<int>"
        QT_MOC_LITERAL(86, 13),  // "triangleSides"
        QT_MOC_LITERAL(100, 21),  // "on_buttonBox_accepted"
        QT_MOC_LITERAL(122, 26),  // "on_fillColorButton_clicked"
        QT_MOC_LITERAL(149, 28),  // "on_strokeColorButton_clicked"
        QT_MOC_LITERAL(178, 14),  // "onFormsChanged"
        QT_MOC_LITERAL(193, 5)   // "index"
    },
    "FormsDialog",
    "formsCreated",
    "",
    "formsType",
    "formsSize",
    "fillColor",
    "strokeColor",
    "filled",
    "QList<int>",
    "triangleSides",
    "on_buttonBox_accepted",
    "on_fillColorButton_clicked",
    "on_strokeColorButton_clicked",
    "onFormsChanged",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFormsDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    6,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   57,    2, 0x08,    8 /* Private */,
      11,    0,   58,    2, 0x08,    9 /* Private */,
      12,    0,   59,    2, 0x08,   10 /* Private */,
      13,    1,   60,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QSize, QMetaType::QColor, QMetaType::QColor, QMetaType::Bool, 0x80000000 | 8,    3,    4,    5,    6,    7,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject FormsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSFormsDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFormsDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFormsDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FormsDialog, std::true_type>,
        // method 'formsCreated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSize &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<int> &, std::false_type>,
        // method 'on_buttonBox_accepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fillColorButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_strokeColorButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFormsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void FormsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->formsCreated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[6]))); break;
        case 1: _t->on_buttonBox_accepted(); break;
        case 2: _t->on_fillColorButton_clicked(); break;
        case 3: _t->on_strokeColorButton_clicked(); break;
        case 4: _t->onFormsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 5:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FormsDialog::*)(const QString & , const QSize & , const QColor & , const QColor & , bool , const QList<int> & );
            if (_t _q_method = &FormsDialog::formsCreated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *FormsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFormsDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FormsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void FormsDialog::formsCreated(const QString & _t1, const QSize & _t2, const QColor & _t3, const QColor & _t4, bool _t5, const QList<int> & _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
