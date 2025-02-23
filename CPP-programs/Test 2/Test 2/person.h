#pragma once
#include <string>

class person
{
private:
	std::string m_firstName;
	std::string m_lastName;
	unsigned int m_age;
public:
	std::string getFirstName();
	std::string getLastName();
	unsigned int getAge();
	void setFirstName(std::string _firstName);
	void setLastName(std::string _lastName);
	void setAge(unsigned int _age);
	void sayHello();
};

