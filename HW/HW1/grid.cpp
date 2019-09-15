#include <iostream>

using std::cout;
using std::cin;

int main()
{
	for (int column = 1; column <= 15; column++)
	{
		cout << " ";
		while (column == 3)
		{
			cout << "A";
			break;
		}
		while (column == 7)
		{
			cout << "B";
			break;
		}
		while (column == 11)
		{
			cout << "C";
			break;
		}
	}
	cout << "\n";
	cout << " ";
	int rownumb = 1;
	for (int div = 1; div <= 60; div++) //row dividers
	{
		cout << "-";
		while (div % 15 == 0 && div < 60) //breaks line at 15th period and ends on 60th
		{
			cout << "\n";
			cout << rownumb;
			rownumb++;
			for (int n = 1; n <= 3; n++) //content of rows, split into 3 sections
			{
				cout << "|";
				cout << " ";
				for (int point = 1; point <= 1; point++) //work on this later, core of game
				{
					cout << ".";
				}
				cout << " ";
				cout << "|";
			}
			cout << "\n";
			cout << " ";
			break;
		}
	}
	return 0;
}