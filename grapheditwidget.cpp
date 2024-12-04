#include "grapheditwidget.h"
#include "ui_grapheditwidget.h"
#include "formsdialog.h"
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QGraphicsPolygonItem>
#include <QPolygonF>
#include <QMouseEvent>
#include <QMatrix4x4>
#include <QColorDialog>
#include <QTransform>
#include "MovingCar.h"
#include "MovingDog.h"
#include "fioitemalex.h"
#include "fioitemslava.h"

GraphEditWidget::GraphEditWidget(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GraphEditWidget),
    drawing(false),
    erasing(false)
{
    ui->setupUi(this);


    scene = new GraphScene(this);
    ui->graphicsView->setScene(scene);


    ui->graphicsView->installEventFilter(this);


    ui->brushStyleComboBox->addItem("Solid", static_cast<int>(Qt::SolidLine));
    ui->brushStyleComboBox->addItem("Dash", static_cast<int>(Qt::DashLine));
    ui->brushStyleComboBox->addItem("Dot", static_cast<int>(Qt::DotLine));
    ui->brushStyleComboBox->addItem("Dash Dot", static_cast<int>(Qt::DashDotLine));
    ui->brushStyleComboBox->addItem("Dash Dot Dot", static_cast<int>(Qt::DashDotDotLine));

    formsDialog = new FormsDialog(this);
    connect(formsDialog, &FormsDialog::formsCreated, this, &GraphEditWidget::onFormsCreated);
    connect(ui->deleteButton, &QPushButton::clicked, this, &GraphEditWidget::on_deleteButton_clicked);


    connect(scene, &GraphScene::mousePressed, this, &GraphEditWidget::handleSceneMousePress);
    connect(scene, &GraphScene::mouseMoved, this, &GraphEditWidget::handleSceneMouseMove);
    connect(scene, &GraphScene::mouseReleased, this, &GraphEditWidget::handleSceneMouseRelease);

    scene->setSceneRect(scene->itemsBoundingRect());
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setRenderHint(QPainter::TextAntialiasing);
    ui->graphicsView->setRenderHint(QPainter::SmoothPixmapTransform);

    ui->graphicsView->setScene(scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    connect(ui->drawNameButton, &QPushButton::clicked, this, &GraphEditWidget::drawNameAndSurname);
    connect(ui->drawNameButton, &QPushButton::clicked, this, &GraphEditWidget::drawNameAndSurname1);

    QGraphicsPixmapItem *topWall = new QGraphicsPixmapItem(QPixmap(":/assets/wall1.png"));
    topWall->setPos(-205, -50);
    QTransform transform;
    transform.scale(2.4, 1);
    topWall->setTransform(transform);
    scene->addItem(topWall);

    QGraphicsPixmapItem *bottomWall = new QGraphicsPixmapItem(QPixmap(":/assets/wall1.png"));
    bottomWall->setPos(-205,360);
    transform.scale(1, 1);
    bottomWall->setTransform(transform);
    scene->addItem(bottomWall);

    QGraphicsPixmapItem *leftWall = new QGraphicsPixmapItem(QPixmap(":/assets/wall1.png"));
    leftWall->setPos(-185, -50);
    leftWall->setRotation(90);
    transform.scale(0.5, 1.275);
    leftWall->setTransform(transform);
    scene->addItem(leftWall);

    QGraphicsPixmapItem *RightWall = new QGraphicsPixmapItem(QPixmap(":/assets/wall1.png"));
    RightWall->setPos(660,-35);
    RightWall->setRotation(90);
    transform.scale(1.08, 0.965);
    RightWall->setTransform(transform);
    scene->addItem(RightWall);

    MovingCar* car = new MovingCar(scene);
    scene->addItem(car);

    MovingDog* dog = new MovingDog(scene);
    scene->addItem(dog);

}

GraphEditWidget::~GraphEditWidget()
{
    delete ui;
}


void GraphEditWidget::on_colorSelect_clicked()
{
    QColor selectedColor = QColorDialog::getColor(brushPen.color(), this, "Выберите цвет кисти");

    if (selectedColor.isValid()) {
        brushPen.setColor(selectedColor);
    }
}





void GraphEditWidget::on_addButton_clicked()
{
    formsDialog->setSignalEmitted(false);
    formsDialog->exec();
}

void GraphEditWidget::on_deleteButton_clicked() {
    QPointF scenePos = lastClickPos;

    QRectF searchArea(scenePos.x() - 5, scenePos.y() - 5, 10, 10);
    QList<QGraphicsItem *> items = scene->items(searchArea);

    if (!items.isEmpty()) {
        QGraphicsItem *item = items.first();
        scene->removeItem(item);
        delete item;
    }



}


void GraphEditWidget::onFormsCreated(const QString &formsType, const QSize &formsSize,
                                     const QColor &fillColor, const QColor &strokeColor,
                                     bool filled, const QList<int> &triangleSides)
{
    qDebug() << "Received Form Type:" << formsType;
    qDebug() << "Received Form Size:" << formsSize;
    qDebug() << "Fill Color:" << fillColor;
    qDebug() << "Stroke Color:" << strokeColor;
    qDebug() << "Filled:" << filled;

    QGraphicsItem *item = nullptr;

    if (formsType == "Rectangle") {
        item = new QGraphicsRectItem(0, 0, formsSize.width(), formsSize.height());
        QGraphicsRectItem *rectItem = qgraphicsitem_cast<QGraphicsRectItem *>(item);
        rectItem->setPen(QPen(strokeColor));
        if (filled) rectItem->setBrush(QBrush(fillColor));
    } else if (formsType == "Circle") {
        item = new QGraphicsEllipseItem(0, 0, formsSize.width(), formsSize.height());
        QGraphicsEllipseItem *ellipseItem = qgraphicsitem_cast<QGraphicsEllipseItem *>(item);
        ellipseItem->setPen(QPen(strokeColor));
        if (filled) ellipseItem->setBrush(QBrush(fillColor));
    } else if (formsType == "Triangle") {
        if (triangleSides.size() == 3) {
            int a = triangleSides[0];
            int b = triangleSides[1];
            int c = triangleSides[2];

            if (a + b > c && a + c > b && b + c > a) {
                double angle = acos((b * b + c * c - a * a) / (2.0 * b * c));
                QPolygonF triangle;
                triangle << QPointF(0, 0) << QPointF(b, 0)
                         << QPointF(c * cos(angle), c * sin(angle));

                item = new QGraphicsPolygonItem(triangle);
                QGraphicsPolygonItem *polygonItem = qgraphicsitem_cast<QGraphicsPolygonItem *>(item);
                polygonItem->setPen(QPen(strokeColor));
                if (filled) polygonItem->setBrush(QBrush(fillColor));
            } else {
                qDebug() << "Invalid triangle sides";
            }
        }
    }

    if (item) {
        qDebug() << "Item successfully created";
        item->setFlag(QGraphicsItem::ItemIsMovable);
        scene->addItem(item);
    } else {
        qDebug() << "Failed to create item";
    }
}




void GraphEditWidget::on_brushButton_clicked()
{

    int size = ui->brushSizeSpinBox->value();
    Qt::PenStyle style = static_cast<Qt::PenStyle>(ui->brushStyleComboBox->currentData().toInt());


    brushPen.setWidth(size);
    brushPen.setStyle(style);




    erasing = false;
}




void GraphEditWidget::on_eraserButton_clicked()
{
    int size = ui->eraserSizeSpinBox->value();
    QColor backgroundColor = scene->backgroundBrush().color();


    eraserPen = QPen(backgroundColor, size, Qt::SolidLine);


    erasing = true;
}



bool GraphEditWidget::eventFilter(QObject *object, QEvent *event)
{
    if (object == ui->graphicsView) {
        if (event->type() == QEvent::MouseButtonPress) {
            mousePressEvent(static_cast<QMouseEvent *>(event));
            return true;
        } else if (event->type() == QEvent::MouseMove) {
            mouseMoveEvent(static_cast<QMouseEvent *>(event));
            return true;
        } else if (event->type() == QEvent::MouseButtonRelease) {
            mouseReleaseEvent(static_cast<QMouseEvent *>(event));
            return true;
        }
    }
    return QDialog::eventFilter(object, event);
}


void GraphEditWidget::handleSceneMousePress(QGraphicsSceneMouseEvent *event)
{
    QPointF scenePos = event->scenePos();
    lastClickPos = scenePos;

    QGraphicsItem *item = scene->itemAt(scenePos, QTransform());

    if (item && item->flags() & QGraphicsItem::ItemIsMovable) {
        movingItem = true;
    } else {
        movingItem = false;
        if (event->button() == Qt::LeftButton) {
            if (erasing) {
                eraseStart = scenePos;
            } else {
                drawing = true;
                lastPoint = scenePos;
            }
        }
    }
}

void GraphEditWidget::handleSceneMouseMove(QGraphicsSceneMouseEvent *event)
{
    if (!movingItem) {
        if (drawing && !erasing) {
            QGraphicsLineItem *line = new QGraphicsLineItem(QLineF(lastPoint, event->scenePos()));
            line->setPen(brushPen);
            scene->addItem(line);

            // Устанавливаем метку для объектов, нарисованных кистью
            line->setData(0, "brushItem");

            lastPoint = event->scenePos();
        } else if (erasing) {
            QGraphicsEllipseItem *eraser = new QGraphicsEllipseItem(QRectF(eraseStart, event->scenePos()).normalized());
            eraser->setPen(eraserPen);
            eraser->setBrush(Qt::NoBrush);
            scene->addItem(eraser);
            eraseStart = event->scenePos();
        }
    }
}

void GraphEditWidget::handleSceneMouseRelease(QGraphicsSceneMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        drawing = false;
        movingItem = false;
    }
}



void GraphEditWidget::on_backgroundButton_clicked()
{

    QColor selectedColor = QColorDialog::getColor(scene->backgroundBrush().color(), this, "Выберите цвет фона");

    if (selectedColor.isValid()) {
        scene->setBackgroundBrush(QBrush(selectedColor));


        updateEraserColor(selectedColor);
    }
}


void GraphEditWidget::updateEraserColor(const QColor &backgroundColor)
{

    QColor eraserColor = backgroundColor;


    eraserPen.setColor(eraserColor);
}

void GraphEditWidget::drawNameAndSurname()
{

    NameSurnameItem *nameSurnameItem = new NameSurnameItem();


    scene->addItem(nameSurnameItem);
}
void GraphEditWidget::drawNameAndSurname1()
{

    NameSurnameItemSlava *nameSurnameItemSlava = new NameSurnameItemSlava();

    scene->addItem(nameSurnameItemSlava);
}
