#include <iostream>
#include "funcs.h"

// add functions here

bool isDivisibleBy(int n, int d)
{
    if(d == 0)
    {
        return false;
    }
    if(n % d == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}