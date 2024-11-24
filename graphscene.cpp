#include "graphscene.h"

GraphScene::GraphScene(QObject *parent): QGraphicsScene(parent) {}

QGraphicsItem* GraphScene::itemAt(const QPointF &point, const QTransform &transform) const
{
    return QGraphicsScene::itemAt(point, transform);
}

void GraphScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    emit mousePressed(event);
    QGraphicsScene::mousePressEvent(event);
}

void GraphScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    emit mouseMoved(event);
    QGraphicsScene::mouseMoveEvent(event);
}

void GraphScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    emit mouseReleased(event);
    QGraphicsScene::mouseReleaseEvent(event);
}
