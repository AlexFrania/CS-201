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