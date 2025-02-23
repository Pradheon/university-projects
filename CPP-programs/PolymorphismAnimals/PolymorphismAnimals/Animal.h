#pragma once
#include <iostream>

// Animal is a Pure Abstract Class (ABC)
class Animal
{
private:
	int x;
public:
	Animal(int _x) : x{ _x } 
	{
		std::cout << "Animal::Animal()" << std::endl;
	}
	virtual ~Animal()
	{
		std::cout << "Animal::~Animal()" << std::endl;
	}
	virtual void eat() = 0;
};