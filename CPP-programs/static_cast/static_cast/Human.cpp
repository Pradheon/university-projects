#include <iostream>
#include "Human.h"

Human::Human(std::string _name) : Mammal{_name}
{

}

void Human::speak(std::string msg)
{
	std::cout << getName() << " says " << msg << "." << std::endl;
}
