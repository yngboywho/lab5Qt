/********************************************************************************
** Form generated from reading UI file 'formsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSDIALOG_H
#define UI_FORMSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormsDialog
{
public:
    QPushButton *fillColorButton;
    QDialogButtonBox *buttonBox;
    QCheckBox *checkBox;
    QPushButton *strokeColorButton;
    QStackedWidget *stackedWidget;
    QWidget *rectanglePage;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *rectangleWidthSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *rectangleHeightSpinBox;
    QWidget *circlePage;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *circleSpinBox;
    QWidget *trianglePage;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *triSideASpinBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpinBox *triSideBSpinBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpinBox *triSideCSpinBox;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *formsComboBox;

    void setupUi(QDialog *FormsDialog)
    {
        if (FormsDialog->objectName().isEmpty())
            FormsDialog->setObjectName("FormsDialog");
        FormsDialog->resize(492, 440);
        fillColorButton = new QPushButton(FormsDialog);
        fillColorButton->setObjectName("fillColorButton");
        fillColorButton->setGeometry(QRect(20, 170, 101, 29));
        buttonBox = new QDialogButtonBox(FormsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(20, 260, 167, 29));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        checkBox = new QCheckBox(FormsDialog);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(20, 140, 93, 26));
        strokeColorButton = new QPushButton(FormsDialog);
        strokeColorButton->setObjectName("strokeColorButton");
        strokeColorButton->setGeometry(QRect(20, 210, 121, 29));
        stackedWidget = new QStackedWidget(FormsDialog);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(220, 60, 261, 111));
        rectanglePage = new QWidget();
        rectanglePage->setObjectName("rectanglePage");
        layoutWidget = new QWidget(rectanglePage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 20, 122, 88));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        rectangleWidthSpinBox = new QSpinBox(layoutWidget);
        rectangleWidthSpinBox->setObjectName("rectangleWidthSpinBox");

        horizontalLayout_2->addWidget(rectangleWidthSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        rectangleHeightSpinBox = new QSpinBox(layoutWidget);
        rectangleHeightSpinBox->setObjectName("rectangleHeightSpinBox");

        horizontalLayout_3->addWidget(rectangleHeightSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(rectanglePage);
        circlePage = new QWidget();
        circlePage->setObjectName("circlePage");
        layoutWidget1 = new QWidget(circlePage);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 30, 120, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        circleSpinBox = new QSpinBox(layoutWidget1);
        circleSpinBox->setObjectName("circleSpinBox");

        horizontalLayout_4->addWidget(circleSpinBox);

        stackedWidget->addWidget(circlePage);
        trianglePage = new QWidget();
        trianglePage->setObjectName("trianglePage");
        layoutWidget2 = new QWidget(trianglePage);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(30, 0, 122, 109));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        triSideASpinBox = new QSpinBox(layoutWidget2);
        triSideASpinBox->setObjectName("triSideASpinBox");

        horizontalLayout_5->addWidget(triSideASpinBox);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        triSideBSpinBox = new QSpinBox(layoutWidget2);
        triSideBSpinBox->setObjectName("triSideBSpinBox");

        horizontalLayout_6->addWidget(triSideBSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName("label_7");

        horizontalLayout_7->addWidget(label_7);

        triSideCSpinBox = new QSpinBox(layoutWidget2);
        triSideCSpinBox->setObjectName("triSideCSpinBox");

        horizontalLayout_7->addWidget(triSideCSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(trianglePage);
        layoutWidget3 = new QWidget(FormsDialog);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(20, 80, 181, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget3);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        formsComboBox = new QComboBox(layoutWidget3);
        formsComboBox->addItem(QString());
        formsComboBox->addItem(QString());
        formsComboBox->addItem(QString());
        formsComboBox->setObjectName("formsComboBox");

        horizontalLayout->addWidget(formsComboBox);


        retranslateUi(FormsDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FormsDialog);
    } // setupUi

    void retranslateUi(QDialog *FormsDialog)
    {
        FormsDialog->setWindowTitle(QCoreApplication::translate("FormsDialog", "Dialog", nullptr));
        fillColorButton->setText(QCoreApplication::translate("FormsDialog", "select fill color", nullptr));
        checkBox->setText(QCoreApplication::translate("FormsDialog", "Fill Form", nullptr));
        strokeColorButton->setText(QCoreApplication::translate("FormsDialog", "select stroke color", nullptr));
        label_2->setText(QCoreApplication::translate("FormsDialog", "Width", nullptr));
        label_3->setText(QCoreApplication::translate("FormsDialog", "Height", nullptr));
        label_4->setText(QCoreApplication::translate("FormsDialog", "Radius", nullptr));
        label_5->setText(QCoreApplication::translate("FormsDialog", "side A", nullptr));
        label_6->setText(QCoreApplication::translate("FormsDialog", "side B", nullptr));
        label_7->setText(QCoreApplication::translate("FormsDialog", "side C", nullptr));
        label->setText(QCoreApplication::translate("FormsDialog", "select form", nullptr));
        formsComboBox->setItemText(0, QCoreApplication::translate("FormsDialog", "Rectangle", nullptr));
        formsComboBox->setItemText(1, QCoreApplication::translate("FormsDialog", "Circle", nullptr));
        formsComboBox->setItemText(2, QCoreApplication::translate("FormsDialog", "Triangle", nullptr));

    } // retranslateUi

};

namespace Ui {
    class FormsDialog: public Ui_FormsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSDIALOG_H
