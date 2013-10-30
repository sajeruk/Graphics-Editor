///////////////////////////////////////////////////////////
//  Figure2D.cpp
//  Implementation of the Class Figure2D
//  Created on:      22-Sep-2013 18:14:41
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#include "Figure2D.h"


Figure2D::Figure2D(QPointF p): Figure(p){
    fillColor = NULL;
}



Figure2D::~Figure2D(){
    if (fillColor)
        delete fillColor;
}



void Figure2D::setFillColor(QColor* color){
    if (fillColor)
        delete fillColor;
    fillColor = color;
}

QBrush Figure2D::getBrush() {
    if (fillColor)
        return QBrush(QColor(*fillColor));
    return QBrush();
}
