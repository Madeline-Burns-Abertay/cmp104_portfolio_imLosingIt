#include "InputHandler.hpp"
#include "resource.h"
using namespace std;

int main() {
	// text based escape room
	bool escaped = false;
	string choice;
	Inventory inventory;
	InputHandler input;

	cout << OPENING_MESSAGE << " (type \"help\" for a list of commands)" << endl;
	while (!escaped) {
		cout << CHOICES_MESSAGE << endl;
		cout << "What do you do? "; getline(cin, choice);
		vector<Token> in = input.tokenize(choice);
		while (in[0].getType() == ERROR) {
			cerr << "Error: Invalid command" << endl;
			cout << "What do you do? "; getline(cin, choice);
			in = input.tokenize(choice);
		}
		input.parse(in, inventory);
	}
	cout << "You escaped!\nThanks for playing!" << endl;
	return 0;
}