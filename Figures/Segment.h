///////////////////////////////////////////////////////////
//  Segment.h
//  Implementation of the Class Segment
//  Created on:      22-Sep-2013 18:14:42
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#if !defined(EA_BADBA80A_352A_4ee9_818E_17392E464530__INCLUDED_)
#define EA_BADBA80A_352A_4ee9_818E_17392E464530__INCLUDED_

#include "Figure.h"

class Segment : public Figure
{

public:
    Segment(QPointF p);
	virtual ~Segment();

    virtual void addPoint(QPointF p);
	virtual void draw(QGraphicsScene& r);
    virtual void drawCurrentState(QGraphicsScene& r, QPointF p);
	void move(QPointF& p);

protected:
    QPointF* secondPoint;

};
#endif // !defined(EA_BADBA80A_352A_4ee9_818E_17392E464530__INCLUDED_)
