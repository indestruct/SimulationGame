/*
 * Animal.hpp
 *
 *  Created on: 11.12.2015 ã.
 *      Author: Mitko
 */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include "MapIndex.hpp"
#include "PlanningMethod.hpp"
#include <string>

class Animal
{
public:
	Animal();
	virtual ~Animal() = 0;
	virtual bool isAnimalAt(const MapIndex index);
	virtual void incrementAge(int quantity);
	virtual void incrementEnergy(double quantity);
	virtual void decrementEnergy(double quantity);
	virtual double getEnergy();
	virtual int getAge();
	virtual void eatFromCell();
	virtual void moveToCell(const MapIndex index);
	virtual int getLE();
	virtual MapIndex chooseNextCell();
	virtual std::string getPlanningMethod();
	virtual void setPlanningMethod(std::string method);
protected:
	MapIndex mapCoord;
	double energy;
	int age;
	int lifeExpectancy;
	PlanningMethod* planningMethod;
};

#endif /* ANIMAL_HPP_ */
