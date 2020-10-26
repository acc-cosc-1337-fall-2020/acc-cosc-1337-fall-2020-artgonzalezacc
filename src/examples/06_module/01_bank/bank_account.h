//bank_account.h
//HEADER GUARDS
#include<iostream>

#ifndef BRANCH_BANK_H
#define BRANCH_BANK_H

class BranchBank
{
public:
    BranchBank(int b): branch_balance(b){}
    void update_balance(int b);
    int get_branch_balance()const {return branch_balance;}
private:
    int branch_balance;
};

#endif

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount
{

public://access specifier-makes class function available to users of the class
    BankAccount() = default;//user defined default constructor
    explicit BankAccount(int b);//user created constructor
    int get_balance() const {return balance;}//inline class function-const read only for class variables
    void deposit(int amount);
    void withdraw(int amount);
    static int get_bank_balance(){return bank_balance;}
    friend void friend_display_balance(const BankAccount& account);//THIS IS A FREE FUNCTION! NOT PART OF THE CLASS
    friend void BranchBank::update_balance(int b);
    friend std::ostream& operator<<(std::ostream& out, const BankAccount& a);
    friend std::istream& operator>>(std::istream& in, BankAccount& a);
    friend BankAccount operator+(const BankAccount& a1, const BankAccount& a2);
private://access specifier-hides variables from users of the class
    int balance{0};
    static int bank_balance;
};//DON'T FORGET THE SEMICOLON!!!!!!!!!!

#endif
//THESE ARE NOT BANK ACCOUNT CLASS FUNCTIONS-they are free functions
void display_bank_account(BankAccount& account);

BankAccount get_bank_account();