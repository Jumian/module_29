// Skillbox_cpp_29_2.cpp: определяет точку входа для приложения.
//
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"

int main()
{
	Square* sq = new Square(23.5);
	printParams(sq);
	Circle* cr = new Circle(5.321);
	printParams(cr);
	Triangle* tr = new Triangle(25.6, 85.7, 95);
	printParams(tr);


	delete tr;
	delete cr;
	delete sq;
	return 0;
}
