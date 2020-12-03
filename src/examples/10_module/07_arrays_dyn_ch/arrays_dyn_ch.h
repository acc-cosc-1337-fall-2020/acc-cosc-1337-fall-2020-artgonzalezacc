
#include<iostream>
using std::cout; using std::cin;
//dynamic array allocation and deallocation functions
//use getline to end char w \0 auto and show example of manual char termination 
void use_dyn_char_array()
{
    const int SIZE = 10;
    char* name = new char[SIZE];

    cout<<"Enter name: ";
    cin.getline(name, SIZE);
    
    cout<<name<<"\n";

    delete[] name;
}