/*
 * Adapter.hpp
 *
 *  Created on: 13.12.2015 ã.
 *      Author: Mitko
 */

#ifndef ADAPTER_HPP_
#define ADAPTER_HPP_

#include "SimulationDisplayInterface.hpp"


class Adapter : public SimulationDisplayInterface
{
public:
	Adapter();
	~Adapter();
	void displayOnConsole(void* interface);
	void displayOnSDL(void* interface);
private:

};

#endif /* ADAPTER_HPP_ */
