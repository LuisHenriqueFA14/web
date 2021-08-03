#include <iostream>
#include <string>

#include "commands/cli.cpp"
#include "commands/cli/no_content.cpp"

using namespace std;
int main(int argc, char** argv) {
	switch (argc) {
		case 1:
			help();
			break;
		case 2:
			no_content(argv[1]);
			break;
		default:
			cli(argv[1], argv[2]);
			break;
	}
}

