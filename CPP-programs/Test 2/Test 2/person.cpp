#include <iostream>
#include "person.h"

std::string person::getFirstName()
{
	return m_firstName;
}

std::string person::getLastName()
{
	return m_lastName;
}

unsigned int person::getAge()
{
	return m_age;
}

void person::setFirstName(std::string _firstName)
{
	m_firstName = _firstName;
}

void person::setLastName(std::string _lastName)
{
	m_lastName = _lastName;
}

void person::setAge(unsigned int _age)
{
	m_age = _age;
}

void person::sayHello()
{
	std::cout << std::endl << "Hello, my name is " << m_firstName << " " << m_lastName << "." 
		<< " I am " << m_age << " years old." << std::endl;
}