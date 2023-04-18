#pragma once
#include <string>
#include <iostream>
#include <vector>

class Talents;

class Animal {
protected:
	std::string name;
	std::vector<Talents*> talents;
public:
	virtual void voice()=0;
	void showTalents() ;
};

class Talents {
protected:
	std::string name;
public:
	std::string talentName();
};

class Dance : virtual public Talents {
public:
	Dance() { name = "Dance"; };
	
};

class Swim : virtual public Talents {
public:
	Swim() { name = "Swim"; }
	std::string talentName() {
		std::cout << "I can Swim";
	};
};

class Dog : virtual public Animal {
public:
	explicit Dog(std::string _name) {
		name = _name;
		this->talents.push_back(new Dance());
		this->talents.push_back(new Swim());
	}
	void voice() {
		std::cout << "Bark! \n";
	}
};