#ifndef TABLEDIALOG_H
#define TABLEDIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class TableDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TableDialog(QWidget *parent = nullptr);
    ~TableDialog();

    int getRowCount() const;
    int getColumnCount() const;


private slots:
    void on_okButton_clicked();


private:
    Ui::Dialog *ui;
};

#endif // TABLEDIALOG_H
