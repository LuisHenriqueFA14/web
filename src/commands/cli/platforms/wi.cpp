#include <iostream>
#include <string>

#include "../../../../include/opener.c/opener.h"
#include "../../../../include/rang.hpp"

using namespace std;

void wi(string content) {
	// Search in WikiPedia
	cout << endl << "    " << rang::fg::green <<
		"🌎 Searching in WikiPedia..." << rang::fg::reset << endl << endl;
	
	string completeSearch = "https://pt.wikipedia.org/wiki/Special:Search?search=" + content;

	opener(completeSearch.c_str());
}
