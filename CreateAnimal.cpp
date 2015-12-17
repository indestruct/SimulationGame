/*
 * CreateAnimal.cpp
 *
 *  Created on: 11.12.2015 ã.
 *      Author: Mitko
 */

#include "CreateAnimal.hpp"
#include "Cow.hpp"

CreateAnimal::CreateAnimal()
{

}
CreateAnimal::~CreateAnimal()
{

}
Animal* CreateAnimal::CreateNewAnimal(std::string type, MapIndex index)
{
	Animal *pAnimal;
	if(type == "Cow")
	{
		pAnimal = new Cow(index);
	}
	return pAnimal;
}
