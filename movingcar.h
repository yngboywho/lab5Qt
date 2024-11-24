#ifndef MOVINGCAR_H
#define MOVINGCAR_H

#include <QGraphicsEllipseItem>
#include <QGraphicsScene>
#include <QTimer>
#include <QObject>
#include <QPainter>


class MovingCar : public QObject, public QGraphicsEllipseItem{

    Q_OBJECT

public:
    MovingCar(QGraphicsScene *scene);
    QRectF boundingRect() const override;
    void handleCollisions(const QRectF &dogRect);

public slots:
    void move();

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;

private:
    QGraphicsScene *scene;
    QTimer *timer;
    int speedX;
    int speedY;

};

#endif // MOVINGCAR_H
