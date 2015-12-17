/*
 * Farm.cpp
 *
 *  Created on: 11.12.2015 ã.
 *      Author: Mitko
 */

#include "Farm.hpp"
#include "CreateAnimal.hpp"

Farm::Farm()
{

}
Farm::~Farm()
{
}
void Farm::addAnimal(std::string type, MapIndex index)
{
	CreateAnimal creator;
	Animal* newAnimal = creator.CreateNewAnimal(type, index);
	animals.push_back(newAnimal);
}

void Farm::removeAnimal(Animal* concrAnimal)
{
	for(std::vector<Animal*>::size_type i = 0; i != animals.size(); i++)
	{
		if(animals[i] == concrAnimal)
		{
			animals.erase(animals.begin() + i);
			delete concrAnimal;
		}
	}
}
int Farm::numOfAnimals()
{
	return (int)animals.size();
}
bool Farm::isAnimalAt(const MapIndex index)
{
	for(std::vector<Animal*>::size_type i = 0; i != animals.size(); i++)
	{
		if(animals[i]->isAnimalAt(index))
		{
			return true;
		}
	}
	return false;
}
void Farm::checkDyingAnimals(int maxLE)
{
	for(std::vector<Animal*>::size_type i = 0; i != animals.size(); i++)
	{
		if(animals[i]->getEnergy() <= 0 || animals[i]->getLE() >= maxLE)
		{
			Animal* concrAnimal = animals[i];
			animals.erase(animals.begin() + i);
			delete concrAnimal;
		}
	}
}
void Farm::graze()
{
	for(std::vector<Animal*>::size_type i = 0; i != animals.size(); i++)
	{
		animals[i]->eatFromCell();
		MapIndex newIndex = animals[i]->chooseNextCell();
		animals[i]->moveToCell(newIndex);
		animals[i]->decrementEnergy((animals[i]->getAge()/10));
	}
}
void Farm::incrementAge()
{
	for(std::vector<Animal*>::size_type i = 0; i != animals.size(); i++)
	{
		animals[i]->incrementAge(1);

	}
}
int Farm::animalAge(const MapIndex index)
{
	for(std::vector<Animal*>::size_type i = 0; i != animals.size(); i++)
	{
		if(animals[i]->isAnimalAt(index))
		{
			return animals[i]->getAge();
		}
	}
	return 0;
}
int Farm::animalEnergy(const MapIndex index)
{
	for(std::vector<Animal*>::size_type i = 0; i != animals.size(); i++)
	{
		if(animals[i]->isAnimalAt(index))
		{
			return animals[i]->getEnergy();
		}
	}
	return 0;
}
std::string Farm::animalPlanningMethod(const MapIndex index)
{
	for(std::vector<Animal*>::size_type i = 0; i != animals.size(); i++)
	{
		if(animals[i]->getAge() > 50)
		{
			animals[i]->setPlanningMethod("Simple2Planning");
		}
		if(animals[i]->isAnimalAt(index))
		{
			return animals[i]->getPlanningMethod();
		}
	}
	return "No such animal";
}
