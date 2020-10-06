#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "for.h"
#include "value_ref.h"
#include "vec.h"

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

TEST_CASE("Test get area default parameters")
{
	REQUIRE(get_area(5, 5) == 25);
	REQUIRE(get_area() == 200);
	REQUIRE(get_area(5) == 50);
}

TEST_CASE("Test value and reference parameters")
{
	int num1 = 0, num2 =0;

	pass_by_val_and_ref(num1, num2);

	REQUIRE(num1 == 0);
	REQUIRE(num2 == 50);
}

TEST_CASE("Test function string value parameter")
{
	std::string name = "john";

	loop_string_w_index(name);

	REQUIRE(name == "john");
}

TEST_CASE("Test function string reference parameter")
{
	std::string name = "john";

	loop_string_w_index_ref(name);

	REQUIRE(name == "zzzz");
}

TEST_CASE("Test function string reference parameter for ranged w value target variable")
{
	std::string name = "john";

	loop_string_w_index_for_ranged(name);

	REQUIRE(name == "john");
}

TEST_CASE("Test function string reference parameter for ranged w ref target variable")
{
	std::string name = "john";

	loop_string_w_index_for_ranged_ref(name);

	REQUIRE(name == "zzzz");
}

TEST_CASE("Test function vector value parameter")
{
	std::vector<int> nums{10, 4, 2};
	std::vector<int> expected_vector{10, 4, 2};

	loop_vector_w_index(nums);

	REQUIRE(nums == expected_vector);
}

TEST_CASE("Test function vector reference parameter")
{
	std::vector<int> nums{10, 4, 2};
	std::vector<int> expected_vector{0, 0, 0};

	loop_vector_w_index_ref(nums);

	REQUIRE(nums == expected_vector);
}

TEST_CASE("Test function vector reference parameter w for ranged value target variable")
{
	std::vector<int> nums{10, 4, 2};
	std::vector<int> expected_vector{10, 4, 2};

	loop_vector_w_index_for_ranged(nums);

	REQUIRE(nums == expected_vector);
}

TEST_CASE("Test function vector reference parameter w for ranged reference target variable")
{
	std::vector<int> nums{10, 4, 2};
	std::vector<int> expected_vector{0, 0, 0};

	loop_vector_w_index_for_ranged_ref(nums);

	REQUIRE(nums == expected_vector);
}