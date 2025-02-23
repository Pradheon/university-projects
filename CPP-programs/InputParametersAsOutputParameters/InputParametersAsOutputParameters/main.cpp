#include <iostream>

void foo(int x, int y, int z, double* pA, double* pB, double* pC)
{
	*pA = x * 1;
	*pB = y * 2;
	*pC = z * 3;
}

int main()
{
	double A, B, C;

	foo(11, 22, 33, &A, &B, &C);
	std::cout << "A is " << A << ", B is " << B << ", C is " << C << "." << std::endl;

	return 0;
}