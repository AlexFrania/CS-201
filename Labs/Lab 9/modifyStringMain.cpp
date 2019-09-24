#include <iostream>
#include "modifyString.h"

using std::cin;
using std::cout;

int main()
{
	std::string stringInMain;

	cout << "Type in something: ";
	getline(cin, stringInMain);
	cout << "Length: " << modifyString(stringInMain, 0) << "\n";
	cout << "New String: " << stringInMain << "\n";
	cout << "\n" << "Type in something else: ";
	getline(cin, stringInMain);
	cout << "Length: " << modifyString(stringInMain, 5) << "\n";
	cout << "New String: " << stringInMain << "\n";
	cout << "\n" << "Type in something else, again: ";
	getline(cin, stringInMain);
	cout << "Length: " << modifyString(stringInMain, 6) << "\n";
	cout << "New String: " << stringInMain << "\n";
	return 0;
}