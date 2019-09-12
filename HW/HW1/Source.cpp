#include <iostream>

using std::cout;
using std::cin;

int main()
{
	int i; //i is input
	cin >> i;
	if (i <= 0)
	{
		cout << "Please enter a valid number.\n";
	}
	else
	{
		for (int h = 0; h < (i+(i-1)); ++h) //h is height
		{
			cout << "#\n";
		}
	}
	return 0;
}