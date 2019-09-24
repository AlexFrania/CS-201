#include "modifyString.h"
#include <string>

int modifyString(std::string & referencedString, int n)
{
	n += (n % 10);
	std::string i = std::to_string(n);
	referencedString += i;
	return referencedString.size();
}