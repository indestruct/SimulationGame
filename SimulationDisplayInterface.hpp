/*
 * SimulationDisplayInterface.hpp
 *
 *  Created on: 13.12.2015 ã.
 *      Author: Mitko
 */

#ifndef SIMULATIONDISPLAYINTERFACE_HPP_
#define SIMULATIONDISPLAYINTERFACE_HPP_

class SimulationDisplayInterface
{
public:
	virtual ~SimulationDisplayInterface() = 0;
	virtual void displayOnConsole(void* interface) = 0;
	virtual void displayOnSDL(void* interface) = 0;
};

#endif /* SIMULATIONDISPLAYINTERFACE_HPP_ */
