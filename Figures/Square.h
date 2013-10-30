///////////////////////////////////////////////////////////
//  Square.h
//  Implementation of the Class Square
//  Created on:      22-Sep-2013 18:14:44
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#if !defined(EA_F2ACA458_D2A9_42f3_8C20_37726DFD8E28__INCLUDED_)
#define EA_F2ACA458_D2A9_42f3_8C20_37726DFD8E28__INCLUDED_

#include "Rectangle.h"

class Square : public Rectangle
{

public:
    Square(QPointF p);
	virtual ~Square();

	virtual void draw(QGraphicsScene& r);

};
#endif // !defined(EA_F2ACA458_D2A9_42f3_8C20_37726DFD8E28__INCLUDED_)
