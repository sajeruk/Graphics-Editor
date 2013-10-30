///////////////////////////////////////////////////////////
//  Ellipse.cpp
//  Implementation of the Class Ellipse
//  Created on:      22-Sep-2013 18:14:43
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#include "Ellipse.h"


Ellipse::Ellipse(QPointF p): Figure2D(p) {

}



Ellipse::~Ellipse(){

}





void Ellipse::addPoint(QPointF p){
    aRadius = p.x() - theCenter.x();
    bRadius = p.y() - theCenter.y();
    _fin = true;
}


void Ellipse::draw(QGraphicsScene& r){
    r.addEllipse(theCenter.x() - aRadius,
                 theCenter.y() - bRadius,
                 aRadius * 2, bRadius * 2, getPen(), getBrush());
}


void Ellipse::drawCurrentState(QGraphicsScene& r, QPointF p){
    addPoint(p);
    _fin = false;
    draw(r);
}

bool Ellipse::isFinished() {
    return _fin;
}
