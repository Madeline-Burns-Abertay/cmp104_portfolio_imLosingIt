#include "InputHandler.hpp"
#include "resource.h"
using namespace std;

int main() {
	// text based escape room
	bool escaped = false;
	string choice;
	Inventory inventory;
	InputHandler input;
	const string _ERROR_MESSAGE = "You should never see this message.If you do, email 2501892@abertay.ac.uk immediately.";
	cout << "You've been invited to a (INSERT EXCUSE HERE) by a (INSERT EXCUSE GIVER HERE). blah blah blah, it was a trap, get out (type \"help\" for a list of commands)" << endl;
	while (!escaped) {
		cout << "In the room is (INSERT LIST OF OBJECTS). The door is locked, and since this game is text-based, the way to unlock it is probably no more complicated than a key." << endl;
		cout << "What do you do? "; getline(cin, choice);
		vector<Token> in = input.tokenize(choice);
		while (in[0].getType() == ERROR) {
			cerr << "Error: Invalid command" << endl;
			cout << "What do you do? "; getline(cin, choice);
			in = input.tokenize(choice);
		}
		input.parse(in, inventory, escaped);
	}
	cout << "You escaped!\nThanks for playing!" << endl;
	return 0;
}