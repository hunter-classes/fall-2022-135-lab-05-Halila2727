#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Divisible By Cases")
{
	CHECK(isDivisibleBy(4, 2) == true);
    CHECK(isDivisibleBy(-4, 2) == true);\
    CHECK(isDivisibleBy(14, 4) == false);
    CHECK(isDivisibleBy(2000, 0) == false);
}

