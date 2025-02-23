#pragma once
#include "weapon.h"

class sword : public weapon
{
public:
	sword(int _damage) : weapon{ _damage } {}
};

