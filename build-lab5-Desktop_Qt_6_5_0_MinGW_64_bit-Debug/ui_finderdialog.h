/********************************************************************************
** Form generated from reading UI file 'finderdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDERDIALOG_H
#define UI_FINDERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_finderdialog
{
public:

    void setupUi(QDialog *finderdialog)
    {
        if (finderdialog->objectName().isEmpty())
            finderdialog->setObjectName("finderdialog");
        finderdialog->resize(400, 300);

        retranslateUi(finderdialog);

        QMetaObject::connectSlotsByName(finderdialog);
    } // setupUi

    void retranslateUi(QDialog *finderdialog)
    {
        finderdialog->setWindowTitle(QCoreApplication::translate("finderdialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class finderdialog: public Ui_finderdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDERDIALOG_H
