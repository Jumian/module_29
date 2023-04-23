#pragma once
#include "Shape.h"

class Triangle : virtual public Shape 
{
public:

	explicit Triangle(double a, double b, double c) {
		if (a + b > c && a + c > b && b + c > a) {
			params["lengthA"] = a; 
			params["lengthB"] = b;
			params["lengthC"] = c;
		} else {
			std::cout << "Triangle a=" << a << ", b="<< b << ", c=" << c << std::endl ;
		}
	}
	double square();
	std::string type();
	BoundingBoxDimensions dimensions();


};
