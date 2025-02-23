#pragma once
#include "Shape.h"

const double PI = 3.1415;

class Circle : public Shape
{
public:
	double getArea() override;
	double getPerimeter() override;
	void setRadius(double r);
private:
	double radius;
};

