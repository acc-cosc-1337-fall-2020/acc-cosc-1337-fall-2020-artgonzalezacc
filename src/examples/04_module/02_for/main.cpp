#include"for.h"
#include<iostream>

using std::cout;	using std::cin;

int main() 
{
	char cont = 'y';

	while(cont == 'y' || cont == 'Y')
	{
		int choice;
		cout<<"1-Display Numbers\n";
		cout<<"2-Sum numbers \n";
		cout<<"3-Sum numbers 2 \n";
		cout<<"Enter a menu number: ";
		cin>>choice;

		int num;
		cout<<"Enter a number for the function: ";
		cin>>num;

		if(choice == 1)
		{
			display_numbers(num);
		}
		else if(choice == 2)
		{
			int result = sum_of_number(num);
			cout<<"Result is: "<<result<<"\n";
		}
		else if(choice == 3)
		{
			int result = sum_of_number_2(num);
			cout<<"Result is: "<<result<<"\n";
		}
		else
		{
			cout<<"Invalid option";
		}

		cout<<"Continue, enter y";
		cin>>cont;
	}

	return 0;
}