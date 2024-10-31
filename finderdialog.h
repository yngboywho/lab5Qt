#ifndef FINDERDIALOG_H
#define FINDERDIALOG_H

#include <QDialog>

namespace Ui {
class FinderDialog;
}

class FinderDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FinderDialog(QWidget *parent = nullptr);
    ~FinderDialog();

    QString getSearchText() const;
    QString getReplaceText() const;
    bool isCaseSensitive() const;

signals:
    void findNext();
    void replace();
    void replaceAll();

private:
    Ui::FinderDialog *ui;
};

#endif // FINDERDIALOG_H
