#pragma once
#include "monster.h"

class zombie : public monster
{
public:
	zombie(string _name, int _damage, int _energy) : monster{ _name, _damage, _energy } {}
	string getName() override
	{
		string temp = "zombie " + m_name;
		return temp;
	}
};