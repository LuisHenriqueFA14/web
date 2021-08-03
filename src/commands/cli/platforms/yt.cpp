#include <iostream>
#include <string>

#include "../../../../include/opener.c/opener.h"
#include "../../../../include/rang.hpp"

using namespace std;

void yt(string content) {
	// Search in YouTube
	cout << endl << "    " << rang::fg::green <<
		"🌎 Searching in YouTube..." << rang::fg::reset << endl << endl;
	
	string completeSearch = "https://www.youtube.com/results?search_query=" + content;

	opener(completeSearch.c_str());
}
