/*Alex Frania
CS-201
Date: 9/18/19
HW2: Names
Description: Program takes in user input into a vector. Once in the vector, the program can
find whether a name that the the user inputs is already in the vector array or not. The program
then prints the names from the vector back out. Finally, the program lists the length of characters
for each name in the order the names were originally input.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool DoesNameExist(const std::string& nameToFind, const std::vector<std::string>& names)
{
	for (int i = 0; i < names.size(); i++)
	{
		if (names[i] == nameToFind)
		{
			std::cout << "This name IS in the list.\n";
			return true;
			break;
		}
	}
	std::cout << "This name is NOT in the list.\n";
	return false;
}

void PrintNames(const std::vector<std::string>& names)
{
	std::cout << "\nPrint Names\n";
	for (int i = 0; i < names.size(); i++)
	{
		std::cout << names[i];
		std::cout << "\n";
	}
}

void PrintLength(const std::vector<std::string>& names)
{
	std::cout << "\nPrint Name Length\n";
	for (int i = 0; i < names.size(); i++)
	{
		std::cout << names[i].size();
		std::cout << "\n";
	}
}

void InputNames(std::vector<std::string>& names)
{	
	for (int i = 1; i <= 10; i++)
	{
		std::string name;

		std::cout << "Enter a name: ";
		std::cin >> name;
		names.push_back(name);
	}	
}

int main(int argc, char **argv)
{
	std::vector <std::string> names;
	std::string nameToFind;

	InputNames(names);

	std::cout << "\nSearch for name in list: ";
	std::cin >> nameToFind;

	DoesNameExist(nameToFind, names);
	PrintNames(names);
	PrintLength(names);
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