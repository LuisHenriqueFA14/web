#include <iostream>
#include <string>

#include "../../../../include/opener.c/opener.h"
#include "../../../../include/rang.hpp"

using namespace std;

void dd(string content) {
	// Search in DuckDuckGo
	cout << endl << "    " << rang::fg::green <<
		"🌎 Searching in DuckDuckGo..." << rang::fg::reset << endl << endl;
	
	string completeSearch = "https://duckduckgo.com/?q=" + content;

	opener(completeSearch.c_str());
}
