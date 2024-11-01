/********************************************************************************
** Form generated from reading UI file 'tabledialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEDIALOG_H
#define UI_TABLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_tabledialog
{
public:

    void setupUi(QDialog *tabledialog)
    {
        if (tabledialog->objectName().isEmpty())
            tabledialog->setObjectName("tabledialog");
        tabledialog->resize(400, 300);

        retranslateUi(tabledialog);

        QMetaObject::connectSlotsByName(tabledialog);
    } // setupUi

    void retranslateUi(QDialog *tabledialog)
    {
        tabledialog->setWindowTitle(QCoreApplication::translate("tabledialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tabledialog: public Ui_tabledialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEDIALOG_H
