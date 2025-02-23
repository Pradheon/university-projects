#include <iostream>

void f(int larger_, int smaller_, int* quotient_, int* remainder_)
{
	*quotient_ = larger_ / smaller_;
	*remainder_ = larger_ % smaller_;
}

int main()
{
	const int N1 = 3;
	const int N2 = 100;

	int quotient = -1;
	int remainder = -1;

	if (N1 > N2)
	{
		f(N1, N2, &quotient, &remainder);
	}
	else
	{
		f(N2, N1, &quotient, &remainder);
	}

	std::cout << "Q = " << quotient << ", R = " << remainder << std::endl;
}