#include <iostream>
#include "isDiv3.h"

int main()
{
	for (int i = 1; i <= 40; i++)
	{
		if (isDiv3(i) == true)
		{
			std::cout << i << "\n";
		}
	}
	return 0;
}