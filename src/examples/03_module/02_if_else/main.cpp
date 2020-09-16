//write include statements
#include "if_else.h"
#include<iostream>

//write cin and cout using statements
using std::cout;
using std::cin;

/*
Write code to capture year from keyboard.
Pass the year to get_generation function and display function result.
*/
int main() 
{
	int year;
	cout<<"Enter a year: ";
	cin>>year;

	std::string generation = get_generation(year);

	cout<<generation;
	
	return 0;
}