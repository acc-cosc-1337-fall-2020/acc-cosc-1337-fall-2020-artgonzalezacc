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

