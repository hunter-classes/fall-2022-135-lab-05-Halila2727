/*
  Author: Halil Akca
  Course: CSCI-135
  Instructor: Mike Zamansky
  Assignment: Lab 05
  This program will call the functions made in other .cpp files
*/
#include <iostream>


#include "funcs.h"

int main()
{
  std::cout << "\nisDivisibleBy() function:\n12 divided by 3\n";
  std::cout << isDivisibleBy(12, 3);
  std::cout << "\n------------------\n";

  std::cout << "\nisPrime() function:\n14 | 19\n";
  std::cout << isPrime(14) << " | " << isPrime(19);
  std::cout << "\n------------------\n";

  std::cout << "\nnextPrime() function:\n14 | 5329\n";
  std::cout << nextPrime(14) << " | " << nextPrime(5329);
  std::cout << "\n------------------\n";

  std::cout << "\ncountPrimes() function:\n1 to 100\n";
  std::cout << countPrimes(1, 100);
  std::cout << "\n------------------\n";

  std::cout << "\nisTwinPrime() function:\n29 | 37\n";
  std::cout << isTwinPrime(29) << " | " << isTwinPrime(37);
  std::cout << "\n------------------\n";

  std::cout << "\nnextTwinPrime() function:\n14 | 5329\n";
  std::cout << nextTwinPrime(14) << " | " << nextTwinPrime(5329);
  std::cout << "\n------------------\n";
  return 0;
}
