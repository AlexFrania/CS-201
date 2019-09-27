
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;

int main()
{
	std::vector<std::string> names;
	std::vector<int> scores;

	std::string n;
	int s;
	bool flag = false;

	cout << "Enter in a name and then that person's score. Type in " << '"' << "x" << '"' << " to stop.\n";

	while (flag == false)
	{
		cout << "Name: ";
		cin >> n;

		for (int i = 0; i < names.size(); i++)
		{
			if (n == names[i])
			{
				cout << "\nError: This name has already been used. Program terminated.";
				flag = true;
			}
		}
		
		cout << "Score: ";
		cin >> s;

		names.push_back(n);
		scores.push_back(s);

		if (s == 0)
		{
			break;
		}
		/*if (flag == false)
		{
			cout << "Score: ";
			cin >> s;

			names.push_back(n);
			scores.push_back(s);
		}*/
	}
	cout << "\n";
	/*for (int i = 0; i < names.size(); i++)
	{
		cout << names[i] << " has " << scores[i] << " points.\n";
	}*/
	return 0;
}