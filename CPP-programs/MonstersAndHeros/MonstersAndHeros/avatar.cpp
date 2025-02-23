#include "avatar.h"

bool avatar::isAlive()
{
	bool isAlive = energy > 0;
	return isAlive;
};
void avatar::decreaseEnergy(int damage)
{
	energy -= damage;
	if (energy < 0)
	{
		energy = 0;
	}
}
