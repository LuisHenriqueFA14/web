#include <iostream>
#include <string>

#include "../../../../include/rang.hpp"

using namespace std;

void no_content_error(string platform) {
	cout << endl << "    " << rang::fg::red << "[ERROR] No search content" << rang::fg::reset << endl;

	cout << endl;

	cout << "    " << "Right usage:" << endl;
	cout << "    " << "  " << rang::fg::yellow << "web " << platform << " <SEARCH CONTENT>" << rang::fg::reset << endl;

	cout << endl << "    " << "To show " << rang::fg::gray << "help" << rang::fg::reset << " page, type " << rang::fg::magenta << "web" << rang::fg::reset << ". 😜" << endl << endl;
}
