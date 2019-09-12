#include <iostream>

using std::cout;

int main()
{
	for (int a = 1; a <= 100; ++a)
	{
		cout << a << "\n";
		if (a % 3 == 0)
		{
			cout << "Fizz \n";
		}
	}
	return 0;
}