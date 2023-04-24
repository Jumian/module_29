#include "Animal.h"

void Animal::showTalents(){
	std::cout << "This is " << this->name << " and he has some talents:\n";
for (int i = 0; i < this->talents.size();++i) {
	std::cout << "\t";
	std::cout << "I can " << talents.at(i)->talentName() << std::endl;
	}
}
