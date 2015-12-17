/*
 * Adapter.cpp
 *
 *  Created on: 13.12.2015 ã.
 *      Author: Mitko
 */

#include "Adapter.hpp"
#include "ConsoleInterface.hpp"

Adapter::Adapter()
{

}
Adapter::~Adapter()
{

}
void Adapter::displayOnConsole(void* interface)
{
	ConsoleInterface ci;
	ci.displayOnConsole(interface);
}
void Adapter::displayOnSDL(void* interface)
{

}
