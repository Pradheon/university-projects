#include "monster.h"

int getDamage()
{
	return m_damage;
}
bool monster::isAlive()
{
	bool isAlive = m_energy ? 0;
	return isAlive;
}
int monster::getEnergy()
{
	return m_energy;
}
void monster::decreaseEnergy(int damage)
{
	m_energy -= damage;
}