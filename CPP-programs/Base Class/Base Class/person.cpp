#include <iostream>
#include "person.h"

std::string person::getFirstName()
{
	size_t firstNameLength = 0;
	firstNameLength = m_fullName.find_first_of(" ");
	//std::cout << "firstNameLength is " << firstNameLength << std::endl;
	std::string fname = m_fullName.substr(0, firstNameLength);
	//std::cout << "First name is " << fname << std::endl;
	return fname;
}
std::string person::getLastName()
{
	size_t lastNameLength = 0;
	lastNameLength = m_fullName.find_first_of(" ");
	//std::cout << "lastNameLength is " << lastNameLength+1 << std::endl;
	std::string lname = m_fullName.substr(lastNameLength+1, m_fullName.length());
	//std::cout << "Last name is " << lname << std::endl;
	return lname;
}
void person::setFirstName(std::string _firstName)
{
	std::string lname = getLastName();
	m_fullName = _firstName + " " + lname;
}
void person::setLastName(std::string _lastName)
{
	std::string fname = getFirstName();
	m_fullName = _lastName + " " + fname;
}
void person::setFullName(std::string _firstName, std::string _lastName)
{
	m_fullName = _firstName + " " + _lastName;
}