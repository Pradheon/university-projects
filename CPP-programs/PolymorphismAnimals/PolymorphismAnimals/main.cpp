#include <vector>
#include <iostream>
#include "Animal.h"
#include "Antelope.h"
#include "Bear.h"
#include "Crow.h"

int main()
{
	std::vector<Animal*>animals =
	{
		new Antelope{0, 1}, new Bear{0, 2}, new Crow{0, 3},
		new Antelope{1, 11}, new Bear{1, 22}, new Crow{1, 33},
		new Antelope{2, 111}, new Bear{2, 222}, new Crow{2, 333},
	};

	for (auto animal : animals)
	{
		animal->eat();
		//animal->jump(); //ERROR: I would need an Antelope pointer for this to work.
		//animal->swim(); //ERROR: I would need a Bear pointer for this to work.
		//animal->fly(); //ERROR: I would need a Crow pointer for this to work.
	}

	return 0;
}