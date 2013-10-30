///////////////////////////////////////////////////////////
//  Figure.cpp
//  Implementation of the Class Figure
//  Created on:      20-sep-2013 23:44:49
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#include "Figure.h"
#include <QPen>




void Figure::move(QPointF& p){
    theCenter += p;
}


void Figure::setBorderColor(QColor* color){
    if (borderColor)
        delete borderColor;
    borderColor = color;
}

bool Figure::isFinished() {
    return _fin;
}

QPen Figure::getPen() {
    QPen pen;
    if (borderColor)
        pen.setColor(*borderColor);
    return pen;
}
