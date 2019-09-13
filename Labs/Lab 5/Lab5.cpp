#include <iostream>

using std::cin;
using std::cout;

int main()
{
	cout << "Put in an integer: ";
	int i;
	cin >> i;
	switch (i % 3)
	{
	case 0:
		cout << "Integer is a multiple of 3.";
		break;
	case 2: 
		cout << "Integer is not a muliple of 3.";
		break;
	Default:
		cout << "Please use integers.";
		break;
	}
	return 0;
}