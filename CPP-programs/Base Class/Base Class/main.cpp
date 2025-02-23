#include <iostream>
#include "person.h"

int main()
{
	person p1;
	//p1.setFirstName("Alice");
	//p1.setLastName("Cooper");
	p1.setFullName("Alice", "Cooper");
	std::cout << "Hi, my name is " << p1.getFirstName() << " " << p1.getLastName() << "." << std::endl;

	p1.setFirstName("Ray");
	std::cout << "Hi, my name is " << p1.getFirstName() << " " << p1.getLastName() << "." << std::endl;

	p1.setLastName("Doe");
	std::cout << "Hi, my name is " << p1.getFirstName() << " " << p1.getLastName() << "." << std::endl;
	return 0;
}