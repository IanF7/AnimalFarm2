//This is mostly my own work with help from Professor Fritz
#include <iostream>
#include "Animal.h"
#include "Chicken.h"

using namespace std;

//gainWeight function
void Chicken::gainWeight()
{
	//sets the weight to the current weight plus .25
	setWeight(getWeight() + .25);
}

//chicken default constructor that inherits from animal class
Chicken::Chicken() : Animal() {}

//chicken parameterized constructor that inherits from animal class
Chicken::Chicken(string name, double height, double weight) : Animal(name, height, weight) {}

//eat function
void Chicken::eat()
{
	//prints out that the chicken is eating
	cout << getName() << " the chicken is eating " << endl;
	//runs gainWeight function
	gainWeight();
	//prints out results of gainWeight function
	cout << getName() << " gained .25 pounds." << endl;
	cout << getName() << " now weighs " << getWeight() << " pounds." << endl;
	cout << "" << endl;
}

void Chicken::speak()
{
	cout << "Cluck" << endl;
}

double Chicken::getTopWeight()
{
	return 12;
}
