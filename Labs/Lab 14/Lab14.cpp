#include <iostream>
#include <string>
#include "Lab14.h"

void reduceString(std::string word)
{
	for (int i = word.size(); i >= 0; i--)
	{
		word.substr(i);
	}
}