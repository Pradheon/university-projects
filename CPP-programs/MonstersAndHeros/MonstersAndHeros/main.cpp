#include <iostream>
#include <vector>
#include "monster.h"
#include "vampire.h"
#include "werewolf.h"
#include "zombie.h"
#include "avatar.h"
#include "sword.h"
#include "knife.h"
#include "bow.h"

using namespace std;

int main()
{
	vector<monster*> monsters = { new vampire{"Dracula", 8, 30}, new werewolf{"Tony", 11, 35}, new zombie{"Jeff", 7, 25}};
	avatar hero{100};
	sword sword{9};
	knife knife{7};
	bow bow{12, 3};

	while (hero.isAlive() && !monsters.empty())
	{
		cout << endl;
		cout << "The hero has " << hero.getEnergy() << " energy left." << endl;

		/*
		The hero always attacks first, attacks the last monster, and if by the time the hero is done with it, it has died,
		then the loop continues, otherwise the monster is given an opportunity to attack the hero.
		*/
		cout << "Choose an option between 1 and 3:" << endl;
		cout << "[1] Sword" << endl;
		cout << "[2] Knife" << endl;
		cout << "[3] Bow (" << bow.getArrows() << ")" << endl;
		int option;
		cin >> option;

		monster* monster = monsters.back();
		if (option == 1)
		{
			auto damage = sword.getDamage();
			monster->decreaseEnergy(damage);
			cout << "The hero hits the monster with a sword causing " << damage << " damage." << endl;
		}
		else if (option == 2)
		{
			monster->decreaseEnergy(knife.getDamage());
			cout << "The hero hits the monster with a knife." << endl;
		}
		else if (option == 3)
		{
			if (bow.getArrows() > 0)
			{
				monster->decreaseEnergy(bow.getDamage());
				bow.decreaseArrows(1);
				cout << "The hero hits the monster with an arrow." << endl;
				cout << "Bow has " << bow.getArrows() << " left." << endl;
			}
			else
			{
				cerr << "Bow has " << bow.getArrows() << " arrows left. You can no longer use the bow." << endl;
				continue;
			}
		}
		else
		{
			cerr << "ERROR: The option MUST be a number between 1 and 3." << endl;
			continue;
		}

		if (monster->isAlive())
		{
			cout << "The " << monster->getName() << " has " << monster->getEnergy() << " energy left." << endl;
		}
		else
		{
			cout << "The " << monster->getName() << " has died." << endl;
			monsters.pop_back();
			continue;
		}

		// Now the monster can attack the hero.
		int monsterDamage = monster->getDamage();
		hero.decreaseEnergy(monsterDamage);
		cout << "The monster " << monster->getName() << " inflicts " << monsterDamage << " Damage to the hero." << endl;
	}

	// Either the hero is dead or ALL monsters are dead.
	if (hero.isAlive())
	{
		cout << endl << "You WON the game, you have killed ALL monsters!" << endl;
	}
	else
	{
		cout << endl << "Game Over, you have been killed by the monsters!" << endl;
	}

	return 0;
}