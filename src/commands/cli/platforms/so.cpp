#include <iostream>
#include <string>

#include "../../../../include/opener.c/opener.h"
#include "../../../../include/rang.hpp"

using namespace std;

void so(string content) {
	// Search in Google
	cout << endl << "    " << rang::fg::green <<
		"🌎 Searching in StackOverflow..." << rang::fg::reset << endl << endl;
	
	string completeSearch = "https://stackoverflow.com/search?q=" + content;

	opener(completeSearch.c_str());
}
