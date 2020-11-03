//atm.cpp
#include "atm.h"

using std::cout; using std::cin;

ATM::ATM()
{
    customers.push_back(Customer(1, "John Doe"));
    customers.push_back(Customer(2, "Mary Doe"));
    customers.push_back(Customer(3, "John Hancock"));
    customers.push_back(Customer(4, "Mary Hancock"));
}

void ATM::display_balance()
{
    cout<<"Balance: "<<customers[customer_index].get_account(account_index-1)->get_balance()<<"\n";
}

void ATM::scan_card()
{
    cout<<"Enter 1 for checking 2 for savings: ";
    cin>>account_index;
    customer_index = rand() % customers.size()-1 + 1;
}

