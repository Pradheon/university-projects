#pragma once
#include <string>

class Mammal
{
private:
	std::string name;
	bool isHungry;
public:
	Mammal(std::string _name);
	std::string getName();
	bool getIsHungry();
	void printIsHungry();
	void feedMilk();
};

