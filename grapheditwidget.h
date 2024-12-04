#ifndef GRAPHEDITWIDGET_H
#define GRAPHEDITWIDGET_H

#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QPen>
#include "graphscene.h"
#include "formsdialog.h"

namespace Ui {
class GraphEditWidget;
}

class GraphEditWidget : public QDialog
{
    Q_OBJECT

public:
    explicit GraphEditWidget(QWidget *parent = nullptr);
    ~GraphEditWidget();

    void updateEraserColor(const QColor &backgroundColor);


private slots:
    void on_addButton_clicked();
    void on_brushButton_clicked();
    void on_eraserButton_clicked();

    void on_colorSelect_clicked();

    void handleSceneMousePress(QGraphicsSceneMouseEvent *event);
    void handleSceneMouseMove(QGraphicsSceneMouseEvent *event);
    void handleSceneMouseRelease(QGraphicsSceneMouseEvent *event);

    void on_backgroundButton_clicked();
    void on_deleteButton_clicked();

    void drawNameAndSurname();
    void drawNameAndSurname1();
    void onFormsCreated(const QString &formsType, const QSize &formsSize, const QColor &fillColor, const QColor &strokeColor, bool filled, const QList<int> &triangleSides);
protected:
    bool eventFilter(QObject *object, QEvent *event) override;


private:
    Ui::GraphEditWidget *ui;
    GraphScene *scene;
    bool drawing;
    bool erasing;
    bool movingItem;
    QPen brushPen;
    QPen eraserPen;
    QPointF lastPoint;
    QPointF eraseStart;
    FormsDialog *formsDialog;
    QPointF lastClickPos;
};

#endif // GRAPHEDITWIDGET_H
