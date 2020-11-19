#include "ref_pointers.h"
#include<iostream>

//
void use_smart_pointer(std::unique_ptr<int>& num)
{
    std::cout<<"Use Smart pointer function: "<<*num<<"\n";
}

std::unique_ptr<int> get_smart_pointer()
{
    std::unique_ptr<int> num = std::make_unique<int>(500);

    return num;
}

void ref_ptr(int& num1, int* num2)
{
    num1 = 10;
    *num2 = 20;
}
