//
#include "vector.h"

int main()
{/*
    std::cout<<"Before function\n";
    use_stack_vector();
    use_heap_vector();
    std::cout<<"After function\n";

    //requires/used copy constructor
    Vector v1(3);
    Vector v2 = v1;

    //requires copy assignment
    Vector v3(3);
    Vector v4(3);
    v4 = v3;

    Vector v = get_vector();*/
    //concept of templates
    Vector v;
    v.Pushback(3);
    
    std::cout<<v[0]<<"\n";
    
    v.Pushback(10);
    std::cout<<v[1];

    return 0;
}

