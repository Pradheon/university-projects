#pragma once
#include "person.h"

class employee : public person
{
private:
    unsigned int m_serialNumber;
public:
    unsigned int getSerialNumber();
	void setSerialNumber(unsigned int _serialNumber);
    void sayHello();
};

