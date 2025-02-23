#include "ClassWithConstructors.h"
#include "ClassWithoutConstructors.h"

int main()
{
    ClassWithoutConstructors noCtrs;
    noCtrs.init(1, 2.0, "Hello!");
    noCtrs.printAllDataMembers();

    ClassWithConstructors withCtrs{1, 2.0, "Hello!"};
    withCtrs.printAllDataMembers();

    return 0;
}