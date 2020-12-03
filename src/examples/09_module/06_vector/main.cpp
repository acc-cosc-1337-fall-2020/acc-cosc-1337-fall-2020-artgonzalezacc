//
#include "vector.h"

int main()
{
   /* std::cout<<"Before function\n";
    use_stack_vector();
    use_heap_vector();
    std::cout<<"After function\n";*/

    //requires/used copy constructor
    Vector<double> v1;
    Vector<double> v2 = v1;
    v1.Pushback(5.5);
    v1.Pushback(3.9);
    
    for(size_t i=0; i < v1.Size();++i )
    {
        std::cout<<v1[i]<<"\n";
    }

    /*/requires copy assignment
    Vector<double> v3(3);
    Vector<double> v4(3);
    v4 = v3;

    //move constructor
    Vector<int> v5(3);
    Vector<int> v6 = std::move(v5);

    //move assignment
    Vector<int> v7(3);
    Vector<int> v8(3);
    v8 = get_vector();*/
    

/*
    Vector v = get_vector();/
    //concept of templates
    Vector v;
    v.Pushback(3);
    
    std::cout<<v[0]<<"\n";
    
    v.Pushback(10);
    std::cout<<v[1];

    
    int sum = add(5, 5);//integer
    std::cout<<sum<<"\n";

    double sum1 = add(1.5, 4.7);
    std::cout<<sum1<<"\n";*/

    return 0;
}

