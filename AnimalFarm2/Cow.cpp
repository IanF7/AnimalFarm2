//This is mostly my own work with help from Professor Fritz
#include <iostream>
#include "Animal.h"
#include "Cow.h"

using namespace std;

//gainWeight function
void Cow::gainWeight()
{
	//sets the weight to the current weight plus 6
	setWeight(getWeight() + 6);
}

//cow default constructor that inherits from animal class
Cow::Cow() : Animal() {}

//cow parameterized constructor that inherits from animal class
Cow::Cow(string name, double height, double weight) : Animal(name, height, weight) {}

//eat function
void Cow::eat()
{
	//prints out that the cow is eating
	cout << getName() << " the cow is eating " << endl;
	//runs gainWeight function
	gainWeight();
	//prints out results of gainWeight function
	cout << getName() << " gained 6 pounds." << endl;
	cout << getName() << " now weighs " << getWeight() << " pounds." << endl;
	cout << "" << endl;
}

void Cow::speak()
{
	cout << "Moooo" << endl;
}

double Cow::getTopWeight()
{
	return 1500;
}
