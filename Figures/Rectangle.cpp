///////////////////////////////////////////////////////////
//  Rectangle.cpp
//  Implementation of the Class Rectangle
//  Created on:      22-Sep-2013 18:14:44
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#include "Rectangle.h"
#include <QGraphicsRectItem>


Rectangle::Rectangle(QPointF p): Parallelogram(p){
    maxPoints = 2;
}



Rectangle::~Rectangle(){

}

void Rectangle::drawCurrentState(QGraphicsScene& r, QPointF p) {

    points.push_back(new QPointF(p));
    draw(r);
    delete points[points.size() - 1];
    points.pop_back();
}




void Rectangle::draw(QGraphicsScene& r) {
    qreal x1 = points.front()->x();
    qreal x2 = points.back()->x();

    qreal y1 = points.front()->y();
    qreal y2 = points.back()->y();

    qreal x = (x1 > x2) ? x2 : x1;
    qreal x_t = (x2 > x1) ? x2 : x1;

    qreal y = (y1 > y2) ? y2 : y1;
    qreal y_t = (y2 > y1) ? y2 : y1;

    r.addRect(x, y, x_t - x, y_t - y, getPen(), getBrush());
}
