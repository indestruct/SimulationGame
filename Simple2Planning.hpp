/*
 * Simple2Planning.hpp
 *
 *  Created on: 13.12.2015 ã.
 *      Author: Mitko
 */

#ifndef SIMPLE2PLANNING_HPP_
#define SIMPLE2PLANNING_HPP_

#include "PlanningMethod.hpp"

class Simple2Planning : public PlanningMethod
{
public:
	Simple2Planning();
	~Simple2Planning();
	MapIndex chooseCell(MapIndex currIndex);
};

#endif /* SIMPLE2PLANNING_HPP_ */
