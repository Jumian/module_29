#include "Animal.h"

void Animal::showTalents(){
	std::cout << "This is " << this->name << " and he has some talents:\n";
for (int i = 0; i < this->talents.size();++i) {
	std::cout << "\t";
	this->talents.at(i)->talentName();
	}
}
std::string  Talents::talentName() {
	std::cout << "I can " <<this->name << "\n";
	return this->name;
}
