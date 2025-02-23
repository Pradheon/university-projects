#pragma once
#include "monster.h"

class werewolf : public monster
{
public:
	werewolf(string _name, int _damage, int _energy) : monster{ _name, _damage, _energy } {}
	string getName() override
	{
		string temp = "werewolf " + m_name;
		return temp;
	}
};