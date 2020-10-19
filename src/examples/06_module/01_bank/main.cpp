#include"atm.h"
#include "bank_account.h"
#include<iostream>

using std::cout;

int main()
{
	BankAccount account(100);//create a variable(instance) of the class
	ATM atm(account);
	atm.display_balance();

	/*cout<<"Balance: "<<account.get_balance()<<"\n";//using a public class function
	cout<<"Bank balance: "<<account.get_bank_balance()<<"\n\n";

	BankAccount new_account(1000);
	new_account.deposit(25);
	cout<<"Bank balance: "<<new_account.get_bank_balance()<<"\n\n";

	cout<<"New Account Balance: "<<new_account.get_balance()<<"\n";//using a public class function

	display_bank_account(new_account);

	cout<<"New Account Balance: "<<new_account.get_balance()<<"\n\n";//using a public class function

	BankAccount account2 = get_bank_account();
	cout<<"Balance: "<<account2.get_balance()<<"\n\n";//using a public class function
*/

	return 0;
}