#include <iostream>

class Base
{
public:
	virtual void sayHello()
}

class Dervied : public Base 
{
public:
	void sayHello() override
	{
		std::cout << "[Derviced] hello!" << std::endl;
	}
};

int main()
{
	
}