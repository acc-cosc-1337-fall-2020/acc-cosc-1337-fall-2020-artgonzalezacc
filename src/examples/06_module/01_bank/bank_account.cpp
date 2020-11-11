//bank_account.cpp
#include "bank_account.h"

BankAccount::BankAccount(int b) : balance(b)
{
    bank_balance += balance;
}

int BankAccount::get_balance() const 
{
    return balance;
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

void BranchBank::update_balance(int b)
{
    branch_balance += b;
    BankAccount::bank_balance += b;
}


//FREE FUNCTIONS-NOT CLASS FUNCTIONS
void display_bank_account(BankAccount& account)
{   
    account.deposit(1000);
    std::cout<<"Function: "<<account.get_balance()<<"\n";
}

/*
BankAccount get_bank_account()
{
    BankAccount account(500);
    return account;
}*/

//friend free function--NOT A CLASS FUNCTION
void friend_display_balance(const BankAccount& account)
{
    std::cout<<"Friend display balance: "<<account.balance<<"\n";
}

std::ostream& operator<<(std::ostream& out, const BankAccount& a)
{
    out<<"Operator overload balance: "<<a.balance<<"\n";

    return out;
}

std::istream& operator>>(std::istream& in, BankAccount& a)
{
    int amount;
    std::cout<<"Enter amount: ";
    in>>amount;

    a.balance += amount;

    return in;
}

 /*BankAccount operator+(const BankAccount& a1, const BankAccount& a2)
 {
     BankAccount account(a1.balance + a2.balance);

     return account;
 }*/