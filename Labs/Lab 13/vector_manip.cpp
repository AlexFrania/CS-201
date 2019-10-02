#include "vector_manip.hpp"
#include <iostream>

void InitializedList(const std::vector <std::string>& words={})
{
	for (int i : {1, 2})
	{
		std::cout << words[i] << " ";
	}
}