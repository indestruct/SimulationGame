/*
 * SimplePlanning.cpp
 *
 *  Created on: 12.12.2015 ã.
 *      Author: Mitko
 */

#include "SimplePlanning.hpp"
#include "Land.hpp"

SimplePlanning::SimplePlanning()
{

}
SimplePlanning::~SimplePlanning()
{

}
MapIndex SimplePlanning::chooseCell(MapIndex currIndex)
{
	Land *land;
	int maxI, minI, maxJ, minJ;
	int bestChoice = 0;
	MapIndex ret;

	if(currIndex.height == 0) minI = currIndex.height;
		else minI = currIndex.height-1;
	if(currIndex.height == HEIGHT-1) maxI = currIndex.height;
		else maxI = currIndex.height+1;

	if(currIndex.width == 0) minJ = currIndex.width;
		else minJ = currIndex.width-1;
	if(currIndex.width == WIDTH-1) maxJ = currIndex.width;
		else maxJ = currIndex.width+1;


	for(int i = minI; i <= maxI; i++)
	{
		for(int j = minJ; j <= maxJ; j++)
		{
			if(!(i == currIndex.height && j == currIndex.width))
			{
				if(land->map[i][j] > bestChoice)
				{
					ret.height = i;
					ret.width = j;
					bestChoice = land->map[i][j];
				}
			}
		}
	}
	return ret;
}
