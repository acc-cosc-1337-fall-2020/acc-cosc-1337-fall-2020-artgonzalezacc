#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test BankAccount initialization")
{
	BankAccount account;

	REQUIRE(account.get_balance() == 0);
}

TEST_CASE("Test BankAccount deposit function")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);

	account.deposit(100);
	REQUIRE(account.get_balance() == 100);

}

TEST_CASE("Test BankAccount withdraw function")
{
	BankAccount account;
	REQUIRE(account.get_balance() == 0);

	account.deposit(100);
	REQUIRE(account.get_balance() == 100);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 50);
}