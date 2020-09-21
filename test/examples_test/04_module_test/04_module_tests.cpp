#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "for.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test sum of squares function")
{
	REQUIRE(sum_of_squares(3) == 14);
	REQUIRE(sum_of_squares(4) == 30);
	REQUIRE(sum_of_squares(5) == 55);
}

TEST_CASE("Test sum of squares function 2")
{
	REQUIRE(sum_of_squares_2(3) == 14);
	REQUIRE(sum_of_squares_2(4) == 30);
	REQUIRE(sum_of_squares_2(5) == 55);
}

TEST_CASE("Test sum number function")
{
	REQUIRE(sum_of_number(3) == 12);
	REQUIRE(sum_of_number(4) == 20);
	REQUIRE(sum_of_number(5) == 30);
}

TEST_CASE("Test sum number function 2")
{
	REQUIRE(sum_of_number_2(3) == 12);
	REQUIRE(sum_of_number_2(4) == 20);
	REQUIRE(sum_of_number_2(5) == 30);
}