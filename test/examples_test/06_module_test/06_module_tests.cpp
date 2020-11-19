#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"

#include<memory>
#include<utility>

using std::unique_ptr; using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test BankAccount initialization")
{
	unique_ptr<BankAccount> account = make_unique<CheckingAccount>(100);

	REQUIRE(account->get_balance() == 105);
}
+
TEST_CASE("Test BankAccount deposit function")
{
	unique_ptr<BankAccount> account = make_unique<CheckingAccount>(100);
	REQUIRE(account->get_balance() == 105);

	account->deposit(100);
	REQUIRE(account->get_balance() == 205);

}

TEST_CASE("Test BankAccount withdraw function")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>(100);
	REQUIRE(account->get_balance() == 101);

	account->deposit(100);
	REQUIRE(account->get_balance() == 201);

	account->withdraw(50);
	REQUIRE(account->get_balance() == 151);
}

TEST_CASE("Test static bank_balance BankAccount variable")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>(100);

	REQUIRE(account->get_bank_balance() == 550);
}

TEST_CASE("Test checking account w no constructor")
{
	unique_ptr<BankAccount> account = make_unique<CheckingAccount>(100);
	REQUIRE(account->get_balance() == 105);	
}

TEST_CASE("Test checking account w a constructor")
{
	unique_ptr<BankAccount> account = make_unique<CheckingAccount>(900);
	REQUIRE(account->get_balance() == 905);	
}

TEST_CASE("Test class checking account function overriding")
{
	unique_ptr<BankAccount> account = make_unique<CheckingAccount>(900);
	REQUIRE(account->get_balance() == 905);	

}

TEST_CASE("Test savings account w no constructor")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>();
	REQUIRE(account->get_balance() == 1);	
}

TEST_CASE("Test savings account w param constructor")
{
	unique_ptr<BankAccount> account = make_unique<SavingsAccount>(100);
	REQUIRE(account->get_balance() == 101);	
}
