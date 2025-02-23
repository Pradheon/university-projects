#pragma once
#include <string>

class person
{
private:
	//std::string m_fname; // ex.: Alice
	//std::string m_lname; // ex.: Cooper
	std::string m_fullName; // ex.: Alice Cooper
public:
	std::string getFirstName();
	std::string getLastName();
	void setFullName(std::string _firstName, std::string _lastName);
	void setFirstName(std::string _firstName);
	void setLastName(std::string _lastName);
};