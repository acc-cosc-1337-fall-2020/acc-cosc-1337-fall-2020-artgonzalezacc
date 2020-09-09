#include<iostream>
#include "expressions.h"

using std::cout;

int main()
{
    int result = operator_precedence_1(12, 6, 3);
    cout<<"Result 1 is: "<<result<<"\n";

    result = operator_precedence_2(12, 6, 3);
    cout<<"Result 2 is: "<<result;

    return 0;
}