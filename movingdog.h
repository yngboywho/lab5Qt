#ifndef MOVINGDOG_H
#define MOVINGDOG_H

#include <QGraphicsEllipseItem>
#include <QGraphicsScene>
#include <QTimer>
#include <QObject>
#include <QPainter>


class MovingDog : public QObject, public QGraphicsEllipseItem{

    Q_OBJECT

public:
    MovingDog(QGraphicsScene *scene);

public slots:
    void move();
    void handleCollisions(const QRectF &dogRect);

protected:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;

private:
    QGraphicsScene *scene;
    QTimer *timer;
    int speedX;
    int speedY;

};

#endif // MOVINGDOG_H
