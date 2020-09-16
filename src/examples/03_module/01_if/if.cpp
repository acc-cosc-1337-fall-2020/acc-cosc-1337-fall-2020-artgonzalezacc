//write include statement for if header
#include "if.h"


//write code for the is_even function that returns true if num is even, false otherwise
bool is_even(int num)
{
    return num % 2 == 0;
}

//write code for function named overtime that accepts a double hours and returns true if 
//hours over 40, false otherwise
bool overtime(double num)
{
    bool result = false;

    if(num > 40)
    {
        result = true;
    }

    return result;
}

