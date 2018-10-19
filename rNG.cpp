#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>

int rNG(int count)
{
	int random;
	int power = pow(10, count);
	static bool initialized = false;

	if(!initialized)
	{
		srand(time(NULL));
		initialized = true;
	}
	random = (rand() % power) + 1;
	
	return random;
}
