#include "input.cpp"
using namespace std;

int main() {
	// text based escape room
	bool escaped = false;
	string defaultMessage = "You should never see this message. If you do, email 2501892@abertay.ac.uk immediately.";
	string choice;
	string choicesMessage = defaultMessage;
	const string escapeMessage = "You escaped!\nThanks for playing!";
	cout << defaultMessage << endl;
	while (!escaped) {
		cout << choicesMessage << endl;
		cout << "What do you do? "; getline(cin, choice);
		vector<token> in = tokenize(choice);
		while (in[0] == ERROR) {
			cerr << "Error: Invalid input";
			cout << "What do you do? "; getline(cin, choice);
			in = tokenize(choice);
		}
	}
	cout << escapeMessage << endl;
	return 0;
}