/*
 * PlanningMethod.hpp
 *
 *  Created on: 12.12.2015 ã.
 *      Author: Mitko
 */

#ifndef PLANNINGMETHOD_HPP_
#define PLANNINGMETHOD_HPP_

#include "MapIndex.hpp"

class PlanningMethod
{
public:
	PlanningMethod();
	virtual ~PlanningMethod();
	virtual MapIndex chooseCell(MapIndex currIndex) = 0;
};

#endif /* PLANNINGMETHOD_HPP_ */
