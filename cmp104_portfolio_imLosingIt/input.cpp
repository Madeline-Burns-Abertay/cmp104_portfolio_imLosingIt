#include "input.hpp"

static vector<token> tokenize(string in) {
	istringstream iss(in);
	vector<string> intermediate{ istream_iterator<string>{iss}, istream_iterator<string>{} };
	vector<token> result;
	if (intermediate.size() == 2 && intermediate[0] == "look" && intermediate[1] == "around") {
		result.push_back(LOOK_AROUND);
	}

	if (result.size())
	return { ERROR };
}

auto parse(vector<token> tokens) {

}