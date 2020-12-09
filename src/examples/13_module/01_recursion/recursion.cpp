#include "recursion.h"

//Write code for recursive display function
void display(int count)
{
    int c;
    if(count == 0)
    {
        std::cout<<"Base case - start unloading the stack\n";
        return;//start unloading/unwinding the stack
    }

    std::cout<<"hello-load stack "<<count-1<<"\n";
    c = count -1;
    display(count - 1);
    std::cout<<"unload stack "<<c<<"\n";
}

//Write code for recursive factorial
int factorial(int n)
{
    int f;//track return value for factorial
    int r;//track recursive function call return value

    //base case
    if(n == 0)
    {
        return 1;
    }

    std::cout<<"load stack "<<n-1<<"\n";
    r = factorial(n-1);
    f = n * r;
    std::cout<<"unload stack n: "<<n<<" r: "<<r<<" f: "<<f<<"\n";

    return f;
}
