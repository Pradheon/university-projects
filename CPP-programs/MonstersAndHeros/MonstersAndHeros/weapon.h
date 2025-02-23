#pragma once
class weapon
{
private:
	int m_damage;
public:
	weapon(int _damage) : m_damage{_damage} {}
	virtual ~weapon() {}
	int getDamage()
	{
		return m_damage;
	}
};

