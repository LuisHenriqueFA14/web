#include <iostream>
#include <string>

#include "../../../../include/opener.c/opener.h"
#include "../../../../include/rang.hpp"

using namespace std;

void ya(string content) {
	// Search in Yahoo
	cout << endl << "    " << rang::fg::green <<
		"🌎 Searching in Yahoo..." << rang::fg::reset << endl << endl;
	
	string completeSearch = "https://br.search.yahoo.com/yhs/search?q=" + content;

	opener(completeSearch.c_str());
}
