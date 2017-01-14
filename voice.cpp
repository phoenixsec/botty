#include "voice.h"
#include <iostream>
#include <windows.h>

using namespace std;

void Voice::say(string phrase) {
	string command = "espeak \"" + phrase + "\"";
	const char* charCommand = command.c_str();
	cout << phrase << endl;
	system(charCommand);
}
