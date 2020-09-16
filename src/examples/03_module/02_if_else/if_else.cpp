//write include statement for if_else header file
#include "if_else.h"

//write code for function named get_generation that accepts an int year and returns
//a string, apply the following logic:
//return "Centenial" when year greater than equal to 1996 to 2014
//return "Millenial" when year greater than equal to 1977 to 1995
//return "Generation X" when year greater than equal to 1965 to 1976
//return "Baby boomer" when year greater than equal to 1946 to 1964
//return "Silent Generation" when year greater than equal 1925 and less than equal 1945
//return "Invalid Year" otherwise
std::string get_generation(int year)
{
    std::string generation;

    if(year > 1995 && year < 2015)
    {
        generation = "Centenial";
    }
    else if(year > 1976 && year < 1996)
    {
        generation = "Millenial";
    }
    else if(year > 1964 && year < 1977)
    {
        generation = "Generation X";
    }
    else if(year > 1945 && year < 1965)
    {
        generation = "Baby boomer";
    }
    else if(year > 1924 && year < 1946)
    {
        generation = "Silent Generation";
    }
    else
    {
        generation = "Invalid Year";
    }

    return generation;
}

