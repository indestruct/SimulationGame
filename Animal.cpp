/*
 * Animal.cpp
 *
 *  Created on: 11.12.2015 ã.
 *      Author: Mitko
 */

#include "Animal.hpp"
#include "Land.hpp"
#include "SimplePlanning.hpp"
#include "Simple2Planning.hpp"
#include <cstdlib>

Animal::Animal()
{
	this->planningMethod = new SimplePlanning;
	this->energy = 0;
	this->age = 0;
	this->lifeExpectancy = 0;
}
Animal::~Animal()
{
	delete this->planningMethod;
}
bool Animal::isAnimalAt(const MapIndex index)
{
	if(this->mapCoord == index)
	{
		return true;
	}
	return false;
}
void Animal::incrementEnergy(double quantity)
{
	this->energy += quantity;
}
void Animal::decrementEnergy(double quantity)
{
	this->energy -= quantity;
}
double Animal::getEnergy()
{
	return this->energy;
}
int Animal::getAge()
{
	return this->age;
}
int Animal::getLE()
{
	return this->lifeExpectancy;
}
void Animal::eatFromCell()
{
	Land *land;
	int eatenQuantity = 1 + (rand()%(this->age + 3));
	if(land->map[this->mapCoord.height][this->mapCoord.width] > eatenQuantity)
	{
		land->map[this->mapCoord.height][this->mapCoord.width] -= eatenQuantity;
		this->energy += eatenQuantity;
	}
	else if(land->map[this->mapCoord.height][this->mapCoord.width] > 0)
	{
		this->energy += land->map[this->mapCoord.height][this->mapCoord.width];
		land->map[this->mapCoord.height][this->mapCoord.width] = 0;
	}
	this->lifeExpectancy++;
}
void Animal::moveToCell(const MapIndex index)
{
	this->mapCoord = index;
}
MapIndex Animal::chooseNextCell()
{
	return this->planningMethod->chooseCell(this->mapCoord);
}
void Animal::incrementAge(int quantity)
{
	this->age += quantity;
}
std::string Animal::getPlanningMethod()
{
	if(this->age < 50)
	{
		return "SimplePlanning";
	}
	return "SimplePlanning2";
}
void Animal::setPlanningMethod(std::string method)
{
	if(method == "SimplePlanning")
	{
		delete this->planningMethod;
		this->planningMethod = new SimplePlanning;
	}
	else if(method == "Simple2Planning")
	{
		delete this->planningMethod;
		this->planningMethod = new Simple2Planning;
	}
}
