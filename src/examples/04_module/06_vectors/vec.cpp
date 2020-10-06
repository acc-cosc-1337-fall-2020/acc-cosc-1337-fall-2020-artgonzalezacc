#include "for_ranged.h"
#include<iostream>
#include<vector>

using std::vector;

void loop_string_w_index(std::string str)
{
    for(std::size_t i=0; i < str.size(); ++i)
    {
        str[i] = 'z';
    }
}

void loop_string_w_index_ref(std::string& str)
{
    for(std::size_t i=0; i < str.size(); ++i)
    {
        str[i] = 'z';
    }
}

void loop_string_w_index_for_ranged(std::string& str)
{
    for(auto c: str)//looping w a value target variable
    {
        c = 'z';
    }
}

void loop_string_w_index_for_ranged_ref(std::string& str)
{
    for(auto& c: str)//looping w a reference target variable--NOT THE &
    {
        c = 'z';
    }    
}

void loop_vector_w_index(std::vector<int> nums)
{
    for(std::size_t i=0; i < nums.size(); ++i)
    {
        nums[i] = 0;
    }
}

void loop_vector_w_index_ref(std::vector<int>& nums)
{
    for(std::size_t i=0; i < nums.size(); ++i)
    {
        nums[i] = 0;
    }
}

void loop_vector_w_index_for_ranged(std::vector<int>& nums)
{
    for(auto n: nums)//value target variable
    {
        n = 0;
    }
}

void loop_vector_w_index_for_ranged_ref(std::vector<int>& nums)
{
    for(auto& n: nums)//reference target variable-NOTE THE &
    {
        n = 0;
    }
}

/*
Function loop_vector_w_index 
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows: 9 10 99 5  67

@param none


*/



/*
Function loop_vector_w_index_val 
Displays the incoming parameter vector numbers to screen using an indexed for loop.

@param vector<int>
*/



/*
Function loop_vector_w_index_ref
Displays the incoming parameter vector numbers to screen using an indexed for loop.

@param vector<int>&
*/


/*
Write code for function loop_vector_w_index_const_ref
Displays the incoming parameter vector numbers to screen use indexed loop

@param const vector<int>&
*/

