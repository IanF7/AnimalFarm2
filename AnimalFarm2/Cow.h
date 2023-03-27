#ifndef COW_H
#define COW_H

#include <iostream>
#include "Animal.h"

class Cow : public Animal
{
private:
	void gainWeight();
public:
	Cow();
	Cow(string name, double height, double weight);
	void eat();
	void speak();
	double getTopWeight();
};
#endif
