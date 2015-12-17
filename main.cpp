
#include "SimulationEngine.hpp"
#include <iostream>

static int CBRI;
static int maxLE;
static int n;

void configureGame()
{
	std::cout << "Enter Cow Birth Rate Interval:";
	std::cin >> CBRI;
	std::cout << "Enter maximum Life Expectancy:";
	std::cin >> maxLE;
	std::cout << "Enter number of steps:";
	std::cin >> n;
}
int main()
{
	long count = 0;
	int i = 0;
	bool cbriFlag = false;
	SimulationEngine* getInstance;
	SimulationEngine& s = getInstance->getInstance();

	configureGame();

	while(i < n)
	{
		count++;
		cbriFlag = false;

		if(0 == i || CBRI <= count)
		{
			cbriFlag = true;
			count = 0;
		}

		s.runGame(cbriFlag, maxLE);
		s.display();
		i++;
	}
}

