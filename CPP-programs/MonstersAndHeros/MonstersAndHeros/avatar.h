#pragma once
class avatar
{
private:
	int m_energy;
public:
	avatar(int _energy) : m_energy{ _energy } {}
	int getEnergy()
	{
		return m_energy;
	}
	bool isAlive()
	{
		bool isAlive = m_energy > 0;
		return isAlive;
	}
	void decreaseEnergy(int damage)
	{
		m_energy -= damage;
		if (m_energy < 0)
		{
			m_energy = 0;
		}
	}
};

