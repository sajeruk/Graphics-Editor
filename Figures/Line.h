///////////////////////////////////////////////////////////
//  Line.h
//  Implementation of the Class Line
//  Created on:      22-Sep-2013 18:14:41
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#if !defined(EA_EE805A40_9B94_4664_BCCF_B5E50C48EF1A__INCLUDED_)
#define EA_EE805A40_9B94_4664_BCCF_B5E50C48EF1A__INCLUDED_

#include "Ray.h"

class Line : public Ray
{

public:
    Line(QPointF p);
	virtual ~Line();

	void draw(QGraphicsScene& r);

};
#endif // !defined(EA_EE805A40_9B94_4664_BCCF_B5E50C48EF1A__INCLUDED_)
