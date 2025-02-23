#include <iostream>

int main()
{
	const unsigned int ARRAY_SIZE = 7;
	float abc[ARRAY_SIZE];
	
	// initialize all numbers with zero
	for (int index = 0; index < ARRAY_SIZE; index++)
	{
		abc[index] = 0.0f;
	}

	// assign each element of the array with a value equals its own index within the array
	for (int index = 0; index < ARRAY_SIZE; index++)
	{
		abc[index] = abc[index] + index;
	}

	// print each element of the array from the first to the last
	for (int index = 0; index < ARRAY_SIZE; index++)
	{
		std::cout << "abc[" << index << "] is " << abc[index] << std::endl;
	}

	return 0;
}