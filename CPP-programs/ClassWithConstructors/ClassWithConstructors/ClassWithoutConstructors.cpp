#include <iostream>
#include "ClassWithoutConstructors.h"

void ClassWithoutConstructors::init(int _x, float _y, std::string _z) {
    m_x = _x; m_y = _y; m_z = _z;
};
void ClassWithoutConstructors::printAllDataMembers() {
    std::cout << "x is " << m_x << ", y is " << m_y << ", z is " << m_z << std::endl;
};