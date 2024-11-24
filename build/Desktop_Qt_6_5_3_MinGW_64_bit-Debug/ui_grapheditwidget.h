/********************************************************************************
** Form generated from reading UI file 'grapheditwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHEDITWIDGET_H
#define UI_GRAPHEDITWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraphEditWidget
{
public:
    QGraphicsView *graphicsView;
    QPushButton *drawNameButton;
    QPushButton *deleteButton;
    QPushButton *colorSelect;
    QPushButton *addButton;
    QPushButton *backgroundButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *brushButton;
    QSpinBox *brushSizeSpinBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *eraserButton;
    QSpinBox *eraserSizeSpinBox;
    QComboBox *brushStyleComboBox;

    void setupUi(QDialog *GraphEditWidget)
    {
        if (GraphEditWidget->objectName().isEmpty())
            GraphEditWidget->setObjectName("GraphEditWidget");
        GraphEditWidget->resize(843, 501);
        graphicsView = new QGraphicsView(GraphEditWidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(10, 90, 821, 401));
        drawNameButton = new QPushButton(GraphEditWidget);
        drawNameButton->setObjectName("drawNameButton");
        drawNameButton->setGeometry(QRect(640, 50, 83, 29));
        deleteButton = new QPushButton(GraphEditWidget);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(740, 50, 83, 29));
        colorSelect = new QPushButton(GraphEditWidget);
        colorSelect->setObjectName("colorSelect");
        colorSelect->setGeometry(QRect(150, 10, 80, 29));
        addButton = new QPushButton(GraphEditWidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(740, 10, 83, 29));
        backgroundButton = new QPushButton(GraphEditWidget);
        backgroundButton->setObjectName("backgroundButton");
        backgroundButton->setGeometry(QRect(640, 10, 83, 29));
        layoutWidget = new QWidget(GraphEditWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 137, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        brushButton = new QPushButton(layoutWidget);
        brushButton->setObjectName("brushButton");

        horizontalLayout->addWidget(brushButton);

        brushSizeSpinBox = new QSpinBox(layoutWidget);
        brushSizeSpinBox->setObjectName("brushSizeSpinBox");

        horizontalLayout->addWidget(brushSizeSpinBox);

        layoutWidget1 = new QWidget(GraphEditWidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(330, 10, 137, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        eraserButton = new QPushButton(layoutWidget1);
        eraserButton->setObjectName("eraserButton");

        horizontalLayout_3->addWidget(eraserButton);

        eraserSizeSpinBox = new QSpinBox(layoutWidget1);
        eraserSizeSpinBox->setObjectName("eraserSizeSpinBox");

        horizontalLayout_3->addWidget(eraserSizeSpinBox);

        brushStyleComboBox = new QComboBox(GraphEditWidget);
        brushStyleComboBox->setObjectName("brushStyleComboBox");
        brushStyleComboBox->setGeometry(QRect(240, 10, 82, 28));

        retranslateUi(GraphEditWidget);

        QMetaObject::connectSlotsByName(GraphEditWidget);
    } // setupUi

    void retranslateUi(QDialog *GraphEditWidget)
    {
        GraphEditWidget->setWindowTitle(QCoreApplication::translate("GraphEditWidget", "Dialog", nullptr));
        drawNameButton->setText(QCoreApplication::translate("GraphEditWidget", "laba 6", nullptr));
        deleteButton->setText(QCoreApplication::translate("GraphEditWidget", "delete", nullptr));
        colorSelect->setText(QCoreApplication::translate("GraphEditWidget", "color", nullptr));
        addButton->setText(QCoreApplication::translate("GraphEditWidget", "add", nullptr));
        backgroundButton->setText(QCoreApplication::translate("GraphEditWidget", "change back", nullptr));
        brushButton->setText(QCoreApplication::translate("GraphEditWidget", "brush", nullptr));
        eraserButton->setText(QCoreApplication::translate("GraphEditWidget", "eraser", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphEditWidget: public Ui_GraphEditWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHEDITWIDGET_H
