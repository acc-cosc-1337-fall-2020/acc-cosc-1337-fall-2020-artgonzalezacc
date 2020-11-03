//atm.h
#include"customer.h"
#include<iostream>
#include<stdlib.h>
#include<vector>

//header guards
#ifndef ATM_H
#define ATM_H

class ATM
{
public:
    ATM();
    void display_balance();
    void scan_card();
private:
    std::vector<Customer> customers;
    int account_index;
    int customer_index;
    
};

#endif