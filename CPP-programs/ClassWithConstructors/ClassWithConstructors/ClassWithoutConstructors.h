#pragma once

class ClassWithoutConstructors
{
private:
    int m_x;
    float m_y;
    std::string m_z;
public:
    void init(int _x, float _y, std::string _z);
    void printAllDataMembers();
};

