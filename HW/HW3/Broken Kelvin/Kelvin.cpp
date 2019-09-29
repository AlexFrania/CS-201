/*Alex Frania
HW2: Broken Kelvin
Date: 9/28/19
Description: This program takes in a value in Celsius greater than or equal to -273.15 and converts it into Kelvin.
There is also non-functioning code which is marked up with corrections that would make it functional.
*/

/* double ctok(double c)
{
	int k = c + 273.15; // k should be a double, not an integer.
	return int; // You can't return an integer like this. Return k.
}

int main()
{
	double c = 0; 
	cin >> d; // d should be c. Cin should be std::cin
	double k = ctok("c") // "c" is not a data type that is taken in by the function ctok(). Also the code should end with ;
	cout << k << '/n'; // cout should be std::cout
}*/

#include <iostream>
#include <iomanip>

double ctok(double c)
{
	bool proof = false;

	while (proof == false)
	{
		if (c < -273.15)
		{
			std::cout << "\nERROR: Value needs to be greater than or equal to -273.15\n";
			std::cout << "Enter another value: ";
			std::cin >> c;
		}
		else
		{
			proof = true;
		}
	}
	double k = c + 273.15;
	return k;
}

int main()
{
	std::cout << "Please enter a temperature in Celsius greater than or equal to -273.15: ";
	double c = 0;
	std::cin >> c;
	double k = ctok(c);
	std::cout << "\nYour temperature is " << k << " Kelvin.\n";
}
