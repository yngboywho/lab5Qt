#include "movingdog.h"
#include <QPainter>
#include <QGraphicsScene>
#include <QTimer>
#include "fioitemalex.h"

MovingDog::MovingDog(QGraphicsScene* scene) : QGraphicsEllipseItem(0, 0, 50, 50) {
    this->scene = scene;
    setBrush(Qt::black);
    setPos(100, 100);
    setFlag(QGraphicsItem::ItemIsMovable);
    speedX = 5;
    speedY = 5;

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MovingDog::move);
    timer->start(20);
}

void MovingDog::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    Q_UNUSED(option);
    Q_UNUSED(widget);


    // Тело собаки
    painter->setBrush(Qt::black);
    painter->drawEllipse(boundingRect());

    // Уши
    /*painter->setBrush(Qt::darkGray);
    painter->drawEllipse(10, -10, 15, 20);
    painter->drawEllipse(25, -10, 15, 20);*/

    // Глаза
    painter->setBrush(Qt::white);
    painter->drawEllipse(15, 15, 10, 10);
    painter->drawEllipse(30, 15, 10, 10);

    painter->setBrush(Qt::black);
    painter->drawEllipse(18, 18, 5, 5);
    painter->drawEllipse(33, 18, 5, 5);

    // Нос
    painter->setBrush(Qt::black);
    painter->drawEllipse(23, 30, 10, 10);

    // Язык
    painter->setBrush(Qt::red);
    QPolygon tongue;
    tongue << QPoint(25, 40) << QPoint(35, 40) << QPoint(30, 50);
    painter->drawPolygon(tongue);

    // Лапы
    painter->setBrush(Qt::darkGray);
    painter->drawEllipse(10, 40, 10, 10);
    painter->drawEllipse(30, 40, 10, 10);
}

void MovingDog::move() {
    setPos(x() + speedX, y() + speedY);
    QRectF dogRect = sceneBoundingRect();
    handleCollisions(dogRect);
}

void MovingDog::handleCollisions(const QRectF& dogRect) {
    QList<QGraphicsItem*> itemsOnScene = scene->items();
    bool invertX = false;
    bool invertY = false;

    for (QGraphicsItem* item : itemsOnScene) {
        if (item == this) continue;

        if (item->data(0).toString() == "brushItem") {
            continue;
        }

        QRectF itemRect = item->sceneBoundingRect();
        if (!dogRect.intersects(itemRect)) continue;

        QGraphicsPixmapItem* wall = dynamic_cast<QGraphicsPixmapItem*>(item);

        bool collisionLeft = dogRect.right() > itemRect.left() && dogRect.left() < itemRect.left();
        bool collisionRight = dogRect.left() < itemRect.right() && dogRect.right() > itemRect.right();
        bool collisionTop = dogRect.bottom() > itemRect.top() && dogRect.top() < itemRect.top();
        bool collisionBottom = dogRect.top() < itemRect.bottom() && dogRect.bottom() > itemRect.bottom();

        if (wall) {
            if (collisionLeft || collisionRight) invertX = true;
            if (collisionTop || collisionBottom) invertY = true;
        } else {
            if (collisionLeft || collisionRight) invertX = true;
            if (collisionTop || collisionBottom) invertY = true;
        }
    }

    if (invertX) speedX = -speedX;
    if (invertY) speedY = -speedY;
}
