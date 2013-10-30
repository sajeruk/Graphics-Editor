///////////////////////////////////////////////////////////
//  Polygon.h
//  Implementation of the Class Polygon
//  Created on:      22-Sep-2013 18:14:43
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#if !defined(EA_1CB23FC9_8D63_4240_BBB1_5FE1DD212F0C__INCLUDED_)
#define EA_1CB23FC9_8D63_4240_BBB1_5FE1DD212F0C__INCLUDED_

#include "Figure2D.h"

class Polygon : public Figure2D
{

public:
    Polygon(QPointF p);
	virtual ~Polygon();

    virtual void addPoint(QPointF p);
	virtual void draw(QGraphicsScene& r);
    virtual void drawCurrentState(QGraphicsScene& r, QPointF p);
    virtual void move(QPointF& p) override;
    virtual bool isFinished() override;

protected:
    size_t maxPoints;
    std::vector<QPointF*> points;
private:
    static const int DISTACE_BETWEEN_POINTS = 16;

};
#endif // !defined(EA_1CB23FC9_8D63_4240_BBB1_5FE1DD212F0C__INCLUDED_)
