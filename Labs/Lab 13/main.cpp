/**
 * @file     vector_manip_main.cpp
 * @author   Student Name
 * @version  Jan 21, 2019
 * John Quan
 *
 * Declare a vector of strings, initialize it using an initializer
 * list (braces-based initialization), and print it—neatly—using
 * a range-based for-loop.
 */

#include <iostream>
#include <vector>
#include "vector_manip.hpp"

int main() {
	//TODO Declare a vector of strings named "words"

	//TODO REQUIRED Print original words with a range-based for loop.
	//     Access each string by-reference and make it constant.

	std::vector <std::string> words = { "it—neatly—", "Hey,", "howdy!" };
	PrintWords(words);

	std::cout << "\n";
	return 0;
}