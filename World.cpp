/*
 * World.cpp
 *
 *  Created on: 10.12.2015 ã.
 *      Author: Mitko
 */

#include "World.hpp"
#include "GrassField.hpp"

World::World()
{
	this->land = new GrassField;
}
World::~World()
{
	delete this->land;
}

void World::setLand(Land* land)
{
	this->land = land;
}
bool World::isAnimalAt(MapIndex index)
{
	return land->isAnimalInFarmAtIndex(index);
}
void World::createCow()
{
	MapIndex index = land->createStartIndex();

	land->newAnimalInFarm("Cow", index);
}
int World::numOfAnimals()
{
	return land->numOfAnimals();
}
void World::grazingProcess()
{
	land->grazingProcess();
}
void World::checkForDyingAnimals(int maxLE)
{
	land->checkForDyingAnimals(maxLE);
}
void World::incrementAnimalAge()
{
	land->incrementAnimalAge();
}
int World::animalAge(const MapIndex index)
{
	return land->animalAge(index);
}
int World::animalEnergy(const MapIndex index)
{
	return land->animalEnergy(index);
}
std::string World::animalPlanningMethod(const MapIndex index)
{
	return land->animalPlanningMethod(index);
}

