#pragma once

#define _USE_MATH_DEFINES
#include <math.h>
#include "Shape.h"

class Circle :  public Shape {
protected:

public:
	explicit Circle(double _radius) {
		params["radius"] = _radius;
	}
	double square() override;
	std::string type() override;
	BoundingBoxDimensions dimensions() override;
};
