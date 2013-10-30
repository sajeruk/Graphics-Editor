///////////////////////////////////////////////////////////
//  Parallelogram.h
//  Implementation of the Class Parallelogram
//  Created on:      22-Sep-2013 18:14:44
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#if !defined(EA_6B7111AB_446D_462c_9B96_971C14F43542__INCLUDED_)
#define EA_6B7111AB_446D_462c_9B96_971C14F43542__INCLUDED_

#include "Polygon.h"

class Parallelogram : public Polygon
{

public:
    Parallelogram(QPointF p);
	virtual ~Parallelogram();


    virtual void drawCurrentState(QGraphicsScene& r, QPointF p);

	virtual void draw(QGraphicsScene& r);

};
#endif // !defined(EA_6B7111AB_446D_462c_9B96_971C14F43542__INCLUDED_)
