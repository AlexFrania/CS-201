#include <iostream>
#include "boxerprint.h"

using std::cout;

void BoxerPrint(std::string input, int n)
{
	int dub = n * 2;

	for (int i = 1; i <= n; i++)
	{
		for (int x = 1; x <= input.size() + dub + 2; x++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 1; i <= 3; i++)
	{
		for (int x = 1; x <= n; x++)
		{
			cout << "*";
		}
			
		if (i == 1 || i == 3)
		{
			for (int a = 1; a <= input.size() + 2; a++)
			{
				cout << " ";
			}
		}
		else
		{
			cout << " " << input << " ";
		}

		for (int x = 1; x <= n; x++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 1; i <= n; i++)
	{
		for (int x = 1; x <= input.size() + dub + 2; x++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	cout << "\n";
}