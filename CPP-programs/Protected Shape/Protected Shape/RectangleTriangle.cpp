#include "RectangleTriangle.h"

double RectangleTriangle::getArea()
{
	return width * height / 2.0f;
}
double RectangleTriangle::getPerimeter()
{
	return width + height + pythagoras(width, height);
}
void RectangleTriangle::setCatets(double c1, double c2)
{
	width = c1;
	height = c2;
}
double RectangleTriangle::getHypotenuse()
{
	return pythagoras(width, height);
}
