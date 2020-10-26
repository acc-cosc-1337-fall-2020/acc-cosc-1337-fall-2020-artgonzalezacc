//checking_account.h
#include "bank_account.h"

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount : public BankAccount
{
public:    
    CheckingAccount(){}
    CheckingAccount(int b) : BankAccount(b){}
    int get_balance() const {return BankAccount::get_balance() + 5;}
};

#endif