#include "input.hpp"
using namespace std;

int main() {
	// text based escape room
	bool escaped = false;
	string defaultMessage = "You should never see this message. If you do, email 2501892@abertay.ac.uk immediately.";
	string choice;
	string openingMessage, choicesMessage = defaultMessage;
	openingMessage += " (type \"help\" for a list of commands)";
	cout << openingMessage << endl;
	while (!escaped) {
		cout << choicesMessage << endl;
		cout << "What do you do? "; getline(cin, choice);
		vector<Token> in = tokenize(choice);
		while (in[0].getType() == ERROR) {
			cerr << "Error: Invalid command" << endl;
			cout << "What do you do? "; getline(cin, choice);
			in = tokenize(choice);
		}
		parse(in);
	}
	cout << "You escaped!\nThanks for playing!" << endl;
	return 0;
}