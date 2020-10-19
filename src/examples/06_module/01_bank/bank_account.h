//bank_account.h
//HEADER GUARDS

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class BankAccount
{

public://access specifier-makes class function available to users of the class
    BankAccount() : BankAccount(0) {}//user defined default constructor
    BankAccount(int b);//user created constructor
    int get_balance() const {return balance;}//inline class function-const read only for class variables
    void deposit(int amount);
    void withdraw(int amount);
    static int get_bank_balance(){return bank_balance;}
private://access specifier-hides variables from users of the class
    int balance;
    int customer_no;
    static int bank_balance;
};//DON'T FORGET THE SEMICOLON!!!!!!!!!!

#endif
//THESE ARE NOT BANK ACCOUNT CLASS FUNCTIONS-they are free functions
void display_bank_account(BankAccount& account);

BankAccount get_bank_account();