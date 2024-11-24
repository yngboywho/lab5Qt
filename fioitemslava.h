#ifndef FIOITEMSLAVA_H
#define FIOITEMSLAVA_H

#include <QGraphicsItem>
#include <QGraphicsScene>

class NameSurnameItemSlava : public QGraphicsItem
{
public:
    explicit NameSurnameItemSlava(QGraphicsItem *parent = nullptr);

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

private:
    void drawLetterS(QPainter *painter, int x, int y);
    void drawLetterL(QPainter *painter, int x, int y);
    void drawLetterA(QPainter *painter, int x, int y);
    void drawLetterV(QPainter *painter, int x, int y);
    void drawLetterA0(QPainter *painter, int x, int y);
    void drawLetterS0(QPainter *painter, int x, int y);
    void drawLetterH(QPainter *painter, int x, int y);
    void drawLetterA1(QPainter *painter, int x, int y);
    void drawLetterK(QPainter *painter, int x, int y);
    void drawLetterH0(QPainter *painter, int x, int y);
    void drawLetterO(QPainter *painter, int x, int y);
    void drawLetterV0(QPainter *painter, int x, int y);

};

#endif // FIOITEMSLAVA_H
