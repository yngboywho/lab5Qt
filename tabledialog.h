#ifndef TABLEDIALOG_H
#define TABLEDIALOG_H

#include <QDialog>

namespace Ui {
class tabledialog;
}

class tabledialog : public QDialog
{
    Q_OBJECT

public:
    explicit tabledialog(QWidget *parent = nullptr);
    ~tabledialog();

    int getRowCount() const;
    int getColumnCount() const;


private slots:
    void on_okButton_clicked();

private:
    Ui::tabledialog *ui;
};

#endif // TABLEDIALOG_H
