///////////////////////////////////////////////////////////
//  Rectangle.h
//  Implementation of the Class Rectangle
//  Created on:      22-Sep-2013 18:14:44
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#if !defined(EA_759204B2_D61A_424d_A338_F64DE36304B3__INCLUDED_)
#define EA_759204B2_D61A_424d_A338_F64DE36304B3__INCLUDED_

#include "Parallelogram.h"

class Rectangle : public Parallelogram
{

public:
    Rectangle(QPointF p);
	virtual ~Rectangle();

    virtual void drawCurrentState(QGraphicsScene& r, QPointF p);

	virtual void draw(QGraphicsScene& r);

};
#endif // !defined(EA_759204B2_D61A_424d_A338_F64DE36304B3__INCLUDED_)
