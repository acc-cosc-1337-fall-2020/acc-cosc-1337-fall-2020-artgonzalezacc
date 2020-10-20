//atm.cpp
#include "atm.h"

using std::cout;

ATM::ATM()
{   //add 5 BankAccount objects to accounts vector
    accounts.push_back(BankAccount(get_balance_from_db()));
    accounts.push_back(BankAccount(get_balance_from_db()));
    accounts.push_back(BankAccount(get_balance_from_db()));
    accounts.push_back(BankAccount(get_balance_from_db()));
    accounts.push_back(BankAccount(get_balance_from_db()));
}

void ATM::display_balance()const
{
    friend_display_balance(accounts[current_account_index]);
  //  cout<<"Balance: "<<accounts[current_account_index].get_balance()<<"\n";
}

void ATM::scan_card()
{
    current_account_index = rand() % accounts.size()-1;
}

int ATM::get_balance_from_db()//private functions are usually utility functions
{
    return rand() % 10000 + 1;       
}