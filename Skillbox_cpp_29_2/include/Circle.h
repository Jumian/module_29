#pragma once
#include "Shape.h"

class Circle : virtual public Shape {
protected:

public:
	explicit Circle(double _radius) {
		params["radius"] = _radius;
	}
	double square();
	std::string type();
	BoundingBoxDimensions dimensions();
};
