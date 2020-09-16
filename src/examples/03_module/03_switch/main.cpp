#include<iostream>
#include "switch.h"

using std::cout;	using std::cin;

int main() 
{
	int option, y = 0, z = 0;

	cout<<"Enter a number: ";
	cin>>option;

	std::string result = menu(option);

	cout<<result<<"\n";

	option > 5 ? y = 10 : z = 20;//immediate if 
	cout<<"Y "<<y<<" Z "<<z;

	return 0;
}