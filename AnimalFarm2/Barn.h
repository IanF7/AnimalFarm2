#ifndef BARN_H
#define BARN_H

#include <iostream>
#include "Animal.h"
#include "Chicken.h"
#include "Cow.h"
#include "Horse.h"

using namespace std;

class Barn
{
private:
	int numAnimals;
	Animal* animals[15];

public:
	Barn();
	void feedBarn();
	void outToPasture(Animal* a, string type, int num);
	~Barn();
};

#endif

