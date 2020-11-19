#include "arrays_mem.h"
//write code for for stack_array and display each element to screen

using std::cout; using std::cin;

void stack_array()
{
    const int SIZE = 5;
	int numbers[SIZE];//declare the array(list)
    
    for(int i = 0; i < SIZE; ++i)
    {
        numbers[i] = 0;
    }

    numbers[0] = 5;

    for(int i = 0; i < SIZE; ++i)
    {
        cout<<numbers[i]<<"\n";
    }
}

void stack_array_cin()
{
    const int SIZE = 3;
	int numbers[SIZE];//declare the array(list)
    
    for(int i = 0; i < SIZE; ++i)
    {
        cout<<"Enter number: ";
        cin>>numbers[i];
    }

    for(int i = 0; i < SIZE; ++i)
    {
        cout<<numbers[i]<<"\n";
    }

}

void array_months()
{
    const int NUM_OF_MONTHS = 3;

    int months[NUM_OF_MONTHS]{1, 2, 3};
    std::string month_names[NUM_OF_MONTHS]{"Jan", "Feb", "Mar"};
    
    for(int i=0; i < NUM_OF_MONTHS; ++i)
    {
        cout<<months[i]<<" is "<<month_names[i]<<"\n";
    }

}

void array_for_ranged()
{
    const int SIZE = 3;
	int numbers[SIZE]{};//declare and initialize the array(list)

    for(auto& number: numbers)    
    {
        number = 1;
        cout<<number<<"\n";
    }
    cout<<"\n\n";
    for(auto number: numbers)    
    {
        cout<<number<<"\n";
    }
}

void array_compare()
{
    const int SIZE = 3;
	int numbers[SIZE]{};//declare and initialize the array(list)
    int numbers1[SIZE]{1, 2, 3};

    for(int i=0; i < SIZE; ++i)
    {
        numbers[i] = numbers1[i];
    }

}