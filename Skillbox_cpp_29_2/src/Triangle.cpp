#include "Triangle.h"

double Triangle::square()
{
	double p = (params["lengthA"] + params["lengthB"] + params["lengthC"])/2 ;
	double a = params["lengthA"]; double b = params["lengthB"]; double c = params["lengthC"];
	double result = sqrt(p * (p - a) * (p - b) * (p - c));
	return result;
}

std::string Triangle::type() { return "Triangle"; }

BoundingBoxDimensions Triangle::dimensions() {
	BoundingBoxDimensions result;
	double a = params["lengthA"]; double b = params["lengthB"]; double c = params["lengthC"];
	double pp = (a + b + c) / 2;
	result.height = result.width = (a * b * c) / 4 / sqrt(pp * (pp - a) * (pp - b) * (pp - c));
	return result;
}