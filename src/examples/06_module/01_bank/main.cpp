#include"atm.h"
#include "bank_account.h"
#include "checking_account.h"
#include<iostream>
#include<time.h>
#include<memory>
#include<utility>
#include<vector>

using std::cout; using std::cin; using std::unique_ptr; using std::make_unique;

enum transaction{DEPOSIT=1, WITHDRAWAL=2, DISPLAY=3};//legacy C++
enum class BANK_OPTIONS{DEPOSIT=1, WITHDRAWAL=2, DISPLAY=3};//c++ 11

int main()
{	
   // unique_ptr<BankAccount> up_a = make_unique<CheckingAccount>();

	srand(time(NULL));//generates random numbers every time we run the program
	//create a variable(instance) of the class
	
	int choice;
	char cont;
	ATM atm;

	do
	{
		cout<<"Enter 1, 2, 3";
		cin>>choice;

		atm.scan_card();

		switch (static_cast<BANK_OPTIONS>(choice))
		{
		case BANK_OPTIONS::DEPOSIT:
			cout<<"You selected deposit\n";
			break;
		case BANK_OPTIONS::WITHDRAWAL:
			cout<<"You selected withdraw\n";
			break;
		case BANK_OPTIONS::DISPLAY:
			atm.display_balance();
			break;
		default:
			cout<<"Invalid choice\n";
			break;
		}

		cout<<"Enter y to continue...";
		cin>>cont;
	}while (cont == 'y' || cont == 'Y');
	
	/*int a = 5, b = 10;
	int c = a + b;
	cout<<c<<"\n";
	
	BankAccount account1(100), account2(500);
	BankAccount account3 = account1 + account2;
	cout<<account3;

	
	cout<<"Bank balance: "<<account.get_bank_balance()<<"\n";

	BranchBank branch_bank(100000);
	branch_bank.update_balance(500);
	cout<<"Branch balance: "<<branch_bank.get_branch_balance()<<"\n";
	cout<<"Bank balance: "<<account.get_bank_balance()<<"\n";


	

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