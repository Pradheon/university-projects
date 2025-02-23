#include "Circle.h"

double Circle::getArea()
{
	return radius * radius * PI;
}
double Circle::getPerimeter()
{
	return radius * 2 * PI;
}
void Circle::setRadius(double r)
{
	radius = r;
}