#pragma once
#include <string>
#include "Mammal.h"

class Human : public Mammal
{
public:
	Human(std::string _name);
	void speak(std::string msg);
};

