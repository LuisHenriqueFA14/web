#include <iostream>
#include <string>

#include "../../../../include/opener.c/opener.h"
#include "../../../../include/rang.hpp"

using namespace std;

void gh(string content) {
	// Search in GitHub
	cout << endl << "    " << rang::fg::green <<
		"🌎 Searching in GitHub..." << rang::fg::reset << endl << endl;
	
	string completeSearch = "https://github.com/search?q=" + content;

	opener(completeSearch.c_str());
}
