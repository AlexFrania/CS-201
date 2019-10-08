#include "Lab15.h"

int numb(std::string i)
{
	std::istringstream correct(i);
	int x;
	correct >> x;
	return x;
}