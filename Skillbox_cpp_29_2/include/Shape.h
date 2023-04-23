#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <numbers>

struct BoundingBoxDimensions {
	double height=0, width=0;
	BoundingBoxDimensions() {}
	BoundingBoxDimensions(double _height, double _width) {
		height = _height; width = _width;
	}
};

class Shape {
protected:
	std::map<std::string, double> params;
	BoundingBoxDimensions boundingBoxDimensions;
public:
	Shape() {};
	const std::map<std::string, double> getParams() { return params; }
	virtual double square() = 0;
	virtual std::string type()=0;
	virtual BoundingBoxDimensions dimensions() = 0;
};

void printParams(Shape* shape);

