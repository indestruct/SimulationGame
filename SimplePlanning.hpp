/*
 * SimplePlanning.hpp
 *
 *  Created on: 12.12.2015 ã.
 *      Author: Mitko
 */

#ifndef SIMPLEPLANNING_HPP_
#define SIMPLEPLANNING_HPP_

#include "PlanningMethod.hpp"

class SimplePlanning : public PlanningMethod
{
public:
	SimplePlanning();
	~SimplePlanning();
	MapIndex chooseCell(MapIndex currIndex);
};

#endif /* SIMPLEPLANNING_HPP_ */
