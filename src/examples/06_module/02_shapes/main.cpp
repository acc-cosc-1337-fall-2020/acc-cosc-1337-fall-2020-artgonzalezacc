//main
#include <iostream>
#include<memory>
#include<utility>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/
using std::unique_ptr; using std::make_unique;

int main() 
{	
	Shape* ptr = new Circle[3];
	ptr[0].draw();
	
	std::cout<<"pointer to pointer dynamic array\n";
	Shape** shapes1 = new Shape*[3];
	shapes1[0] = new Circle();
	shapes1[1] = new Line();
	shapes1[2] = new Circle();

	shapes1[0]->draw();
	shapes1[1]->draw();
	shapes1[2]->draw();
	std::cout<<"\n ENDpointer to pointer dynamic array\n";

	//use ptr

	Circle circles[3];
	circles[0].draw();
	circles[1].draw();
	circles[2].draw();

	Circle circle = circles[0];
	circle.draw();

/*	unique_ptr<Shape> circle = make_unique<Circle>();
	circle->draw();

	unique_ptr<Shape> line = make_unique<Line>();
	line->draw();

	std::vector<unique_ptr<Shape>> shapes;

	shapes.push_back(std::move(circle));
	shapes.push_back(std::move(line));

	for(auto& shape: shapes)
	{
		shape->draw();
	}*/

	return 0;
}