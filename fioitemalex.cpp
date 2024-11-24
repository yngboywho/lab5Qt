#include "fioitemalex.h"
#include <QPainter>

NameSurnameItem::NameSurnameItem(QGraphicsItem *parent)
    : QGraphicsItem(parent)
{
    setFlag(ItemIsMovable);
}

QRectF NameSurnameItem::boundingRect() const
{
    return QRectF(0, -5, 400, 70);
}

void NameSurnameItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QPen(Qt::black));
    painter->setBrush(QBrush(Qt::black));

    drawLetterA(painter, 0, 0);
    drawLetterL(painter, 30, 0);
    drawLetterE(painter, 60, 0);
    drawLetterK(painter, 90, 0);
    drawLetterS(painter, 120, 0);
    drawLetterE0(painter, 150, 0);
    drawLetterY(painter, 180, 0);


    drawLetterD(painter, 0, 40);
    drawLetterR(painter, 30, 40);
    drawLetterU(painter, 60, 40);
    drawLetterZ(painter, 90, 40);
    drawLetterY0(painter, 120, 40);
    drawLetterA0(painter, 150, 40);
    drawLetterN(painter, 180, 40);
    drawLetterO(painter, 210, 40);
    drawLetterV(painter, 240, 40);
}


void NameSurnameItem::drawLetterA(QPainter *painter, int x, int y)
{
    painter->drawLine(x + 5, y + 25, x + 15, y);
    painter->drawLine(x + 15, y, x + 25, y + 25);
    painter->drawLine(x + 10, y + 12, x + 20, y + 12);
}

void NameSurnameItem::drawLetterL(QPainter *painter, int x, int y)
{
    painter->drawLine(x, y, x, y + 25);
    painter->drawLine(x, y + 25, x + 10, y + 25);
}

void NameSurnameItem::drawLetterE(QPainter *painter, int x, int y)
{
    painter->drawRect(x, y, 5, 25);
    painter->drawRect(x + 5, y, 10, 5);
    painter->drawRect(x + 5, y + 10, 10, 5);
    painter->drawRect(x, y + 20, 15, 5);
}

void NameSurnameItem::drawLetterK(QPainter *painter, int x, int y)
{
    painter->drawLine(x, y, x, y + 25);
    painter->drawLine(x, y + 10, x + 10, y);
    painter->drawLine(x, y + 10, x + 10, y + 25);
}

void NameSurnameItem::drawLetterS(QPainter *painter, int x, int y)
{
    painter->drawArc(QRect(x, y, 20, 15), 90 * 16, 180 * 16);
    painter->drawArc(QRect(x, y + 10, 20, 15), 270 * 16, 180 * 16);
}

void NameSurnameItem::drawLetterE0(QPainter *painter, int x, int y)
{
    painter->drawRect(x, y, 5, 25);
    painter->drawRect(x + 5, y, 10, 5);
    painter->drawRect(x + 5, y + 10, 10, 5);
    painter->drawRect(x, y + 20, 15, 5);
}

void NameSurnameItem::drawLetterY(QPainter *painter, int x, int y)
{
    painter->drawLine(x, y + 25, x + 10, y);
    painter->drawLine(x + 3, y, x + 7, y + 15);
}

void NameSurnameItem::drawLetterD(QPainter *painter, int x, int y)
{
    QPolygon triangle;
    triangle << QPoint(x + 15, y) << QPoint(x + 5, y + 15) << QPoint(x + 25, y + 15);
    painter->drawPolygon(triangle);

    painter->drawRect(x + 5, y + 15, 5, 2);
    painter->drawRect(x + 20, y + 15, 5, 2);
}

void NameSurnameItem::drawLetterR(QPainter *painter, int x, int y)
{
    painter->drawRect(x, y, 5, 25);
    painter->drawEllipse(QRect(x + 5, y, 10, 10));
}

void NameSurnameItem::drawLetterU(QPainter *painter, int x, int y)
{
    painter->drawRect(x, y, 5, 20);
    painter->drawRect(x + 15, y, 5, 20);
    painter->drawRect(x, y + 20, 20, 5);
}

void NameSurnameItem::drawLetterZ(QPainter *painter, int x, int y)
{
    painter->drawLine(x, y, x + 20, y);
    painter->drawLine(x + 20, y, x, y + 25);
    painter->drawLine(x, y + 25, x + 20, y + 25);
}

void NameSurnameItem::drawLetterY0(QPainter *painter, int x, int y)
{
    painter->drawLine(x + 10, y, x + 15, y + 10);
    painter->drawLine(x + 15, y + 10, x + 10, y + 25);
    painter->drawLine(x + 15, y + 10, x + 20, y);
}

void NameSurnameItem::drawLetterA0(QPainter *painter, int x, int y)
{
    painter->drawLine(x + 5, y + 25, x + 15, y);
    painter->drawLine(x + 15, y, x + 25, y + 25);
    painter->drawLine(x + 10, y + 12, x + 20, y + 12);
}

void NameSurnameItem::drawLetterN(QPainter *painter, int x, int y)
{
    painter->drawRect(x, y, 5, 25);
    painter->drawRect(x + 15, y, 5, 25);
    painter->drawRect(x, y + 12, 15, 5);
}

void NameSurnameItem::drawLetterO(QPainter *painter, int x, int y)
{
    painter->drawEllipse(QRect(x, y, 15, 25));
}

void NameSurnameItem::drawLetterV(QPainter *painter, int x, int y)
{
    painter->drawLine(x, y, x + 10, y + 25);
    painter->drawLine(x + 10, y + 25, x + 20, y);
}
