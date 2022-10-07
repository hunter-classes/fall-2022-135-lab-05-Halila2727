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

bool isPrime(int n)
{
    if(n < 2)
    {
        return false;
    }
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int nextPrime(int n)
{
    for(int i = n+1; i < 2147483647; i++)
    {
        if(isPrime(i) == true)
        {
            return i;
        }
    }
    return -1;
}

int countPrimes(int a, int b)
{
    int larger, smaller;
    int count = 0;
    if(a > b)
    {
        larger = a;
        smaller = b;
    }
    else
    {
        larger = b;
        smaller = a;
    }

    for(int i = smaller; i <= larger; i++)
    {
        if(isPrime(i) == true)
        {
            count++;
        }
    }
    return count;
}