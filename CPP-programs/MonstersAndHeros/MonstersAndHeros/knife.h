#pragma once
#include "weapon.h"

class knife : public weapon
{
public:
	knife(int _damage) : weapon{ _damage } {}
};