#include <iostream>

void WordStuff(std::string word)
{
	using std::cout;
	int len = word.size();

	cout << "Input "<< '"' << word << '"' << " is " << len << " characters long.\n";
	cout << "\n";
	for (int n = 1; n <= len; n++)
	{
		cout << "#";
	}
	cout << "\n";
	for (int i = (len - 1); i != -1; i--)
	{
		cout << word[i];
	}
	cout << "\n";
}

int main()
{
	std::string input;

	std::cout << "Type in a word: ";
	std::cin >> input;
	WordStuff(input);
	return 0;
}