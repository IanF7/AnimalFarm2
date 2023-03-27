#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

using namespace std;

class Animal
{
private:
	string name;
	double weight, height;
public:
	Animal();
	Animal(string name, double height, double weight);
	virtual void eat();
	string getName() const;
	void setName(string name);
	double getHeight() const;
	void setHeight(double height);
	double getWeight() const;
	void setWeight(double weight);
	void gainWeight();

	virtual void speak() = 0;
	virtual double getTopWeight() = 0;
};
#endif

