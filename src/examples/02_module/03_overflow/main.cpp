#include<iostream>
#include<climits>

using std::cout;

int main()
{
    int num = 2147483647;
    
    cout<<num<<"\n";

    num = num + 1;
    cout<<num<<"\n";

    double small_dbl = __DBL_MIN__;
    small_dbl = small_dbl / 10;
    cout<<small_dbl;

    return 0;
}