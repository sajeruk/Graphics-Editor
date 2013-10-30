///////////////////////////////////////////////////////////
//  Figure2D.h
//  Implementation of the Class Figure2D
//  Created on:      22-Sep-2013 18:14:41
//  Original author: TORIAS
///////////////////////////////////////////////////////////

#if !defined(EA_43BFA2F3_662C_40e1_B2AC_E28AAD6EAB46__INCLUDED_)
#define EA_43BFA2F3_662C_40e1_B2AC_E28AAD6EAB46__INCLUDED_

#include "Figure.h"

class Figure2D : public Figure
{

public:
    Figure2D(QPointF p);
    virtual ~Figure2D();

    void setFillColor(QColor* color);

protected:
     QBrush getBrush();


private:
	QColor* fillColor;

};
#endif // !defined(EA_43BFA2F3_662C_40e1_B2AC_E28AAD6EAB46__INCLUDED_)
