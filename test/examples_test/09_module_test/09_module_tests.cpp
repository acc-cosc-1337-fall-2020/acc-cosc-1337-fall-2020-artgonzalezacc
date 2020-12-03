#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
TEST_CASE("Test reference an pointer function parameters")
{
	int n1 =1, n2 =2;
	ref_ptr(n1, &n2);

	REQUIRE(n1 == 10);
	REQUIRE(n2 == 20);
}
*/
TEST_CASE("Test create new Vector from an existing Vector instance check size")
{
	Vector<int> v1(3);
    Vector<int> v2 = v1;	

	REQUIRE(v1.Size() == v2.Size());
}

TEST_CASE("Test create new Vector from an existing Vector instance check elements")
{
	Vector<int> v1(3);
    Vector<int> v2 = v1;
	v1[0] = 5;

	REQUIRE(v1[0] != v2[0]); 
}

TEST_CASE("Test overwrite new Vector from an existing Vector instance check elements")
{
	Vector<int> v3(3);
	Vector<int> v4(3);
	
    v4 = v3;
	v3[0] = 5;

	REQUIRE(v4[0] != v3[0]);
}
