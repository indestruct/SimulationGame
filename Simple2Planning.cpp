/*
 * Simple2Planning.cpp
 *
 *  Created on: 13.12.2015 ã.
 *      Author: Mitko
 */

#include "Simple2Planning.hpp"
#include "Land.hpp"

Simple2Planning::Simple2Planning()
{

}
Simple2Planning::~Simple2Planning()
{

}
MapIndex Simple2Planning::chooseCell(MapIndex currIndex)
{
	Land *land;
	int maxI, minI, maxJ, minJ, maxL, minL, maxM, minM;
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
	/////////////////////////////////////////////
	if(minI == 0) minL = minI;
	else minL = minI-1;
	if(maxI == HEIGHT-1) maxL = maxI;
	else maxL = maxI+1;

	if(minJ == 0) minM = minJ;
	else minM = minJ-1;
	if(maxJ == WIDTH-1) maxM = maxJ;
	else maxM = maxJ+1;

	for(int i = minI; i <= maxI; i++)
	{
		for(int j = minJ; j <= maxJ; j++)
		{
			if(!(i == currIndex.height && j == currIndex.width))
			{
				for(int l = minL; l <= maxL; l++)
				{
					for(int m = minM; m <= maxM; m++)
					{
						if(land->map[i][j] + land->map[l][m] > bestChoice)
						{
							ret.height = i;
							ret.width = j;
							bestChoice = land->map[i][j];
						}
					}
				}
			}
		}
	}
	return ret;
}
