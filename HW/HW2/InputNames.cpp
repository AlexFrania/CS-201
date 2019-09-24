#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "InputNames.h"

void InputNames()
{
	using std::cin;
	using std::string;

	for (int i = 0; i < 10; i++)
	{
		string name;

		std::cout << "Please enter a name: ";
		std::getline(cin, name);
		names.push_back(name);
	}
}
