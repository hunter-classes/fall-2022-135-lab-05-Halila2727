#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("Divisible By Cases")
{
	CHECK(isDivisibleBy(4, 2) == true);
    CHECK(isDivisibleBy(-4, 2) == true);
    CHECK(isDivisibleBy(14, 4) == false);
    CHECK(isDivisibleBy(2000, 0) == false);
}

TEST_CASE("Is Prime Cases")
{
    CHECK(isPrime(0) == false);
    CHECK(isPrime(1) == false);
    CHECK(isPrime(-3) == false);
    CHECK(isPrime(69) == false);
    CHECK(isPrime(89) == true);
}

TEST_CASE("Next Prime Cases")
{
    CHECK(nextPrime(0) == 2);
    CHECK(nextPrime(-15) == 2);
    CHECK(nextPrime(182) == 191);
}

TEST_CASE("Count Primes Cases")
{
    CHECK(countPrimes(-111111, 2) == 1);
    CHECK(countPrimes(1, 100) == 25);
    CHECK(countPrimes(150, 188) == 7);
}

TEST_CASE("Is Twin Prime Cases")
{
    CHECK(isTwinPrime(15) == false);
    CHECK(isTwinPrime(19) == true);
    CHECK(isTwinPrime(37) == false);
    CHECK(isTwinPrime(2) == false);
}

TEST_CASE("Next Twin Prime Cases")
{
    CHECK(nextTwinPrime(0) == 3);
    CHECK(nextTwinPrime(-135267) == 3);
    CHECK(nextTwinPrime(180) == 181);
}