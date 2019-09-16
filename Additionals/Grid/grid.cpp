#include <iostream>

using std::cout;
using std::cin;

int grid()
{
	char grid[3][3] =
	{
		{'1','2','3'},
		{'4','5','6'},
		{'7','8','9'}
	};
	char hit = 'x';
	int row = 0;
	int col = 0;

	for (int label = 1; label <= 15; label++)
	{
		cout << " ";
		while (label == 3)
		{
			cout << "A";
			break;
		}
		while (label == 7)
		{
			cout << "B";
			break;
		}
		while (label == 11)
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
			for (int i = 1; i <= 3; i++) //content of rows, split into 3 sections
			{
				cout << "|";
				cout << " ";
				for (int i = 1; i <= 1; i++) //work on this later, core of game
				{
					cout << grid[row][col];
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