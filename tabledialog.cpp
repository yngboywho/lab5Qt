#include "tabledialog.h"
#include "ui_tabledialog.h"

TableDialog::TableDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->rowSpinBox->setRange(1, 30);
    ui->columnsSpinBox->setRange(1, 30);
}

TableDialog::~TableDialog()
{
    delete ui;
}

int TableDialog::getRowCount() const
{

    return ui->rowSpinBox->value();
}

int TableDialog::getColumnCount() const
{
    return ui->columnsSpinBox->value();
}

void TableDialog::on_confirmButton_clicked()
{
    accept();
}
