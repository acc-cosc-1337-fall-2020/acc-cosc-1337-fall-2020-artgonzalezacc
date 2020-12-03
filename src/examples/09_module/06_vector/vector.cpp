#include "vector.h"
template<typename T>
Vector<T>::Vector()
: size {0}, space{size}, elements{nullptr}
{
    std::cout<<"\nSet memory to nullptr\n";
}

template<typename T>
Vector<T>::Vector(size_t sz)
: size{sz}, space{sz}, elements{new T[sz]}
{
    std::cout<<"\nCreate and init elements\n";
    for(size_t i=0; i < size; ++i)
    {
        elements[i] = 0;
    }
}

/*
1-initialize size for v2
2-initialize memory for v2
3-copy element values from v1 into v2
*/
template<typename T>
Vector<T>::Vector(const Vector<T>& v)
: size{v.size}, elements{new T[v.size]}
{
    std::cout<<"\ncopy constructor\n";
    for(size_t i=0; i < v.size; ++i)
    {
        elements[i] = v.elements[i];
    }
}

/*
1-Get dynamic memory from v
2-Get the size from v
3-point the v.nums to nullptr
*/
template<typename T>
Vector<T>::Vector(Vector<T>&& v)
: size{v.size}, elements{v.elements}
{
    std::cout<<"\nmove constructor\n";
    v.size = 0;
    v.elements = nullptr;
}

/*
1-Create temporary memory
2-Copy values from v1 into temporary memory
3-Delete class(v2) elements memory
4-Point elements memory to temporary memory
5-Return a reference to this vector
*/
template<typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& v)
{
    std::cout<<"\ncopy assignment\n";
    T* temp = new T[v.size];

    for(size_t i=0; i < v.size; ++i)
    {
        temp[i] = v.elements[i];
    }

    delete[] elements;

    elements = temp;
    size = v.size;

    return *this;
}

/*
1-Deallocate original dynamic memory
2-get dynamic memory from v
3-get the size from v
4-point v.nums to nullptr
5-set v.size to 0
*/
template<typename T>
Vector<T>& Vector<T>::operator=(Vector<T>&& v)
{
    std::cout<<"\nmove assignment\n";
    delete elements;
    elements = v.elements;
    size = v.size;
    v.elements = nullptr;
    v.size = 0;

    return *this;
}

/*
1-Make sure new alllocation is greater than space
2-Create temporary dynamic array of size new allocation
3-Copy values from old memory array to temporary array
4-Delete the old memory array (nums)
5-Set nums to temporary memory array
6-Set space = new allocation
*/
template<typename T>
void Vector<T>::Reserve(size_t new_allocation)
{
    if(new_allocation <= space)
    {
        return;
    }

    T* temp = new T[new_allocation];

    for(size_t i=0; i < size; ++i)
    {
        temp[i] = elements[i];
    }

    delete[] elements;
    elements = temp;

    space = new_allocation;
}

/*
1-Call reserve function w new_allocation value
2-INitialize elements beyond size 
3-set size to new_allocation
*/
template<typename T>
void Vector<T>::Resize(size_t new_allocation)
{
    Reserve(new_allocation);

    for(size_t i=size; i < new_allocation;++i)
    {
        elements[i] = 0;
    }

    size = new_allocation;
}

/*
1-if space 0 call Reserve w Reserve Default Size
2-else if size == space call Reserve w space * Reserve default multiplier
NOT PART OF ELSE IF
3-Add value to the end of the elements array
4-increment size
*/
template<typename T>
void Vector<T>::Pushback(T value)
{
    if(space == 0)
    {
        Reserve(RESERVE_DEFAULT_SIZE);
    }
    else if(space == size)
    {
        Reserve(space * RESERVE_DEFAULT_MULTIPLIER);
    }

    elements[size] = value;
    size++;
}

template<typename T>
Vector<T>::~Vector()
{
    std::cout<<"\nRelease memory\n";
    delete[] elements;
}

template class Vector<int>;
template class Vector<double>;

//FREE FUNCTIONS-not part of the class
void use_stack_vector()
{
    Vector<int> v1(3);
}

void use_heap_vector()
{
    Vector<int>* v1 = new Vector<int>(3);
    delete v1;
}

Vector<int> get_vector()
{
    Vector<int> v(3);
    return v;
}
