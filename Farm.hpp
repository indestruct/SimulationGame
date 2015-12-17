/*
 * Farm.hpp
 *
 *  Created on: 11.12.2015 ã.
 *      Author: Mitko
 */

#ifndef FARM_HPP_
#define FARM_HPP_

#include "Animal.hpp"
#include "MapIndex.hpp"
#include <vector>
#include <string>

class Farm {
public:
	Farm();
	~Farm();
	void addAnimal(std::string type, MapIndex index);
	void removeAnimal(Animal *concrAnimal);
	int numOfAnimals();
	bool isAnimalAt(const MapIndex index);
	void graze();
	void checkDyingAnimals(int maxLE);
	void incrementAge();
	int animalAge(const MapIndex index);
	int animalEnergy(const MapIndex index);
	std::string animalPlanningMethod(const MapIndex index);


private:
	std::vector<Animal*> animals;
};

#endif /* FARM_HPP_ */
