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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_finderdialog
{
public:
    QCheckBox *caseCheckBox;
    QPushButton *findNextButton;
    QPushButton *replaceAllButton;
    QPushButton *replaceButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *findLineEdit;
    QLineEdit *replaceLineEdit;

    void setupUi(QDialog *finderdialog)
    {
        if (finderdialog->objectName().isEmpty())
            finderdialog->setObjectName("finderdialog");
        finderdialog->resize(400, 111);
        caseCheckBox = new QCheckBox(finderdialog);
        caseCheckBox->setObjectName("caseCheckBox");
        caseCheckBox->setGeometry(QRect(10, 10, 128, 26));
        findNextButton = new QPushButton(finderdialog);
        findNextButton->setObjectName("findNextButton");
        findNextButton->setGeometry(QRect(160, 30, 83, 29));
        replaceAllButton = new QPushButton(finderdialog);
        replaceAllButton->setObjectName("replaceAllButton");
        replaceAllButton->setGeometry(QRect(250, 30, 103, 29));
        replaceButton = new QPushButton(finderdialog);
        replaceButton->setObjectName("replaceButton");
        replaceButton->setGeometry(QRect(160, 70, 83, 29));
        widget = new QWidget(finderdialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 40, 127, 65));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        findLineEdit = new QLineEdit(widget);
        findLineEdit->setObjectName("findLineEdit");

        verticalLayout->addWidget(findLineEdit);

        replaceLineEdit = new QLineEdit(widget);
        replaceLineEdit->setObjectName("replaceLineEdit");

        verticalLayout->addWidget(replaceLineEdit);


        retranslateUi(finderdialog);

        QMetaObject::connectSlotsByName(finderdialog);
    } // setupUi

    void retranslateUi(QDialog *finderdialog)
    {
        finderdialog->setWindowTitle(QCoreApplication::translate("finderdialog", "Dialog", nullptr));
        caseCheckBox->setText(QCoreApplication::translate("finderdialog", "\320\242\320\276\321\207\320\275\321\213\320\271 \320\277\320\276\320\270\321\201\320\272", nullptr));
        findNextButton->setText(QCoreApplication::translate("finderdialog", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        replaceAllButton->setText(QCoreApplication::translate("finderdialog", "\320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214 \320\262\321\201\320\265", nullptr));
        replaceButton->setText(QCoreApplication::translate("finderdialog", "\320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class finderdialog: public Ui_finderdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDERDIALOG_H
