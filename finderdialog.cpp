#include "finderdialog.h"
#include "ui_finderdialog.h"

FinderDialog::FinderDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::finderdialog)
{
    ui->setupUi(this);


    connect(ui->findNextButton, &QPushButton::clicked, this, &FinderDialog::findNext);
    connect(ui->replaceButton, &QPushButton::clicked, this, &FinderDialog::replace);
    connect(ui->replaceAllButton, &QPushButton::clicked, this, &FinderDialog::replaceAll);
}

FinderDialog::~FinderDialog()
{
    delete ui;
}


QString FinderDialog::getSearchText() const
{
    return ui->findLineEdit->text();
}

QString FinderDialog::getReplaceText() const
{
    return ui->replaceLineEdit->text();
}

bool FinderDialog::isCaseSensitive() const
{
    return ui->caseCheckBox->isChecked();
}
