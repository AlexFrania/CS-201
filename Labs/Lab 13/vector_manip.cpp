#include <iostream>
#include "vector_manip.hpp"

void PrintWords(const std::vector <std::string>& words)
{
	for (const std::string& word: words)
	{
		std::cout << word << " ";
	}
}