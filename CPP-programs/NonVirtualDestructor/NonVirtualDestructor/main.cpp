#include <iostream>

int main(void)
{
	Base* b = new Derived(1, 2.0);
	b->setX(3);
	std::cout << "b's X is " << b->getX() << std::endl;
	delete b;

	Derived* d = new Derived(1, 2.0);
	d->setX(3);
	std::cout << "d's X is " << d->getX() << std::endl;
	d->setY(4.0);
	std::cout << "d's Y is" << d->getY() << std::endl;
	delete d;

	return 0;
}