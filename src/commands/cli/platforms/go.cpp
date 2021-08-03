#include <iostream>
#include <string>

#include "../../../../include/opener.c/opener.h"
#include "../../../../include/rang.hpp"

using namespace std;

void go(string content) {
	// Search in Google
	cout << endl << "    " << rang::fg::green <<
		"🌎 Searching in Google..." << rang::fg::reset << endl << endl;
	
	string completeSearch = "https://www.google.com/search?q=" + content;

	opener(completeSearch.c_str());
}
