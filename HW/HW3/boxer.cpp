#include <iostream>
#include "boxerprint.h"
#include <string>

int main()
{
	std::string input;
	std::cout << "Enter anything: ";
	std::getline(std::cin, BoxerPrint(input, 0));

	return 0;
}