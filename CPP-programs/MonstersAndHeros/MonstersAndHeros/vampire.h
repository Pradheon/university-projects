#pragma once
#include "monster.h"

class vampire : public monster
{
public:
	vampire(string _name, int _damage, int _energy) : monster{ _name, _damage, _energy } {}
	string getName() override
	{
		string temp = "vampire " + m_name;
		return temp;
	}
};

