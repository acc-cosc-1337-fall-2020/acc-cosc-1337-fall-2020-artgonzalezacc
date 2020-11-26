//
#include<iostream>
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>
#include<stddef.h>

class Vector
{
public:
    Vector(size_t sz);
    Vector(const Vector& v);//copy constructor Rule 1 of 3 for Rule of 3 -Legacy C++
    Vector& operator=(const Vector& v);//copy asssignment Rule 2 of 3 of Rule of 3 - Legacy C++
    size_t Size()const{return size;}
    int& operator[](size_t i){return elements[i];}
    int& operator[](size_t i)const{return elements[i];}
    ~Vector();//Rule 3 of 3 for Rule of 3 -Legacy C++
private:
    size_t size;
    int* elements;
};

//FREE FUNCTIONS-not part of the class
void use_stack_vector();
void use_heap_vector();

#endif