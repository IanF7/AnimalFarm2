//This is mostly my own work with help from Professor Fritz
#include <iostream>
#include "Animal.h"

using namespace std;

//default constructor
Animal::Animal()
{
	name = "";
	height = 0.0;
	weight = 0.0;
}

//parameterized constructor
Animal::Animal(string name, double height, double weight)
{
	this->name = name;
	this->height = height;
	this->weight = weight;
}

//eat function
void Animal::eat()
{
	//prints out that the current animal is eating
	cout << name << " is eating" << endl;
	//runs gainWeight method
	gainWeight();
	//prints out results of gainWeight function
	cout << name << "gained 3 pounds." << endl;
	cout << name << " now weighs " << weight << " pounds." << endl;
}

//getName function
string Animal::getName() const
{
	return name;
}

//setName function
void Animal::setName(string name)
{
	this->name = name;
}

//getHeight function
double Animal::getHeight() const
{
	return height;
}

//setHeight function
void Animal::setHeight(double height)
{
	this->height = height;
}

//getWeight function
double Animal::getWeight() const
{
	return weight;
}

//setFunction
void Animal::setWeight(double weight)
{
	this->weight = weight;
}

//gainWeight function
void Animal::gainWeight()
{
	//adds 3 to current weight
	weight += 3;
}

