#include "function.h"
#include <iostream>
function::function(int data) : data(data)
{
}

void function::print()
{
    std::cout << data << std::endl;
}