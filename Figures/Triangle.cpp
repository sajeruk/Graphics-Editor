///////////////////////////////////////////////////////////
//  Triangle.cpp
//  Implementation of the Class Triangle
//  Created on:      22-Sep-2013 18:14:43
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#include "Triangle.h"


Triangle::Triangle(QPointF p): Polygon(p) {
    maxPoints = 3;
}



Triangle::~Triangle(){

}


void Triangle::draw(QGraphicsScene& r){
    Polygon::draw(r);
}
