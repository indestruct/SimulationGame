/*
 * Land.cpp
 *
 *  Created on: 10.12.2015 ã.
 *      Author: Mitko
 */

#include "Land.hpp"
#include "Farm.hpp"

Land::Land()
{
}
Land::~Land()
{
}
int Land::map[][WIDTH] = {{14, 23, 44, 42, 24, 36, 24, 45},
						 {34, 35, 45, 70, 48, 40, 50, 76},
						 {40, 40, 59, 85, 50, 40, 61, 90},
						 {52, 54, 83, 98, 70, 52, 35, 99},
						 {53, 49, 70, 81, 75, 71, 60, 82}};
void Land::newAnimalInFarm(std::string type, MapIndex index)
{
	farm.addAnimal(type, index);
}
bool Land::isAnimalInFarmAtIndex(MapIndex index)
{
	return farm.isAnimalAt(index);
}
int Land::numOfAnimals()
{
	return farm.numOfAnimals();
}
void Land::grazingProcess()
{
	farm.graze();
}
void Land::checkForDyingAnimals(int maxLE)
{
	farm.checkDyingAnimals(maxLE);
}
void Land::incrementAnimalAge()
{
	farm.incrementAge();
}
MapIndex Land::createStartIndex()
{
	MapIndex index;
	index.height = rand()%HEIGHT;
	index.width = rand()%WIDTH;
	return index;
}
int Land::animalAge(const MapIndex index)
{
	return farm.animalAge(index);
}
int Land::animalEnergy(const MapIndex index)
{
	return farm.animalEnergy(index);
}
std::string Land::animalPlanningMethod(const MapIndex index)
{
	return farm.animalPlanningMethod(index);
}
