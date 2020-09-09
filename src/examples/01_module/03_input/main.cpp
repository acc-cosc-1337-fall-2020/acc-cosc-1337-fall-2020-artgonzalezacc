//write include statements
#include<iostream>
#include "input.h"

//write namespace using statements
using std::cout;	using std::cin;

/*
Capture units and rate values from keyboard.
Call the get_total function by passing units and rates variables to it.
Save the get_total return value to a variable named total.
Display the total:

Total: 100

*/
int main() 
{
	int num;

	cout<<"Enter a number: ";

	cin>>num;

	cout<<"You entered: "<<num<<"\n";

	double result = get_total(num, 10.55);
	cout<<"Result: "<<result;
	
	return 0;
}