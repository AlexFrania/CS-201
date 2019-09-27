#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::string input;

	std::cout << "Enter in a word: ";
	std::cin >> input;

	for (int i = 0; i <= input.size(); i++)
	{
		if (input[i] >= 'a' && input[i] <= 'z')
		{
			std::cout << input[i];
		}
	}
	std::cout << "\n";
	return 0;
}