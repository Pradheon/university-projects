#include <iostream>

int main()
{
	int counter = 0;
	while (counter < 10) {
		std::cout << "Hello" << std::endl;
		counter++;
	}
	std::cout << "The counter is " << counter << std::endl;

	return 0;
}