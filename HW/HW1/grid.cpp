#include <iostream>

using std::cout;
using std::cin;

int main()
{
	for (int column = 1; column <= 16; column++)
	{
		cout << " ";
		while (column == 4)
		{
			cout << "A";
			break;
		}
		while (column == 6)
		{
			cout << "B";
			break;
		}
		while (column == 10)
		{
			cout << "C";
			break;
		}
	}
	cout << "\n";
	cout << " ";
	for (int div = 1; div <= 60; div++) //row dividers
	{
		cout << "-";
		while (div % 15 == 0 && div < 60) //breaks line at 15th period and ends on 60th
		{
			cout << "\n";
			for (int rownumb = 1; rownumb <= 3; rownumb++)
			{
				cout << rownumb;
				for (int n = 1; n <= 3; n++) //content of rows, split into 3 sections
				{
					cout << "|";
					cout << " ";
					for (int space = 1; space <= 1; space++) //work on this later, core of game
					{
						cout << "x";
					}
					cout << " ";
					cout << "|";
				}
				cout << "\n";
			}
			break;
		}
	}
	return 0;
}