/*
 * Cow.hpp
 *
 *  Created on: 11.12.2015 ã.
 *      Author: Mitko
 */

#ifndef COW_HPP_
#define COW_HPP_

#include "GrazingAnimal.hpp"

class Cow : public GrazingAnimal
{
public:
	Cow();
	Cow(MapIndex index);
	~Cow();
};

#endif /* COW_HPP_ */
