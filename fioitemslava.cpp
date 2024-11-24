#include "fioitemslava.h"
#include <QPainter>

NameSurnameItemSlava::NameSurnameItemSlava(QGraphicsItem *parent)
    : QGraphicsItem(parent)
{
    setFlag(ItemIsMovable);
}

QRectF NameSurnameItemSlava::boundingRect() const
{
    return QRectF(0, -5, 200, 70);
}

void NameSurnameItemSlava::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QPen(Qt::black));
    painter->setBrush(QBrush(Qt::black));

    drawLetterS(painter, 0, 0);
    drawLetterL(painter, 30, 0);
    drawLetterA(painter, 60, 0);
    drawLetterV(painter, 90, 0);
    drawLetterA0(painter, 120, 0);


    drawLetterS0(painter, 0, 40);
    drawLetterH(painter, 30, 40);
    drawLetterA1(painter, 60, 40);
    drawLetterK(painter, 90, 40);
    drawLetterH0(painter, 120, 40);
    drawLetterO(painter, 150, 40);
    drawLetterV0(painter, 180, 40);

}


void NameSurnameItemSlava::drawLetterS(QPainter *painter, int x, int y)
{
    painter->drawArc(QRect(x, y, 20, 15), 90 * 16, 180 * 16);
    painter->drawArc(QRect(x, y + 10, 20, 15), 270 * 16, 180 * 16);
}

void NameSurnameItemSlava::drawLetterL(QPainter *painter, int x, int y)
{
    painter->drawLine(x, y, x, y + 25);
    painter->drawLine(x, y + 25, x + 10, y + 25);
}

void NameSurnameItemSlava::drawLetterA(QPainter *painter, int x, int y)
{
    painter->drawLine(x + 5, y + 25, x + 15, y);
    painter->drawLine(x + 15, y, x + 25, y + 25);
    painter->drawLine(x + 10, y + 12, x + 20, y + 12);
}

void NameSurnameItemSlava::drawLetterV(QPainter *painter, int x, int y)
{
    painter->drawLine(x, y, x + 10, y + 25);
    painter->drawLine(x + 10, y + 25, x + 20, y);
}

void NameSurnameItemSlava::drawLetterA0(QPainter *painter, int x, int y)
{
    painter->drawLine(x + 5, y + 25, x + 15, y);
    painter->drawLine(x + 15, y, x + 25, y + 25);
    painter->drawLine(x + 10, y + 12, x + 20, y + 12);
}

void NameSurnameItemSlava::drawLetterS0(QPainter *painter, int x, int y)
{
    painter->drawArc(QRect(x, y, 20, 15), 90 * 16, 180 * 16);
    painter->drawArc(QRect(x, y + 10, 20, 15), 270 * 16, 180 * 16);
}

void NameSurnameItemSlava::drawLetterH(QPainter *painter, int x, int y)
{
    painter->drawLine(x, y, x, y + 25);
    painter->drawLine(x + 20, y, x + 20, y + 25);
    painter->drawLine(x, y + 12, x + 20, y + 12);
}

void NameSurnameItemSlava::drawLetterA1(QPainter *painter, int x, int y)
{
    painter->drawLine(x + 5, y + 25, x + 15, y);
    painter->drawLine(x + 15, y, x + 25, y + 25);
    painter->drawLine(x + 10, y + 12, x + 20, y + 12);
}

void NameSurnameItemSlava::drawLetterK(QPainter *painter, int x, int y)
{
    painter->drawLine(x, y, x, y + 25);
    painter->drawLine(x, y + 10, x + 10, y);
    painter->drawLine(x, y + 10, x + 10, y + 25);
}

void NameSurnameItemSlava::drawLetterH0(QPainter *painter, int x, int y)
{
    painter->drawLine(x, y, x, y + 25);
    painter->drawLine(x + 20, y, x + 20, y + 25);
    painter->drawLine(x, y + 12, x + 20, y + 12);
}

void NameSurnameItemSlava::drawLetterO(QPainter *painter, int x, int y)
{
    painter->drawEllipse(QRect(x, y, 15, 25));
}

void NameSurnameItemSlava::drawLetterV0(QPainter *painter, int x, int y)
{
    painter->drawLine(x, y, x + 10, y + 25);
    painter->drawLine(x + 10, y + 25, x + 20, y);
}
