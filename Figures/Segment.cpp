///////////////////////////////////////////////////////////
//  Segment.cpp
//  Implementation of the Class Segment
//  Created on:      22-Sep-2013 18:14:42
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#include "Segment.h"


Segment::Segment(QPointF p): Figure(p){

}



Segment::~Segment(){

    if (secondPoint != NULL)
        delete secondPoint;
}





void Segment::addPoint(QPointF p){
    secondPoint = new QPointF(p);
    _fin = true;
}


void Segment::draw(QGraphicsScene& r){
    r.addLine(theCenter.x(), theCenter.y(), secondPoint->x(), secondPoint->y(),
              getPen());
}


void Segment::drawCurrentState(QGraphicsScene& r, QPointF p){
    secondPoint = new QPointF(p);
    draw(r);
    delete secondPoint;
}


void Segment::move(QPointF& p){
    Figure::move(p);
    *secondPoint += p;
}
