#include <iostream>

int main()
{
    std::cout << "Hello World!" << std::endl;
}

/*
We can use ```using namespace variableName``` to declare a variable either in a function or global namespace
For example, in the global namespace you can write the above line of code so you don't have to write ```std::cout``` or similar.
Your code might look like this:
    cout << "Hello World!" << endl;
This allows you to not have to retype it in each function. It might look useful, but in some cases it may not be viable to use for
something like ```std``` as it covers such a large package.

You can also type ```using namespace variableName``` within each function; though, this only allows you to write a line
of code like the above in the function you are using `using namespace variableName`, so other functions will have an error
if you write ```cout << "Hello World!" << endl;``` as it won't know what to do with it. Which means you will have to write
```std::cout << "Hello World!" << std::endl;``` in all other functions without ```using namespace variableName```.
*/