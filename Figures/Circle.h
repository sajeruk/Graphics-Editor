///////////////////////////////////////////////////////////
//  Circle.h
//  Implementation of the Class Circle
//  Created on:      22-Sep-2013 18:14:42
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#if !defined(EA_DA4B4B62_6BB8_41fd_B987_3AB8797C5B19__INCLUDED_)
#define EA_DA4B4B62_6BB8_41fd_B987_3AB8797C5B19__INCLUDED_

#include "Ellipse.h"

class Circle : public Ellipse
{

public:
    Circle(QPointF p);
	virtual ~Circle();

    virtual void addPoint(QPointF p);

};
#endif // !defined(EA_DA4B4B62_6BB8_41fd_B987_3AB8797C5B19__INCLUDED_)
