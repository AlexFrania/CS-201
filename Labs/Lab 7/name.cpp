/*Alex Frania
CS-201
Date: 9/18/19
Lab 7*/

#include <iostream>
#include <string>
#include "intio.hpp"

int GetIntSum()
{
	int i;

	std::cout << "Enter integers. To get the sum of your integers, enter 0: ";
	while (i != 0)
	{
		{
			std::cout << "Sum: ";
			putInt(i, 1);
		}
	}
	return 0;
}

int main()
{	
	using std::cout;
	using std::cin;
	
	cout << "Enter three integers: ";
	
	int i = getInt();
	int i2 = getInt();
	int i3 = getInt();
	cout << "\n";
	
	putInt(i, 10);
	cout << "\n";
	putInt(i2, 10);
	cout << "\n";
	putInt(i3, 10);
	cout << "\n";

	return 0;
}