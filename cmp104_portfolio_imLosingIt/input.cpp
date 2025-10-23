#include "input.hpp"

static vector<token> tokenize(string in) {
	istringstream iss(in);
	vector<string> intermediate{ istream_iterator<string>{iss}, istream_iterator<string>{} };
	vector<token> result;
	for (int i = 0; i < intermediate.size(); i++) strToLower(intermediate[i]);
	if (intermediate.size() == 2 && intermediate[0] == "look" && intermediate[1] == "around") {
		result.push_back(LOOK_AROUND);
	}

	if (result.size()) return result;
	return { ERROR };
}

auto parse(vector<token> tokens) {

}

static void strToLower(string &str) {
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
}