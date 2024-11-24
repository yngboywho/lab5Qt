#ifndef FIOITEMALEX_H
#define FIOITEMALEX_H

#include <QGraphicsItem>
#include <QGraphicsScene>

class NameSurnameItem : public QGraphicsItem
{
public:
    explicit NameSurnameItem(QGraphicsItem *parent = nullptr);

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

private:
    void drawLetterA(QPainter *painter, int x, int y);
    void drawLetterL(QPainter *painter, int x, int y);
    void drawLetterE(QPainter *painter, int x, int y);
    void drawLetterK(QPainter *painter, int x, int y);
    void drawLetterS(QPainter *painter, int x, int y);
    void drawLetterE0(QPainter *painter, int x, int y);
    void drawLetterY(QPainter *painter, int x, int y);
    void drawLetterD(QPainter *painter, int x, int y);
    void drawLetterR(QPainter *painter, int x, int y);
    void drawLetterU(QPainter *painter, int x, int y);
    void drawLetterZ(QPainter *painter, int x, int y);
    void drawLetterY0(QPainter *painter, int x, int y);
    void drawLetterA0(QPainter *painter, int x, int y);
    void drawLetterN(QPainter *painter, int x, int y);
    void drawLetterO(QPainter *painter, int x, int y);
    void drawLetterV(QPainter *painter, int x, int y);
};

#endif // FIOITEMALEX_H
