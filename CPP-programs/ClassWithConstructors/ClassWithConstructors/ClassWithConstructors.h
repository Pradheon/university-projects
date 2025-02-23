#pragma once
#include <string>

class ClassWithConstructors
{
private:
    int m_x;
    float m_y;
    std::string m_z;
public:
    ClassWithConstructors(int _x, float _y, std::string _z);
    void printAllDataMembers();
};