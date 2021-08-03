#include <iostream>
#include <string>
#include <vector>

#include "help.cpp"
#include "errors/no_content_error.cpp"

using namespace std;

void no_content(string platform) {
	vector<string> platformsVec = {"dd", "ec", "gh", "go", "wi", "ya", "yt", "so"};
	bool isValidPlatform = false;

	for(int j = 0; j < platformsVec.size(); j += 1) {
		if(platform == platformsVec[j]) {
			isValidPlatform = true;
			break;
		}
	}

	if(isValidPlatform) {
		no_content_error(platform);
	} else {
		help();
	}
}
