#pragma once
#include <math.h>

class Shape
{
public:
	virtual double getArea() = 0;
	virtual double getPerimeter() = 0;
protected:
	double pythagoras(double s1, double s2)
	{
		return sqrt(s1 * s1 + s2 * s2);
	}
};