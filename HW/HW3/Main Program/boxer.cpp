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