#include "formsdialog.h"
#include "ui_formsdialog.h"
#include <QColorDialog>

FormsDialog::FormsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FormsDialog),
    fillColor(Qt::white),
    strokeColor(Qt::black),
    isSignalEmitted(false)
{
    ui->setupUi(this);
    connect(ui->formsComboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(onFormsChanged(int)));
    ui->stackedWidget->setCurrentIndex(0);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &FormsDialog::on_buttonBox_accepted);
}

FormsDialog::~FormsDialog()
{
    delete ui;
}

QString FormsDialog::getFormsType() const {
    return ui->formsComboBox->currentText();
}

QSize FormsDialog::getFormsSize() const {
    if (getFormsType() == "Прямоугольник") {
        int width = ui->rectangleWidthSpinBox->value();
        int height = ui->rectangleHeightSpinBox->value();
        return QSize(width, height);
    } else if (getFormsType() == "Круг") {
        int radius = ui->circleSpinBox->value();
        return QSize(radius, radius);
    } else if (getFormsType() == "Треугольник") {
        return QSize();
    }
    return QSize();
}


QColor FormsDialog::getFillColor() const {
    return fillColor;
}


QColor FormsDialog::getStrokeColor() const {
    return strokeColor;
}


bool FormsDialog::isFilled() const {
    return ui->checkBox->isChecked();
}


void FormsDialog::on_fillColorButton_clicked()
{
    QColor color = QColorDialog::getColor(fillColor, this, "Выберите цвет заливки");
    if (color.isValid()) {
        fillColor = color;
    }
}


void FormsDialog::on_strokeColorButton_clicked()
{
    QColor color = QColorDialog::getColor(strokeColor, this, "Выберите цвет обводки");
    if (color.isValid()) {
        strokeColor = color;
    }
}


void FormsDialog::onFormsChanged(int index)
{
    ui->stackedWidget->setCurrentIndex(index);
}


QList<int> FormsDialog::getTriangleSides() const {
    return {ui->triSideASpinBox->value(),
            ui->triSideBSpinBox->value(),
            ui->triSideCSpinBox->value()};
}

void FormsDialog::on_buttonBox_accepted()
{
    if (isSignalEmitted) {
        return;
    }

    QString formsType = getFormsType();
    QSize formsSize = getFormsSize();
    QColor fillColor = getFillColor();
    QColor strokeColor = getStrokeColor();
    bool filled = isFilled();
    QList<int> triangleSides = getTriangleSides();

    emit formsCreated(formsType, formsSize, fillColor, strokeColor, filled, triangleSides);
    isSignalEmitted = true;
    QDialog::accept();
}

void FormsDialog::setSignalEmitted(bool value)
{
    isSignalEmitted = value;
}
