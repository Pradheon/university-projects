#pragma once
#include <string>
using namespace std;


class monster
{
protected:
	string m_name;
	int m_damage;
	int m_energy;
public:
	monster(string _name, int _damage, int _energy) : m_name{ _name }, m_damage{ _damage }, m_energy{ _energy } {}
	virtual ~monster() {}
	virtual string getName() = 0;
	int getDamage()
	{
		return m_damage;
	}
	bool isAlive()
	{
		bool isAlive = m_energy > 0;
		return isAlive;
	}
	int getEnergy()
	{
		return m_energy;
	}
	void decreaseEnergy(int damage)
	{
		m_energy -= damage;
	}
};

