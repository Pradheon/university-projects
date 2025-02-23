#include <iostream>
#include "person.h"
#include "employee.h"

int main()
{
	person p1;
	p1.setFirstName("John");
	p1.setLastName("Doe");
	p1.setAge(25);
	p1.sayHello();

	employee e1;
	e1.setFirstName("John");
	e1.setLastName("Doe");
	e1.setSerialNumber(12345);
	e1.sayHello();

	return 0;
}
