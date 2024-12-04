#include "movingcar.h"
#include <QPainter>
#include <QGraphicsScene>
#include <QTimer>
#include "fioitemalex.h"

MovingCar::MovingCar(QGraphicsScene* scene) : QGraphicsEllipseItem(0, 0, 60, 30) {
    this->scene = scene;
    setBrush(Qt::blue);
    setPos(150, 70);
    setFlag(QGraphicsItem::ItemIsMovable);
    speedX = 5;
    speedY = 3;

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MovingCar::move);
    timer->start(20);
}

void MovingCar::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) {
    Q_UNUSED(option);
    Q_UNUSED(widget);

    QPointF position = this->pos();
    // Основное тело машины
    painter->setBrush(Qt::blue);
    painter->drawRect(5, 25, 100, 40);

    // Колеса
    painter->setBrush(Qt::black);
    painter->drawEllipse(30, 65, 15, 15);
    // Правое переднее колесо
    /*painter->drawEllipse(40, 25, 15, 15);*/

    // Левое заднее колесо
    painter->drawEllipse(70, 65, 15, 15);
    // Правое заднее колесо
    /*painter->drawEllipse(40, -10, 15, 15);*/

    // Окна
    painter->setBrush(Qt::white);
    painter->drawRect(5, 25, 50, 20); // Левое окно
    painter->drawRect(55, 25, 50, 20); // Правое окно
}

QRectF MovingCar::boundingRect() const {
    return QRectF(5, 25, 100, 55);
}

void MovingCar::move() {
    setPos(x() + speedX, y() + speedY);
    QRectF carRect = sceneBoundingRect();
    handleCollisions(carRect);
}

void MovingCar::handleCollisions(const QRectF& carRect) {
    QList<QGraphicsItem*> itemsOnScene = scene->items();
    bool invertX = false;
    bool invertY = false;

    for (QGraphicsItem* item : itemsOnScene) {
        if (item == this) continue;

        QRectF itemRect = item->sceneBoundingRect();
        if (!carRect.intersects(itemRect)) continue;

        bool collisionLeft = carRect.right() > itemRect.left() && carRect.left() < itemRect.left();
        bool collisionRight = carRect.left() < itemRect.right() && carRect.right() > itemRect.right();
        bool collisionTop = carRect.bottom() > itemRect.top() && carRect.top() < itemRect.top();
        bool collisionBottom = carRect.top() < itemRect.bottom() && carRect.bottom() > itemRect.bottom();

        if (collisionLeft || collisionRight) invertX = true;
        if (collisionTop || collisionBottom) invertY = true;
    }

    if (invertX) speedX = -speedX;
    if (invertY) speedY = -speedY;
}
