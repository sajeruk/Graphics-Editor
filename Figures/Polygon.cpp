///////////////////////////////////////////////////////////
//  Polygon.cpp
//  Implementation of the Class Polygon
//  Created on:      22-Sep-2013 18:14:43
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#include "Polygon.h"
#include <QPointF>

Polygon::Polygon(QPointF p): Figure2D(p), maxPoints(0) {
    points.push_back(new QPointF(p));
}



Polygon::~Polygon(){
    for (size_t x = 0; x < points.size(); ++x)
        delete points[x];
}

void Polygon::addPoint(QPointF p){
    points.push_back(new QPointF(p));
}


void Polygon::draw(QGraphicsScene& r){
    QVector<QPointF> qpoints;
    for (size_t i = 0; i < points.size(); i++)
        qpoints.push_back(*points[i]);
    r.addPolygon(qpoints, getPen(), getBrush());
}


void Polygon::drawCurrentState(QGraphicsScene& r, QPointF p){
    for (size_t i = 0; i + 1 < points.size(); ++i) {
        r.addLine(points[i]->x(), points[i]->y(),
                  points[i + 1]->x(), points[i + 1]->y(), getPen());
    }
    r.addLine(points.back()->x(),points.back()->y(),
              p.x(), p.y(), getPen());
}


void Polygon::move(QPointF& p){
    Figure::move(p);
    for (size_t i = 0; i < points.size(); ++i)
        *points[i] += p;
}

bool Polygon::isFinished()
{
    if (maxPoints)
        return points.size() == maxPoints;
    else
        return points.size() > 1 &&
            abs(points.front()->x() - points.back()->x()) +
            + abs(points.front()->y() -
                  points.back()->y()) < DISTACE_BETWEEN_POINTS;
}
