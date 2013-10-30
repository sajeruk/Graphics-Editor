///////////////////////////////////////////////////////////
//  Rhombus.h
//  Implementation of the Class Rhombus
//  Created on:      22-Sep-2013 18:14:43
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#if !defined(EA_A2B90895_409B_4435_91C4_CAC22BE239C6__INCLUDED_)
#define EA_A2B90895_409B_4435_91C4_CAC22BE239C6__INCLUDED_

#include "Parallelogram.h"

class Rhombus : public Parallelogram
{

public:
    Rhombus(QPointF p);
	virtual ~Rhombus();

	virtual void draw(QGraphicsScene& r);

};
#endif // !defined(EA_A2B90895_409B_4435_91C4_CAC22BE239C6__INCLUDED_)
