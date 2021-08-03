#include <iostream>
#include <string>

#include "cli/platforms/dd.cpp"
#include "cli/platforms/ec.cpp"
#include "cli/platforms/gh.cpp"
#include "cli/platforms/go.cpp"
#include "cli/platforms/wi.cpp"
#include "cli/platforms/ya.cpp"
#include "cli/platforms/yt.cpp"

using namespace std;

void cli(string platform, string content) {
	string search = content;

	while(search.find(" ") < search.size()) {
		search.replace(search.find(" "), sizeof(" ") - 1, "+");
	}

	if(platform == "dd") {
		dd(search);
	} else if(platform == "gh") {
		gh(search);
	} else if(platform == "go") {
		go(search);
	} else if(platform == "wi") {
		wi(search);
	} else if(platform == "ya") {
		ya(search);
	} else if(platform == "yt") {
		yt(search);
	} else if(platform == "ec") {
		ec(search);
	}
}
