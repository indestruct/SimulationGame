/*
 * World.hpp
 *
 *  Created on: 10.12.2015 ã.
 *      Author: Mitko
 */

#ifndef WORLD_HPP_
#define WORLD_HPP_

#include "Land.hpp"
#include "MapIndex.hpp"

class World {
public:
	World();
	virtual ~World() = 0;

	virtual void setLand(Land* land);
	virtual void createCow();
	virtual bool isAnimalAt(MapIndex index);

	virtual int numOfAnimals();
	virtual void grazingProcess();
	virtual void checkForDyingAnimals(int maxLE);
	virtual void incrementAnimalAge();
	virtual int animalAge(const MapIndex index);
	virtual int animalEnergy(const MapIndex index);
	virtual std::string animalPlanningMethod(const MapIndex index);
private:
	Land* land;
};

#endif /* WORLD_HPP_ */
