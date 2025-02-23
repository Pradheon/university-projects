#pragma once
#include "Shape.h"

class RectangleTriangle : public Shape
{
public:
	double getArea() override;
	double getPerimeter() override;
	void setCatets(double c1, double c2);
	double getHypotenuse();
private:
	double width;
	double height;
};

