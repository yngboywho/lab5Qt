#include "tabledialog.h"
#include "ui_tabledialog.h"

TableDialog::TableDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    ui->rowsSpinBox->setRange(1, 50);
    ui->columnsSpinBox->setRange(1, 50);

}

TableDialog::~TableDialog()
{
    delete ui;
}

int TableDialog::getRowCount() const
{

    return ui->rowsSpinBox->value();
}

int TableDialog::getColumnCount() const
{
    return ui->columnsSpinBox->value();
}

void TableDialog::on_okButton_clicked()
{
    accept();
}
