#include <iostream>
#include "employee.h"

unsigned int employee::getSerialNumber()
{
	return m_serialNumber;
}

void employee::setSerialNumber(unsigned int _serialNumber)
{
	m_serialNumber = _serialNumber;
}

void employee::sayHello()
{
	std::cout << "Hello, my name is " << getFirstName() << " " << getLastName() << " "
		<< "and my serial number is " << getSerialNumber() << "." << std::endl;
}