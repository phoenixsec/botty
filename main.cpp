#include <iostream>
#include "learner.h"

using namespace std;

main() {
	Learner AI;
	
	for(;;){
		cout << "\nYOU: ";
		string phrase;
		getline(cin, phrase);
		
		cout << "COMPUTER: ";
		AI.respond(phrase);
	}
}