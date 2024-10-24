
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

class EditorWindow : public QMainWindow {
    Q_OBJECT

public:
    EditorWindow(QWidget *parent = nullptr);
    ~EditorWindow();

private slots:
    void newFile();
    void openFile();
    void saveFile();
    void searchInText();
    void replaceText();
    void clearContent();
    void restoreContent();
    void changeFont();
    void setTextColorScheme();
    void setTableCellPadding();

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    QTextEdit *textEditor;
    QTableWidget *tableEditor;
    QString currentFilePath;
    QTemporaryFile tempFile;

    void createActions();
    void createMenus();
    void createToolBars();
    void createStatusBar();
};


#endif // MAINWINDOW_H
