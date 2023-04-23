#include "Circle.h"

std::string Circle::type() { return "Circle"; }

double Circle::square() {
	return params["radius"] * params["radius"] * 3.14;
}

BoundingBoxDimensions Circle::dimensions() {
	BoundingBoxDimensions result(params["radius"] * 2, params["radius"] * 2);
	return result;
}