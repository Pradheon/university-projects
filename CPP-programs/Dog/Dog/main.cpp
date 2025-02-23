#include <iostream>
#include "dog.h"

int main()
{
	dog my_dog;
	my_dog.set_age(4);
	std::cout << "The age of the dog in human years is: " << 7 * my_dog.get_age() << std::endl;
	return 0;
}