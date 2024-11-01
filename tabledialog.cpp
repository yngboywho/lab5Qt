#include "tabledialog.h"
#include "ui_tabledialog.h"

tabledialog::tabledialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tabledialog)
{
    ui->setupUi(this);
}

tabledialog::~tabledialog()
{
    delete ui;
}
