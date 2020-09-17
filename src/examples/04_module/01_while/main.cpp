#include "while.h"
#include<iostream>

using std::cout;	using std::cin;

int main() 
{
	int value = 1;

	if( !(value < 1) || value > 1 )cout<<"true";

	char choice = 'y';

	while(choice == 'y' || choice == 'Y')
	{

		cout<<"Enter y to continue, any other char to exit.";
		cin>>choice;
	}

	return 0;
}