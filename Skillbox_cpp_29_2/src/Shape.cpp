#include "Shape.h"

void printParams(Shape* shape) {
	std::cout << "Type is " << shape->type() << std::endl;
	auto map = shape->getParams();
	for (auto a = map.begin(); a != map.end(); a++) {
		std::cout << a->first << " = " << a->second << std::endl;
	}
	std::cout << "Bounding box dimensions:\nHeight = " << shape->dimensions().height << "\nWidth = " << shape->dimensions().width << std::endl;
	std::cout <<std::endl <<"Square = " << shape->square()<<std::endl <<std::endl << std::endl;
}

