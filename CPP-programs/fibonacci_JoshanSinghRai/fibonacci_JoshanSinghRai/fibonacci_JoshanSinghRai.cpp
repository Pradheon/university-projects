#include <iostream>

int main()
{
	int fib[10];
	fib[0] = 0;
	fib[1] = 1;

	// Calculates the remaining fibonaci sequence.
	for (int i = 2; i < 10; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	
	// Prints the full fibonnaci sequence.
	for (int i = 0; i < 10; i++)
	{
		if (i < 9)
		{
			std::cout << fib[i] << ", ";
		}
		else
		{
			std::cout << fib[i] << ".";
		}
	}

	return 0;
}