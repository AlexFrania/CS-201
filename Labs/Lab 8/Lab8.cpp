#include <iostream>
#include "intio.hpp"
#include "lab8.hpp"

int doInput()
{
	return getInt();
}

int compute(int i)
{
	return i * i;
}


int compute(int i)
{
	if (i <= 0)
	{
		return 0;
	}
	int evens = 0;
	for (int numbs = 1; numbs <= i; numbs++)
	{
		while (i % numbs = 0)
		{
			evens += 1;
		}
	}
	return evens;