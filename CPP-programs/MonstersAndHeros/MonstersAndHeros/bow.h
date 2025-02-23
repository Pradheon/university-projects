#pragma once
#include "weapon.h"

class bow : public weapon
{
private:
	int m_arrows;
public:
	bow(int _damage, int _arrows) : weapon{ _damage }, m_arrows{ _arrows } {}
	int getArrows()
	{
		return m_arrows;
	}
	void decreaseArrows(int arrow)
	{
		m_arrows -= arrow;
		if (m_arrows < 0)
		{
			m_arrows = 0;
		}
	}
};