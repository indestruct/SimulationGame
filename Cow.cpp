/*
 * Cow.cpp
 *
 *  Created on: 11.12.2015 ã.
 *      Author: Mitko
 */

#include "Cow.hpp"
#include "SimplePlanning.hpp"


Cow::Cow()
{
}
Cow::Cow(MapIndex index)
{
	this->mapCoord = index;
	this->age = 0;
	this->energy = 0;
	this->planningMethod = new SimplePlanning;
	this->lifeExpectancy = 0;
}
Cow::~Cow()
{
	delete this->planningMethod;
}
