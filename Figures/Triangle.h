///////////////////////////////////////////////////////////
//  Triangle.h
//  Implementation of the Class Triangle
//  Created on:      22-Sep-2013 18:14:43
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#if !defined(EA_7703918C_62DB_45db_8296_2E8A2A3130AB__INCLUDED_)
#define EA_7703918C_62DB_45db_8296_2E8A2A3130AB__INCLUDED_

#include "Polygon.h"

class Triangle : public Polygon
{

public:
    Triangle(QPointF p);
	virtual ~Triangle();

	virtual void draw(QGraphicsScene& r);

};
#endif // !defined(EA_7703918C_62DB_45db_8296_2E8A2A3130AB__INCLUDED_)
