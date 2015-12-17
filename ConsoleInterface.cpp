/*
 * ConsoleInterface.cpp
 *
 *  Created on: 13.12.2015 ã.
 *      Author: Mitko
 */

#include "ConsoleInterface.hpp"
#include "Land.hpp"
#include "World.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <sstream>

void ConsoleInterface::displayOnConsole(void* interface)
{
	World *world = (World*)interface;
	Land *land;
	int j = 0;
	int numOfAnimals = world->numOfAnimals();
	std::string *info = new std::string[numOfAnimals];

	for(int i = 0; i < HEIGHT; i++)
	{
		for(int k = 0; k < WIDTH; k++)
		{
			MapIndex index;
			index.height = i;
			index.width = k;

			if(world->isAnimalAt(index))
			{
				std::ostringstream stmAge, stmEnergy;
				std::string method = world->animalPlanningMethod(index);
				stmAge << world->animalAge(index);
				stmEnergy << world->animalEnergy(index);
				info[j] = "Cow age: ";
				info[j] += stmAge.str();
				info[j] +=  ", energy: ";
				info[j] += stmEnergy.str();
				info[j] +=  ", planning method: ";
				info[j] += method;
				j++;
				std::cout << std::setw(2) << std::setfill(' ') << '*' << " ";
				continue;
			}
			std::cout << std::setw(2) << std::setfill('0') << land->map[i][k]<< " ";

		}
		std::cout << std::endl;
	}
	for(int i = 0; i < j; i++)
	{
		std::cout << info[i] << std::endl;
	}
	std::cout << std::endl;
	delete[] info;
}
