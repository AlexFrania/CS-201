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

void InputNames()
{
	using std::cin;
	using std::string;
	string name;

	for (int i = 0; i < 10; i++)
	{
		std::string name;
		std::cout << "Please enter a name: ";
		std::getline(cin, name);
		names.push_back(name);
	}
}

int main(int argc, char **argv)
{
	void InputNames(std::vector<std::string> & names);
	return 0;
}