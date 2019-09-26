/*Alex Frania
CS-201
Date: 9/18/19
HW2
Description: 
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void InputNames(std::vector<std::string>& names)
{
	std::string x;
	std::cin >> x;
	names.push_back(x);
}

bool DoesNameExist(const std::string& nametoFind, const std::vector<std::string>& names)
{
	for (int i = 0; i < names.size(); i++)
	{
		if (names[i] == nametoFind)
		{
			return true;
			break;
		}
	}
	return false;
}

void PrintNames(const std::vector<std::string>& names)
{
	int n;
	for (int i = 0; i < n; i++)
	{
		std::cout << "\n";
	}
}

int main(int argc, char **argv)
{
	std::vector <std::string> names;
	for (int i = 0; i < 10; i++)
	{
		std::string name;
		std::cout << "Please enter a name:\n";
		std::getline(std::cin, name);
		names.push_back(name);
	}
	return 0;
}