#include <iostream>
#include "Human.h"

int main()
{
	Mammal* m = new Mammal{"Max"};
	m->printIsHungry();
	m->feedMilk();
	m->printIsHungry();

	m->feedMilk();

	Human* h = new Human{"Bob"};
	h->speak("Hello, World!");
	h->printIsHungry();
	h->feedMilk();
	h->printIsHungry();

	m = h;
	m->printIsHungry();
	//m->speak();
	h->speak("Ciao, Mondo");

	return 0;
}