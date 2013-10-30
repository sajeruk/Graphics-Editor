#include <QColor>
#include "renderscene.h"
#include "Figures/Segment.h"
#include "Figures/Ellipse.h"
#include "Figures/Circle.h"
#include "Figures/Polygon.h"
#include "Figures/Triangle.h"
#include "Figures/Rectangle.h"
#include "Figures/Square.h"

RenderScene::RenderScene(QObject *parent) :
    QGraphicsScene(parent)
{
    _isDrawing = false;
    withFill = false;
    figureName = RenderScene::None;
}
RenderScene::~RenderScene()
{
    for (size_t i = 0; i < figures.size(); ++i)
        delete figures[i];
    if (_isDrawing)
        delete drawingFigure;
}
void RenderScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)  {    

    QGraphicsScene::mouseMoveEvent(event);
     if (!_isDrawing)
         return;
     this->clear();
     for(size_t x = 0; x < figures.size(); ++x)
         figures[x]->draw(*this);
     drawingFigure->drawCurrentState(*this, event->scenePos());
}


void RenderScene::mousePressEvent(QGraphicsSceneMouseEvent *event)  {
   if (_isDrawing) {

       drawingFigure->addPoint(event->scenePos());

       if (drawingFigure->isFinished()) {

           figures.push_back(drawingFigure);
           drawingFigure->draw(*this);
           endDrawing();
       }
    }
    else {
       startDrawing();
       drawingFigure = getDrawingFigure(figureName, event->scenePos());
       if (!drawingFigure) {
           endDrawing();
           return;
       }
       drawingFigure->setBorderColor(new QColor(lineColor));
       Figure2D* df = dynamic_cast<Figure2D*>(drawingFigure);
       if (withFill && df)
           df->setFillColor(new QColor(fillColor));
    }
}

Figure* RenderScene::getDrawingFigure(FigureName newFigure,
                                      const QPointF& startPosition) {

    switch (newFigure) {
        case RenderScene::Seg :
            return new Segment(startPosition);
        case RenderScene::Ell :
            return new Ellipse(startPosition);
        case RenderScene::Cir :
            return new Circle(startPosition);
        case RenderScene::Pol :
            return new Polygon(startPosition);
        case RenderScene::Tri :
            return new Triangle(startPosition);
        case RenderScene::Rec :
            return new Rectangle(startPosition);
        case RenderScene::Squ :
            return new Square(startPosition);
        default:
            endDrawing();
            return NULL;
    }
}


bool RenderScene::isDrawing() {
    return _isDrawing;
}

void RenderScene::startDrawing() {
    _isDrawing = true;
}

void RenderScene::endDrawing() {
    _isDrawing = false;
}

void RenderScene::setDrawingFigure(FigureName name) {
    figureName = name;
}

void RenderScene::setFillColor(QColor color, bool fill) {
    fillColor = color;
    withFill = fill;
}

void RenderScene::setLineColor(QColor color) {
    lineColor = color;
}

void RenderScene::moveAllFigures() {
    if (_isDrawing) return;
    for (size_t i = 0; i < figures.size(); ++i) {
        qreal x = qrand() % 15 - 7;
        qreal y = qrand() % 15 - 7;
        QPointF point(x, y);
        figures[i]->move(point);
    }
    this->clear();
    for(size_t x = 0; x < figures.size(); ++x)
        figures[x]->draw(*this);

}
