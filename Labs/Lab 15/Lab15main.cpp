#include "Lab15.h"

bool Check(std::vector <std::string> list)
{
	bool error;
	int count = 0;

	for (int i = 0; i < list.size(); i++)
	{
		if (!numb(list[i]))
		{
			std::cout << "Value " << list[i] << " is causing a string stream error.\n";
			error = true;
			count++;
		}
	}
	std::cout << "\n";
	return error;
}

int main()
{
	std::vector <std::string> list= { "69", "69a", "a69", "5.6", "68", "\t11", "69 69", "0xA" };
	
	Check(list);

	for (std::string i : list)
	{
		std::cout << numb(i) << ", ";
	}
	std::cout << "\n";
}