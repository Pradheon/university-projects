#include <iostream>

void f(int& _z)
{
	_z = 10;
}

void const_f(const int& _z)
{
	//_z = 10;
}

int main()
{
	int i = 4;
	const int& j = i;
	std::cout << "[via i itself] is " << i << std::endl;
	std::cout << "[via j] i is " << j << std::endl;

	/*
	i = 7;
	std::cout << "[via i itself] is " << i << std::endl;
	std::cout << "[via j] i is " << j << std::endl;

	int x = 99;
	std::cout << "x is " << x << std::endl;
	*/
	/*
	f(1);
	std::cout << "[via i itself] is " << i << std::endl;
	std::cout << "[via j] i is " << j << std::endl;
	
	const_f(j)
	std::cout << "[via i itself] is " << i << std::endl;
	std::cout << "[via j] i is " << j << std::endl;
	*/
	
	f(const_cast<int&>(j));
	std::cout << "[via i itself] is " << i << std::endl;
	std::cout << "[via j] i is " << j << std::endl;

	return 0;
}