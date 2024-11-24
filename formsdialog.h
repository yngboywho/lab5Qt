// formsdialog.h
#ifndef FORMSDIALOG_H
#define FORMSDIALOG_H

#include <QDialog>
#include <QColor>
#include <QSize>
#include <QList>


namespace Ui {
class FormsDialog;
}

class FormsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FormsDialog(QWidget *parent = nullptr);
    ~FormsDialog();

    QString getFormsType() const;
    QSize getFormsSize() const;
    QColor getFillColor() const;
    QColor getStrokeColor() const;
    bool isFilled() const;
    QList<int> getTriangleSides() const;
    void setSignalEmitted(bool value);

signals:
    void formsCreated(const QString &formsType, const QSize &formsSize, const QColor &fillColor,
                      const QColor &strokeColor, bool filled, const QList<int> &triangleSides);

private slots:
    void on_buttonBox_accepted();
    void on_fillColorButton_clicked();
    void on_strokeColorButton_clicked();
    void onFormsChanged(int index);

private:
    Ui::FormsDialog *ui;
    QColor fillColor;
    QColor strokeColor;
    bool isSignalEmitted = false;
};

#endif // FORMSDIALOG_H
