
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tabledialog.h"
#include "findreplacedialog.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadSettings();

    QToolBar *toolbar = addToolBar("Text and Table Controls");

    toolbar->addWidget(new QLabel("Text:"));

    QFontComboBox *fontComboBox = new QFontComboBox(this);
    toolbar->addWidget(fontComboBox);
    connect(fontComboBox, &QFontComboBox::currentFontChanged, this, &MainWindow::onFontChanged);

    QSpinBox *fontSizeSpinBox = new QSpinBox(this);
    fontSizeSpinBox->setRange(8, 72);
    toolbar->addWidget(fontSizeSpinBox);
    connect(fontSizeSpinBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::onFontSizeChanged);
    QAction *textColorAction = toolbar->addAction("Text Color");
    connect(textColorAction, &QAction::triggered, this, &MainWindow::onTextColorChanged);

    toolbar->addSeparator();


    toolbar->addWidget(new QLabel("Table:"));

    QSpinBox *paddingSpinBox = new QSpinBox(this);
    paddingSpinBox->setRange(0, 50);
    paddingSpinBox->setValue(10);
    toolbar->addWidget(paddingSpinBox);
    connect(paddingSpinBox, QOverload<int>::of(&QSpinBox::valueChanged), this, &MainWindow::onPaddingChanged);


    QAction *cellColorAction = toolbar->addAction("Cell Color");
    connect(cellColorAction, &QAction::triggered, this, &MainWindow::onCellColorChanged);


    findReplaceDialog = new FindReplaceDialog(this);

    connect(findReplaceDialog, &FindReplaceDialog::findNext, this, &MainWindow::findNext);
    connect(findReplaceDialog, &FindReplaceDialog::replace, this, &MainWindow::replace);
    connect(findReplaceDialog, &FindReplaceDialog::replaceAll, this, &MainWindow::replaceAll);

    connect(ui->actionRestore, &QAction::triggered, this, &MainWindow::on_actionRestore_triggered);




    tempFile.setFileTemplate(QDir::temp().filePath("tempFile_X.txt"));
    tempFile.open();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{



    ui->textEdit->clear();

    currentFile.clear();

}


void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Open the file");
    QFile file(fileName);


    if(!file.open(QIODevice::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "Cannot open file: " + file.errorString());
        return;
    }

    currentFile = fileName;
    QTextStream in(&file);

    QString content = in.readAll();
    ui->textEdit->setHtml(content);

    file.close();
}

void MainWindow::saveToTempFile()
{
    if(!tempFile.isOpen()){
        if(!tempFile.open()){
            QMessageBox::warning(this, "Ошибка", "Не удалось открыть временный файл для записи.");
            return;
        }
    }

    QTextStream out(&tempFile);
    out << ui->textEdit->toHtml();
    tempFile.flush();
    tempFile.close();
}

void MainWindow::restoreFromTempFile()
{
    if(tempFile.isOpen()){
        tempFile.close();
    }

    if(!tempFile.open()){
        QMessageBox::warning(this, "Ошибка", "Не удалось открыть временный файл для записи.");
        return;
    }

    QTextStream in(&tempFile);
    QString content = in.readAll();
    ui->textEdit->setHtml(content);
    tempFile.close();
}

void MainWindow::on_actionSave_triggered()
{
    if(currentFile.isEmpty()){
        QString fileName = QFileDialog::getSaveFileName(this, "Файл сохранился");
        if(fileName.isEmpty()){
            return;
        }
        currentFile = fileName;
    }

    QFile file(currentFile);

    if (!file.open(QIODevice::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "Ошибка", "Файл не сохранился: " + file.errorString());
        return;
    }

    QTextStream out(&file);
    QString content = ui->textEdit->toHtml();
    out << content;
    file.close();
}

void MainWindow::on_actionClear_triggered()
{

    saveToTempFile();
    ui->textEdit->clear();


}

void MainWindow::on_actionRestore_triggered()
{
    restoreFromTempFile();
}



void MainWindow::on_addTableButton_clicked()
{

    TableDialog *dialog = new TableDialog(this);
    connect(dialog, &TableDialog::accepted, this, &MainWindow::on_tableDialogAccepted);

    dialog->exec();
}


void MainWindow::on_tableDialogAccepted()
{
    TableDialog *dialog = qobject_cast<TableDialog *>(sender());
    if (dialog) {
        int rows = dialog->getRowCount();
        int columns = dialog->getColumnCount();


        QString tableHtml = "<table border='1'>";
        for (int i = 0; i < rows; ++i) {
            tableHtml += "<tr>";
            for (int j = 0; j < columns; ++j) {
                tableHtml += "<td style='padding: 20px;'> </td>";
            }
            tableHtml += "</tr>";
        }
        tableHtml += "</table>";

        ui->textEdit->insertHtml(tableHtml);
    }
}


