#include"atm.h"
#include "bank_account.h"
#include<iostream>
#include<time.h>

using std::cout; using std::cin;

int main()
{
	srand(time(NULL));//generates random numbers every time we run the program
	//create a variable(instance) of the class
	BankAccount account;
	cout<<"Bank balance: "<<account.get_bank_balance()<<"\n";

	BranchBank branch_bank(100000);
	branch_bank.update_balance(500);
	cout<<"Branch balance: "<<branch_bank.get_branch_balance()<<"\n";
	cout<<"Bank balance: "<<account.get_bank_balance()<<"\n";


	/*char choice;
	ATM atm;

	do
	{
		atm.scan_card();
		atm.display_balance();

		cout<<"Enter y to continue...";
		cin>>choice;
	}while (choice == 'y' || choice == 'Y');

	cout<<"Balance: "<<account.get_balance()<<"\n";//using a public class function
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