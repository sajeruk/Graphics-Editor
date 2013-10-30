///////////////////////////////////////////////////////////
//  Ray.h
//  Implementation of the Class Ray
//  Created on:      22-Sep-2013 18:14:42
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#if !defined(EA_76C926EB_2338_40c7_B160_8F13C26D4D4C__INCLUDED_)
#define EA_76C926EB_2338_40c7_B160_8F13C26D4D4C__INCLUDED_

#include "Segment.h"

class Ray : public Segment
{

public:
    Ray(QPointF p);
	virtual ~Ray();

	virtual void draw(QGraphicsScene& r);

};
#endif // !defined(EA_76C926EB_2338_40c7_B160_8F13C26D4D4C__INCLUDED_)
