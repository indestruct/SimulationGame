/*
 * SimulationEngine.hpp
 *
 *  Created on: 10.12.2015 ã.
 *      Author: Mitko
 */

#ifndef SIMULATIONENGINE_HPP_
#define SIMULATIONENGINE_HPP_

#include "World.hpp"
#include "SimulationDisplayInterface.hpp"

class SimulationEngine {
public:
	static SimulationEngine& getInstance();
	void runGame(bool CBRI, int maxLE);
	void display();
	~SimulationEngine();
private:
	SimulationEngine();
	SimulationEngine(SimulationEngine const&);
	void operator=(SimulationEngine const&);
	World* world;
	SimulationDisplayInterface* sdi;
};

#endif /* SIMULATIONENGINE_HPP_ */
