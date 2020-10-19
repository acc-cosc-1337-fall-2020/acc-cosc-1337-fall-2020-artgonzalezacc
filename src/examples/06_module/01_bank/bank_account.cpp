//bank_account.cpp
#include "bank_account.h"
#include<iostream>

BankAccount::BankAccount(int b) : balance(b)
{
    bank_balance += balance;
}

void BankAccount::deposit(int amount)
{   
    if(amount > 0)
    {
        balance += amount;
        bank_balance += amount;
    }
}

void BankAccount::withdraw(int amount)
{   
    if(amount > 0 && balance >= amount)
    {
        balance -= amount;
        bank_balance -= amount;
    }
}

int BankAccount::bank_balance = 0;//initialize bank_balance

//FREE FUNCTIONS-NOT CLASS FUNCTIONS
void display_bank_account(BankAccount& account)
{
    account.deposit(1000);
    std::cout<<"Function: "<<account.get_balance()<<"\n";
}

BankAccount get_bank_account()
{
    BankAccount account(500);
    return account;
}