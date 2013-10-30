///////////////////////////////////////////////////////////
//  Square.cpp
//  Implementation of the Class Square
//  Created on:      22-Sep-2013 18:14:44
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#include "Square.h"


Square::Square(QPointF p):Rectangle(p) {

}



Square::~Square(){

}





void Square::draw(QGraphicsScene& r){
    r.addRect(theCenter.x() - abs(points.back()->x() - theCenter.x()),
              theCenter.y() - abs(points.back()->x() - theCenter.x()),
              abs(points.back()->x() - theCenter.x()) * 2 ,
              abs(points.back()->x() - theCenter.x()) * 2, getPen(), getBrush());
}
