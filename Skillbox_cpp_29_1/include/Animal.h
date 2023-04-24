#pragma once
#include <string>
#include <iostream>
#include <vector>


class Talents {
public:
	virtual std::string talentName()=0;
};

class Animal {
protected:
	std::string name;
	std::vector<Talents*> talents;
public:
	virtual void voice()=0;
	void showTalents();
	
};


class Dance :  public Talents {
public:
	std::string talentName() override { return "Dance"; };
};

class Swim :  public Talents {
public:
	std::string talentName() override { return "Swim"; };
};

class Dog : public Animal {
public:
	explicit Dog(std::string _name) {
		name = _name;
		this->talents.push_back(new Dance());
		this->talents.push_back(new Swim());
	}
	~Dog() {
		for (int i = 0; i<talents.size();++i) {
			if (talents.at(i) != nullptr) {
				delete talents.at(i);
			}
		}
	}
	void voice() { std::cout << "Bark! \n";	}
};