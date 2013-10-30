///////////////////////////////////////////////////////////
//  Figure.h
//  Implementation of the Class Figure
//  Created on:      20-sep-2013 23:44:49
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#include <QPointF>
#include <QGraphicsScene>

#if !defined(EA_27F5B872_6877_44c4_9870_EB4F178B0619__INCLUDED_)
#define EA_27F5B872_6877_44c4_9870_EB4F178B0619__INCLUDED_

class Figure
{

public:
    inline Figure(QPointF p): theCenter(p), _fin(false) {
        borderColor = NULL;
	}

	virtual inline ~Figure() {
        if (!borderColor)
            delete borderColor;
	}

    virtual void addPoint(QPointF p) = 0;
	virtual void draw(QGraphicsScene& r) = 0;
    virtual void drawCurrentState(QGraphicsScene& r, QPointF p) = 0;
    virtual void move(QPointF& p);
	void setBorderColor(QColor* color);
    virtual bool isFinished();

protected:
	QPointF theCenter;
    bool _fin;

    QPen getPen();

private:
	QColor* borderColor;

};
#endif // !defined(EA_27F5B872_6877_44c4_9870_EB4F178B0619__INCLUDED_)
