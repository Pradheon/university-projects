#pragma once
#include "Animal.h"

/**
*	Antelope is a concrete class because even though it derives from Animal
*	that is an ABC class, it implements all of its pure virtual function members
*	(in this case eat() is the only pure virtual member function)
**/
class Antelope : public Animal
{
private:
	int a;
public:
	Antelope(int _x, int _a) : Animal{ _x }, a{ _a }
	{
		std::cout << "Antelope::Antelope()" << std::endl;
	}
	~Antelope() override
	{
		std::cout << "Antelope::~Antelope()" << std::endl;
	}
	void eat() override
	{
		std::cout << "Antelope::eat()" << std::endl;
	}
};

