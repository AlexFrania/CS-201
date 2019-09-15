#include <iostream>

using std::cout;
using std::cin;

int main()
{
	for (int div = 1; div <= 60; div++) //row dividers
	{
		cout << "-";
		while (div % 15 == 0 && div < 60) //breaks line at 15th period and ends on 60th
		{
			cout << "\n";
			for (int n = 1; n <= 3; n++) //content of rows, split into 3 sections
			{
				cout << "|";
				for (int space = 1; space <= 3; space++)
				{
					cout << " ";
				}
				cout << "|";
			}
			cout << "\n";
			break;
		}
	}
	return 0;
}