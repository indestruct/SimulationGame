/*
 * SimulationEngine.cpp
 *
 *  Created on: 10.12.2015 ã.
 *      Author: Mitko
 */

#include "SimulationEngine.hpp"
#include "GreenWorld.hpp"
#include "GrassField.hpp"
#include "Adapter.hpp"

#include <iostream>

SimulationEngine& SimulationEngine::getInstance()
{
	 static SimulationEngine SimulationInstance;
	 return SimulationInstance;
}
void SimulationEngine::runGame(bool CBRI, int maxLE)
{
	if(CBRI)
	{
		world->createCow();
	}
	world->grazingProcess();
	world->incrementAnimalAge();
	world->checkForDyingAnimals(maxLE);
}
void SimulationEngine::display()
{
	sdi->displayOnConsole(world);
}
SimulationEngine::SimulationEngine()
{
	world = new GreenWorld;
	sdi = new Adapter;
}
SimulationEngine::~SimulationEngine()
{
	delete world;
	delete sdi;
}
