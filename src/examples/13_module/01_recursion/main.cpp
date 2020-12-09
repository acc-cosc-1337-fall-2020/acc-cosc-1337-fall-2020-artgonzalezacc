#include "recursion.h"

int main() 
{
	std::cout<<"load stack 5\n";
	
	int f = factorial(5);
	
	std::cout<<"unload stack 5\n\n";

	std::cout<<"Factorial: "<<f<<"\n";
	
	return 0;
}