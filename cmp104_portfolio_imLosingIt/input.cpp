#include "input.hpp"

static vector<token> tokenize(string in) {
	istringstream iss(in);
	vector<string> intermediate{ istream_iterator<string>{iss}, istream_iterator<string>{} };
	for (string str : intermediate) cout << str;
	return { ERROR };
}

auto parse(vector<token> tokens) {

}