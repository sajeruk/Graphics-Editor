///////////////////////////////////////////////////////////
//  Ellipse.h
//  Implementation of the Class Ellipse
//  Created on:      22-Sep-2013 18:14:43
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#if !defined(EA_B83ABA57_BF84_43e5_AF3E_3AEF433F3D7A__INCLUDED_)
#define EA_B83ABA57_BF84_43e5_AF3E_3AEF433F3D7A__INCLUDED_

#include "Figure2D.h"

class Ellipse : public Figure2D
{

public:
    Ellipse(QPointF p);
	virtual ~Ellipse();

    virtual void addPoint(QPointF p);
	virtual void draw(QGraphicsScene& r);
    virtual void drawCurrentState(QGraphicsScene& r, QPointF p);
    bool isFinished() override;

protected:
    qreal aRadius;
    qreal bRadius;

};
#endif // !defined(EA_B83ABA57_BF84_43e5_AF3E_3AEF433F3D7A__INCLUDED_)
