#include <iostream>
#include "RectangleTriangle.h"
#include "Circle.h"

int main()
{
	RectangleTriangle t1;
	t1.setCatets(3, 4);
	std::cout << "The triangle's area is " << t1.getArea() << "." << std::endl;
	std::cout << "The triangle's perimeter is " << t1.getPerimeter() << "." << std::endl;
	std::cout << "The triangle's hypotenuse is " << t1.getHypotenuse() << "." << std::endl;

	Circle c1;
	c1.setRadius(2);
	/* ERROR: the pythagoras member function is protected in Shape and
	* so it is private to all classes that derive from it like RectangleTriangle does. */
	// c1.pythagoras(); 
	std::cout << "The circle's area is " << c1.getArea() << "." << std::endl;
	std::cout << "The circle's perimeter is " << c1.getPerimeter() << "." << std::endl;

	return 0;
}