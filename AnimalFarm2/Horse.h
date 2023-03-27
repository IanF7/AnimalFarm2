#ifndef HORSE_H
#define HORSE_H

#include <iostream>
#include "Animal.h"

class Horse : public Animal
{
private:
	void gainWeight();
public:
	Horse();
	Horse(string name, double height, double weight);
	void eat();
	void speak();
	double getTopWeight();
};
#endif
