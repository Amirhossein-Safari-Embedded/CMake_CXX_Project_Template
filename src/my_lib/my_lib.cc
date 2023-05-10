#include <iostream>

#include "my_lib.h"

int print_hello_world(void)
{
    std::cout << "Hello World!\n";
    return 1;
}


unsigned int factorial(unsigned int n)
{
    return n <=1 ? 1 : factorial(n-1) * n;
}
