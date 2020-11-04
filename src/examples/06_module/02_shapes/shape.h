//shape.h
#include<iostream>
#ifndef SHAPE_H
#define SHAPE_H

class Shape//abstract class has at least one pure virtual function
{
public:
    virtual void draw() = 0;//pure virtual function

};

#endif
