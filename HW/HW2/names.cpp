/*Alex Frania
CS-201
Date: 9/18/19
HW2: Names
Description: 
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void InputNames(std::vector<std::string>& names)
{	
	for (int i = 0; i < 10; i++)
	{
		std::string name;

		std::cout << "Enter a name: ";
		std::cin >> name;
		names.push_back(name);
		
		if (i == 10)
		{
			std::string nameToFind;

			std::cout << "What name would you like to look "
			DoesNameExist(nameToFind, names); // Working on this part
		}
	}	
}

bool DoesNameExist(const std::string& nameToFind, const std::vector<std::string>& names)
{
	for (int i = 0; i < names.size(); i++)
	{
		if (names[i] == nameToFind)
		{
			return true;
			break;
		}
	}
	return false;
}

void PrintNames(const std::vector<std::string>& names)
{
	for (int i = 0; i < names.size(); i++)
	{
		std::cout << names[i];
		std::cout << "\n";
	}
}

int main(int argc, char **argv)
{
	std::vector <std::string> names;
	InputNames(names);
	/*std::vector <std::string> names;
	for (int i = 0; i < 10; i++)
	{
		std::string name;
		std::cout << "Please enter a name: ";
		std::getline(std::cin, name);
		names.push_back(name);
	}*/
	return 0;
}