#pragma once
#include "Animal.h"

/**
*	Crow is a concrete class because even though it derives from Animal
*	that is an ABC class, it implements all of its pure virtual function members
*	(in this case eat() is the only pure virtual member function)
**/
class Crow : public Animal
{
private:
	int c;
public:
	Crow(int _x, int _c) : Animal{ _x }, c{ _c }
	{
		std::cout << "Crow::Crow()" << std::endl;
	}
	~Crow() override
	{
		std::cout << "Crow::~Crow()" << std::endl;
	}
	void eat() override
	{
		std::cout << "Crow::eat()" << std::endl;
	}
	void fly()
	{
		std::cout << "Crow::fly()" << std::endl;
	}
};

