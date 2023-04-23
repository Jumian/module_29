#pragma once
#include "Shape.h"

class Square : virtual public Shape {
protected:

public:
	explicit Square(double _length) {
		params["length"] = _length;
	}
	double square();
	std::string type();
	BoundingBoxDimensions dimensions();
};