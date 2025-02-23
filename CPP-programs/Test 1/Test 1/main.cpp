#include <iostream>
#include "constants.h"

#define PI 3.1415
#define ccirc(_radius) (2 * PI * _radius)
#define carea(_radius) (PI * _radius * _radius)

int main() {
	std::cout << "Euler constant is " << EULER << "." << std::endl;
	std::cout << "PI is " << PI << "." << std::endl;

	float radius = 10.f;
	std::cout << "The circles' circumference is " << ccirc(radius) << "." << std::endl;
	std::cout << "The circle's area is " << PI * carea(radius) << "." << std::endl;

	int x = 7;
	std::cout << "The value of x is " << std::endl;
	std::cout << "                  " << x << "." << std::endl;

	return 0;
}