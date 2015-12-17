/*
 * CreateAnimal.hpp
 *
 *  Created on: 11.12.2015 ã.
 *      Author: Mitko
 */

#ifndef CREATEANIMAL_HPP_
#define CREATEANIMAL_HPP_

#include "Animal.hpp"
#include "MapIndex.hpp"
#include <string>

class CreateAnimal {
public:
	CreateAnimal();
	~CreateAnimal();
	Animal* CreateNewAnimal(std::string type, MapIndex index);

};

#endif /* CREATEANIMAL_HPP_ */
