#pragma once
#include "Shape.h"

class Square :  public Shape {
protected:

public:
	explicit Square(double _length) {
		params["length"] = _length;
	}
	double square() override;
	std::string type() override;
	BoundingBoxDimensions dimensions() override;
};