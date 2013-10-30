///////////////////////////////////////////////////////////
//  Circle.cpp
//  Implementation of the Class Circle
//  Created on:      22-Sep-2013 18:14:42
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#include "Circle.h"


Circle::Circle(QPointF p): Ellipse(p) {

}



Circle::~Circle(){

}





void Circle::addPoint(QPointF p){
    aRadius = bRadius = p.x() - theCenter.x();
    _fin = true;
}
