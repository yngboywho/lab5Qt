
#include "mainwindow.h"
#include "ui_mainwindow.h"


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


