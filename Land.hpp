/*
 * Land.hpp
 *
 *  Created on: 10.12.2015 ã.
 *      Author: Mitko
 */

#ifndef LAND_HPP_
#define LAND_HPP_

#include "Farm.hpp"
#define WIDTH 8
#define HEIGHT 5

class Land
{
public:
	Land();
	virtual ~Land() = 0;

	static int map[HEIGHT][WIDTH];

	virtual void newAnimalInFarm(std::string type, MapIndex index);
	virtual bool isAnimalInFarmAtIndex(MapIndex index);
	virtual MapIndex createStartIndex();
	virtual int numOfAnimals();
	virtual void grazingProcess();
	virtual void checkForDyingAnimals(int maxLE);
	virtual void incrementAnimalAge();
	int animalAge(const MapIndex index);
	int animalEnergy(const MapIndex index);
	std::string animalPlanningMethod(const MapIndex index);

private:
	Farm farm;


};

#endif /* LAND_HPP_ */
