#include "bank_account.h"
#include<iostream>

using std::cout;

int main()
{
	BankAccount account;//create a variable(instance) of the class
	cout<<"Balance: "<<account.get_balance();//using a public class function
	
	

	return 0;
}