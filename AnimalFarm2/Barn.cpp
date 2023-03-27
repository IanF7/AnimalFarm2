//this is my own work
#include <iostream>
#include <string>
#include "Barn.h"

using namespace std;

//barn constructor which fills array with animals
Barn::Barn()
{
	//sets numAnimals equal to 0
	numAnimals = 0;
	//fills array with animals
	animals[numAnimals++] = new Horse("Allan", 6.1, 2098);
	animals[numAnimals++] = new Chicken("Cluck", 1, 15);
	animals[numAnimals++] = new Cow("Bob", 5.7, 1502);
	animals[numAnimals++] = new Cow("Beef", 5.8, 1282);
	animals[numAnimals++] = new Chicken("Jimmy", 0.3, 2);
	animals[numAnimals++] = new Chicken("Larry", 0.6, 3.4);
	animals[numAnimals++] = new Cow("Angus", 5.5, 1000);
	animals[numAnimals++] = new Horse("Pony", 5.6, 1700);
	animals[numAnimals++] = new Cow("Joe", 5.2, 1010);
	animals[numAnimals++] = new Chicken("Phil", 0.9, 4);
	animals[numAnimals++] = new Cow("Jeff", 5.31, 1391);
	animals[numAnimals++] = new Horse("Neigh", 6, 1800);
	animals[numAnimals++] = new Horse("Marty", 5.8, 2197);
	animals[numAnimals++] = new Chicken("Feathers", 0.7, 6);
	animals[numAnimals] = new Horse("Steve", 5.9, 1950);
}

//feedBarn function
void Barn::feedBarn()
{
	//for loop that runs the length of the array
	for (int i = 0; i < 15; i++)
	{
		//sets each variable equal to the animal at index i casted to the given type
		Cow* cowPtr = dynamic_cast<Cow*>(animals[i]);
		Chicken* chickPtr = dynamic_cast<Chicken*>(animals[i]);
		Horse* horsePtr = dynamic_cast<Horse*>(animals[i]);
		//checks if cowPtr is a nullptr
		if (cowPtr != nullptr)
		{
			//runs speak and eat functions
			cowPtr->speak();
			cowPtr->eat();
			//checks if the current weight is greater than topWeight
			if (cowPtr->getWeight() >= cowPtr->getTopWeight())
			{
				//runs outToPasture given the cowPtr data and the string cow
				outToPasture(cowPtr, "cow", i);
			}
		}
		//checks if chickPtr is a nullptr
		else if (chickPtr != nullptr)
		{
			//runs speak and eat functions
			chickPtr->speak();
			chickPtr->eat();
			//checks if the current weight is greater than topWeight
			if (chickPtr->getWeight() >= chickPtr->getTopWeight())
			{
				//runs outToPasture given the chickPtr data and the string chicken
				outToPasture(chickPtr, "chicken", i);
			}

		}
		//checks if horsePtr is a nullptr
		else if (horsePtr != nullptr)
		{
			//runs speak and eat functions
			horsePtr->speak();
			horsePtr->eat();
			//checks if the current weight is greater than topWeight
			if (horsePtr->getWeight() >= horsePtr->getTopWeight())
			{
				//runs outToPasture given the horsePtr data and the string horse
				outToPasture(horsePtr, "horse", i);
			}
		}
	}

}

//outToPasture function that takes in an animal pointer, the type as a string, and the index
//in the array
void Barn::outToPasture(Animal* a, string type, int num)
{
	//prints out that the animal is out to the pasture
	cout << a->getName() << " the " << type << " is now in the pasture." << endl;
	cout << "" << endl;
	//casts the animal to all of the types
	Cow* cowPtr = dynamic_cast<Cow*>(animals[num]);
	Chicken* chickPtr = dynamic_cast<Chicken*>(animals[num]);
	Horse* horsePtr = dynamic_cast<Horse*>(animals[num]);
	//if any of the pointers is not null, casts the value to that type and replaces the animal
	//with another of that type
	int nCow = 1;
	int nChick = 1;
	int nHorse = 1;
	if (cowPtr != nullptr)
	{
		string digit = to_string(nCow);
		string newName = "Spot the " + digit;
		delete animals[num];
		animals[num] = new Cow(newName, 4.9, 1200);
		cout << animals[num]->getName() + " the " << type << " is now in the barn." << endl;
		cout << "" << endl;
		nCow++;
	}
	else if (chickPtr != nullptr)
	{
		string digit = to_string(nChick);
		string newName = "Harold the " + digit;
		delete animals[num];
		animals[num] = new Chicken(newName, 1, 8);
		cout << animals[num]->getName() + " the " << type << " is now in the barn." << endl;
		cout << "" << endl;
		nChick++;
	}
	else if (horsePtr != nullptr)
	{
		string digit = to_string(nHorse);
		string newName = "Loius the " + digit;
		delete animals[num];
		animals[num] = new Horse(newName, 5.4, 1850);
		cout << animals[num]->getName() + " the " << type << " is now in the barn." << endl;
		cout << "" << endl;
		nHorse++;
	}
}


//deconstructor for barn
Barn::~Barn()
{
	for (int i = 0; i < numAnimals; i++)
	{
		delete animals[i];
	}
}
