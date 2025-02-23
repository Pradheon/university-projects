#include <iostream>

class ClassWithCtorAndDtor
{
private:
    std::string* m_name;
public:
    ClassWithCtorAndDtor()
        : m_name{ new std::string{"Alice"} }
    {
        std::cout << *m_name << " has been created." << std::endl;
    }
    ~ClassWithCtorAndDtor() {
        std::cout << *m_name << " is about to be destroyed." << std::endl;
        delete m_name;
    }
};

 

void foo()
{
    std::cout << "Before the ctor." << std::endl;
    ClassWithCtorAndDtor withDtor{};
    std::cout << "After the ctor." << std::endl;
}

int main()
{
    foo();
    return 0;
}