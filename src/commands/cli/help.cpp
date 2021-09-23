#include "../../../include/rang.hpp"
#include <string>
#include <iostream>
using namespace std;
void help() {
	string space = "    ";
	string midSpace = "  ";
	
	cout << endl << space << rang::fg::cyan <<
		"🌎 Search in the web, using different platforms without leaving the Terminal! ⌨️"
		<< rang::fg::reset << endl << endl;

	cout << space << "Usage: " << rang::fg::yellow << "web <PLATFORM> <SEARCH>" << rang::fg::reset << endl << endl;

	cout << space << "Available search engines: " << endl;

	cout << space << midSpace << "- " << rang::fg::gray << "dd" << space << rang::fg::reset << "// DuckDuckGo" << endl;
	cout << space << midSpace << "- " << rang::fg::gray << "gh" << space << rang::fg::reset << "// GitHub" << endl;
	cout << space << midSpace << "- " << rang::fg::gray << "go" << space << rang::fg::reset << "// Google" << endl;
	cout << space << midSpace << "- " << rang::fg::gray << "wi" << space << rang::fg::reset << "// WikiPedia" << endl;
	cout << space << midSpace << "- " << rang::fg::gray << "ya" << space << rang::fg::reset << "// Yahoo!" << endl;
	cout << space << midSpace << "- " << rang::fg::gray << "yt" << space << rang::fg::reset << "// YouTube" << endl;
	cout << space << midSpace << "- " << rang::fg::gray << "so" << space << rang::fg::reset << "// StackOverflow" << endl;

	cout << endl;

	cout << space << "Examples: " << endl;

	cout << space << midSpace << rang::fg::yellow << "web go 'how to exit vim ?'" << rang::fg::reset << endl;
	cout << space << midSpace << rang::fg::yellow << "web gh 'fzf'" << rang::fg::reset << endl;
	cout << space << midSpace << rang::fg::yellow << "web wi 'Simpsons'" << rang::fg::reset << endl;

	cout << endl;

	cout << space << "Show this screen with " << rang::fg::magenta << "web" << rang::fg::reset << "." << endl << endl;
}
