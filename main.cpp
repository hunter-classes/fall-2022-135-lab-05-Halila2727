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
  return 0;
}
