/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../lab6/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_actionNew_triggered",
    "",
    "on_actionOpen_triggered",
    "on_actionSave_triggered",
    "on_actionClear_triggered",
    "on_addTableButton_clicked",
    "on_tableDialogAccepted",
    "onFontChanged",
    "font",
    "onFontSizeChanged",
    "size",
    "onTextColorChanged",
    "onPaddingChanged",
    "padding",
    "onCellColorChanged",
    "on_actionFind_triggered",
    "findNext",
    "replace",
    "replaceAll",
    "saveToTempFile",
    "restoreFromTempFile",
    "on_actionRestore_triggered",
    "closeEvent",
    "QCloseEvent*",
    "event",
    "saveSettings",
    "loadSettings",
    "onComboBoxChanged",
    "index",
    "onSpinBoxChanged",
    "value",
    "openGraphEditWidget"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[66];
    char stringdata0[11];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[24];
    char stringdata5[25];
    char stringdata6[26];
    char stringdata7[23];
    char stringdata8[14];
    char stringdata9[5];
    char stringdata10[18];
    char stringdata11[5];
    char stringdata12[19];
    char stringdata13[17];
    char stringdata14[8];
    char stringdata15[19];
    char stringdata16[24];
    char stringdata17[9];
    char stringdata18[8];
    char stringdata19[11];
    char stringdata20[15];
    char stringdata21[20];
    char stringdata22[27];
    char stringdata23[11];
    char stringdata24[13];
    char stringdata25[6];
    char stringdata26[13];
    char stringdata27[13];
    char stringdata28[18];
    char stringdata29[6];
    char stringdata30[17];
    char stringdata31[6];
    char stringdata32[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 22),  // "on_actionNew_triggered"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 23),  // "on_actionOpen_triggered"
        QT_MOC_LITERAL(59, 23),  // "on_actionSave_triggered"
        QT_MOC_LITERAL(83, 24),  // "on_actionClear_triggered"
        QT_MOC_LITERAL(108, 25),  // "on_addTableButton_clicked"
        QT_MOC_LITERAL(134, 22),  // "on_tableDialogAccepted"
        QT_MOC_LITERAL(157, 13),  // "onFontChanged"
        QT_MOC_LITERAL(171, 4),  // "font"
        QT_MOC_LITERAL(176, 17),  // "onFontSizeChanged"
        QT_MOC_LITERAL(194, 4),  // "size"
        QT_MOC_LITERAL(199, 18),  // "onTextColorChanged"
        QT_MOC_LITERAL(218, 16),  // "onPaddingChanged"
        QT_MOC_LITERAL(235, 7),  // "padding"
        QT_MOC_LITERAL(243, 18),  // "onCellColorChanged"
        QT_MOC_LITERAL(262, 23),  // "on_actionFind_triggered"
        QT_MOC_LITERAL(286, 8),  // "findNext"
        QT_MOC_LITERAL(295, 7),  // "replace"
        QT_MOC_LITERAL(303, 10),  // "replaceAll"
        QT_MOC_LITERAL(314, 14),  // "saveToTempFile"
        QT_MOC_LITERAL(329, 19),  // "restoreFromTempFile"
        QT_MOC_LITERAL(349, 26),  // "on_actionRestore_triggered"
        QT_MOC_LITERAL(376, 10),  // "closeEvent"
        QT_MOC_LITERAL(387, 12),  // "QCloseEvent*"
        QT_MOC_LITERAL(400, 5),  // "event"
        QT_MOC_LITERAL(406, 12),  // "saveSettings"
        QT_MOC_LITERAL(419, 12),  // "loadSettings"
        QT_MOC_LITERAL(432, 17),  // "onComboBoxChanged"
        QT_MOC_LITERAL(450, 5),  // "index"
        QT_MOC_LITERAL(456, 16),  // "onSpinBoxChanged"
        QT_MOC_LITERAL(473, 5),  // "value"
        QT_MOC_LITERAL(479, 19)   // "openGraphEditWidget"
    },
    "MainWindow",
    "on_actionNew_triggered",
    "",
    "on_actionOpen_triggered",
    "on_actionSave_triggered",
    "on_actionClear_triggered",
    "on_addTableButton_clicked",
    "on_tableDialogAccepted",
    "onFontChanged",
    "font",
    "onFontSizeChanged",
    "size",
    "onTextColorChanged",
    "onPaddingChanged",
    "padding",
    "onCellColorChanged",
    "on_actionFind_triggered",
    "findNext",
    "replace",
    "replaceAll",
    "saveToTempFile",
    "restoreFromTempFile",
    "on_actionRestore_triggered",
    "closeEvent",
    "QCloseEvent*",
    "event",
    "saveSettings",
    "loadSettings",
    "onComboBoxChanged",
    "index",
    "onSpinBoxChanged",
    "value",
    "openGraphEditWidget"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  158,    2, 0x08,    1 /* Private */,
       3,    0,  159,    2, 0x08,    2 /* Private */,
       4,    0,  160,    2, 0x08,    3 /* Private */,
       5,    0,  161,    2, 0x08,    4 /* Private */,
       6,    0,  162,    2, 0x08,    5 /* Private */,
       7,    0,  163,    2, 0x08,    6 /* Private */,
       8,    1,  164,    2, 0x08,    7 /* Private */,
      10,    1,  167,    2, 0x08,    9 /* Private */,
      12,    0,  170,    2, 0x08,   11 /* Private */,
      13,    1,  171,    2, 0x08,   12 /* Private */,
      15,    0,  174,    2, 0x08,   14 /* Private */,
      16,    0,  175,    2, 0x08,   15 /* Private */,
      17,    0,  176,    2, 0x08,   16 /* Private */,
      18,    0,  177,    2, 0x08,   17 /* Private */,
      19,    0,  178,    2, 0x08,   18 /* Private */,
      20,    0,  179,    2, 0x08,   19 /* Private */,
      21,    0,  180,    2, 0x08,   20 /* Private */,
      22,    0,  181,    2, 0x08,   21 /* Private */,
      23,    1,  182,    2, 0x08,   22 /* Private */,
      26,    0,  185,    2, 0x08,   24 /* Private */,
      27,    0,  186,    2, 0x08,   25 /* Private */,
      28,    1,  187,    2, 0x08,   26 /* Private */,
      30,    1,  190,    2, 0x08,   28 /* Private */,
      32,    0,  193,    2, 0x08,   30 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QFont,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_actionNew_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionOpen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSave_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionClear_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addTableButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableDialogAccepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onFontChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QFont &, std::false_type>,
        // method 'onFontSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onTextColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPaddingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onCellColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFind_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'findNext'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'replace'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'replaceAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveToTempFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'restoreFromTempFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRestore_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCloseEvent *, std::false_type>,
        // method 'saveSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onComboBoxChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onSpinBoxChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'openGraphEditWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionNew_triggered(); break;
        case 1: _t->on_actionOpen_triggered(); break;
        case 2: _t->on_actionSave_triggered(); break;
        case 3: _t->on_actionClear_triggered(); break;
        case 4: _t->on_addTableButton_clicked(); break;
        case 5: _t->on_tableDialogAccepted(); break;
        case 6: _t->onFontChanged((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        case 7: _t->onFontSizeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->onTextColorChanged(); break;
        case 9: _t->onPaddingChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->onCellColorChanged(); break;
        case 11: _t->on_actionFind_triggered(); break;
        case 12: _t->findNext(); break;
        case 13: _t->replace(); break;
        case 14: _t->replaceAll(); break;
        case 15: _t->saveToTempFile(); break;
        case 16: _t->restoreFromTempFile(); break;
        case 17: _t->on_actionRestore_triggered(); break;
        case 18: _t->closeEvent((*reinterpret_cast< std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        case 19: _t->saveSettings(); break;
        case 20: _t->loadSettings(); break;
        case 21: _t->onComboBoxChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->onSpinBoxChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->openGraphEditWidget(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 24;
    }
    return _id;
}
QT_WARNING_POP
