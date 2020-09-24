#include "while.h"
#include<iostream>

using std::cout;	using std::cin;

int main() 
{
	char choice = 'y';

	while(choice == 'y' || choice == 'Y')
	{
		int num = 5;
		cout<<"Main num before function call: "<<num<<"\n";
		//cout<<"Enter a number: ";
		//cin>>num;

		int sum = sum_of_squares(num);
		cout<<"Main num after function call: "<<num<<"\n";
		cout<<"Result is: "<<sum<<"\n";

		cout<<"Enter y to continue, any other char to exit.";
		cin>>choice;
	}

	return 0;
}