#include <iostream>

int main()
{
	/*********************************************************************************************************************
		Integer Division
	*********************************************************************************************************************/
	std::cout << "Integer Division: " << std::endl;

	int number = 20;
	int divisor = 6;

	int dividend = number / divisor;
	int remainder = number % divisor;

	std::cout << "The divided of " << number << " divided by " << divisor << " is " << dividend << "." << std::endl;
	std::cout << "The remainder of " << number << " divided by " << divisor << " is " << remainder << "." << std::endl;

	// Loop that prints numbers a certain number of times.
	for (int i = 0; i <= 20; i++)
	{
		std::cout << (i % divisor) << std::endl;
	}
	std::cout << std::endl;


	/*********************************************************************************************************************
		Alphabet Division
	*********************************************************************************************************************/
	std::cout << "Alphabet Division: " << std::endl;

	// List of English alphabet characters.
	char alphabet[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
		'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

	// Loop that prints letters of alphabet a certain number of times.
	for (int i = 0; i < 104; i++)
	{
		std::cout << alphabet[i % 26] << " ";
	}
	std::cout << std::endl;

	return 0;
}