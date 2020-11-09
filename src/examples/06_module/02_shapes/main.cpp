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
	unique_ptr<Shape> circle = make_unique<Circle>();
	circle->draw();

	unique_ptr<Shape> line = make_unique<Line>();
	line->draw();

	std::vector<unique_ptr<Shape>> shapes;

	shapes.push_back(std::move(circle));
	shapes.push_back(std::move(line));

	for(auto& shape: shapes)
	{
		shape->draw();
	}

	return 0;
}