#include "input.hpp"

static vector<token> tokenize(string in) {
	istringstream iss(in);
	vector<string> intermediate{ istream_iterator<string>{iss}, istream_iterator<string>{} };
	for (int i = 0; i < intermediate.size(); i++) strToLower(intermediate[i]);

	if (intermediate.size() == 1 && intermediate[0] == "help") return { HELP };
	if (intermediate.size() == 2 && intermediate[0] == "look" && intermediate[1] == "around") return { LOOK_AROUND };

	vector<token> result;
	


	if (intermediate[0] == "unlock") result.push_back(UNLOCK);
	if (intermediate[0] == "pick" && intermediate[1] == "up") result.push_back(PICK_UP);


	if (result.size()) return result;
	return { ERROR };
}

auto parse(vector<token> tokens) {
	for (token t : tokens) {
		switch (t) {
		case HELP:
			cout << "Commands:\nlook around\npick up [item]\nunlock [item]\nuse [item]" << endl;
		}
	}
}

static void strToLower(string &str) {
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
}