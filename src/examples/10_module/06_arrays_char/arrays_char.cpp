//cpp
#include "arrays_char.h"

using std::cout;

void use_char_array()
{
    char name[] = "John";
    cout<<name<<"\n";
}

void use_char_array_w_size()
{
    const int SIZE = 5;
    char name[SIZE] = {'M', 'a', 'r', 'y', '\0'};

    cout<<name<<"\n";

    for(int i=0; name[i] != '\0'; ++i)
    {
        cout<<name[i]<<"\n";
    }
}