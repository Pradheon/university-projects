#pragma once
#include "Animal.h"

/**
*	Bear is a concrete class because even though it derives from Animal
*	that is an ABC class, it implements all of its pure virtual function members
*	(in this case eat() is the only pure virtual member function)
**/
class Bear : public Animal
{
private:
	int b;
public:
	Bear(int _x, int _b) : Animal{ _x }, b{ _b }
	{
		std::cout << "Bear::Bear()" << std::endl;
	}
	~Bear() override
	{
		std::cout << "Bear::~Bear()" << std::endl;
	}
	void eat() override
	{
		std::cout << "Bear::eat()" << std::endl;
	}
	void swim()
	{
		std::cout << "Bear::swim()" << std::endl;
	}
};

