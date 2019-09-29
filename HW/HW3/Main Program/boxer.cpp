/*Alex Frania
HW2: Text in a box.
Date: 9/28/19
Description: This program takes in a string and an integer from the user and creates a box of "*" characters
around the string. The size of the box is dependant on the integer the user inputs.
*/

#include <iostream>
#include "boxerprint.h"
#include <string>

using std::cout;
using std::cin;

int main()
{
	std::string boxed;
	int boxer;
	bool proof = false;
	bool quitter = false;

	cout << "Enter in " << '"' << "stop" << '"' << " when asked to input words to terminate program.\n\n";

	while (quitter == false)
	{
		cout << "Enter in a word, phrase, or character: ";
		std::getline(cin, boxed);

		if (boxed == "stop")
		{
			cout << "Fine, have it your way!\n";
			break;
		}
		cout << "Now enter in an integer: ";
		cin >> boxer;

		while (proof == false)
		{
			if (boxer <= 0)
			{
				cout << "Please enter in a positive integer: ";
				cin >> boxer;
			}
			else
			{
				proof = true;
			}
		}
		cout << "\n";

		BoxerPrint(boxed, boxer);
		cin.ignore();
	}
	return 0;
}