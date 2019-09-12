#include <iostream>

using std::cout;

int main()
{
	for (int a = 1; a <= 100; ++a)
	{
		if (a % 3 == 0)
		{
			cout << "Fizz\n";
		}
		else
		{
			cout << a << "\n";
		}
	}
	return 0;
}