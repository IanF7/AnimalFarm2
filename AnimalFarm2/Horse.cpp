//This is mostly my own work with help from Professor Fritz
#include <iostream>
#include "Animal.h"
#include "Horse.h"

using namespace std;

//gainWeight function
void Horse::gainWeight()
{
	//sets the weight to the current weight plus 4
	setWeight(getWeight() + 4);
}

//horse default constructor that inherits from animal class
Horse::Horse() : Animal() {}

//horse parameterized constructor that inherits from animal class
Horse::Horse(string name, double height, double weight) : Animal(name, height, weight) {}

//eat function
void Horse::eat()
{
	//prints out that the horse is eating
	cout << getName() << " the horse is eating " << endl;
	//runs gainWeight function
	gainWeight();
	//prints out results of gainWeight function
	cout << getName() << " gained 4 pounds." << endl;
	cout << getName() << " now weighs " << getWeight() << " pounds." << endl;
	cout << "" << endl;
}

void Horse::speak()
{
	cout << "Neigh" << endl;
}

double Horse::getTopWeight()
{
	return 2200;
}
