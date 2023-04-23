#include "Square.h"


double Square::square() {
	return params["length"] * params["length"];
}

std::string Square::type() { return "Square"; }

BoundingBoxDimensions Square::dimensions() {
	BoundingBoxDimensions result(params["length"], params["length"]);
	return result;
}
