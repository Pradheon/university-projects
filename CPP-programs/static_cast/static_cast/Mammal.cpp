#include <iostream>
#include "Mammal.h"

Mammal::Mammal(std::string _name) : name { _name }, isHungry { true }
{

}

std::string Mammal::getName()
{
	return name;
}

bool Mammal::getIsHungry()
{
	return isHungry;
}

void Mammal::printIsHungry()
{
	if (getIsHungry())
		std::cout << getName() << " is hungry" << std::endl;
	else
		std::cout << getName() << " is not hungry" << std::endl;
}

void Mammal::feedMilk()
{
	isHungry = false;
}
