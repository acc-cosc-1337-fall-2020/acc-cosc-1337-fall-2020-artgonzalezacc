#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test reference an pointer function parameters")
{
	int n1 =1, n2 =2;
	ref_ptr(n1, &n2);

	REQUIRE(n1 == 10);
	REQUIRE(n2 == 20);
}
