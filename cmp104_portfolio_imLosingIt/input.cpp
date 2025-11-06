#include "input.hpp"

std::vector<Token> tokenize(std::string in) {
	std::istringstream iss(in);
	std::vector<std::string> intermediate{ std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>{} };
	for (int i = 0; i < intermediate.size(); i++) strToLower(intermediate[i]);

	if (intermediate.size() == 1 && intermediate[0] == "help") return { Token(HELP) };
	if (intermediate.size() == 2 && intermediate[0] == "look" && intermediate[1] == "around") return { Token(LOOK_AROUND) };

	std::vector<Token> result;
	


	if (intermediate[0] == "unlock") result.push_back(Token(UNLOCK));
	if (intermediate[0] == "pick" && intermediate[1] == "up") result.push_back(Token(PICK_UP));


	if (result.size()) return result;
	return { Token(ERROR) };
}

void parse(std::vector<Token> tokens) {
	bool stop = false;
	int i = 0;
	while (!stop && i < tokens.size()) {
		switch (tokens[i].getType()) {
		case HELP:
			std::cout << "Commands:\nlook around\npick up [item]\nunlock [item]\nuse [item]" << std::endl;
			stop = true;
			break;
		case LOOK_AROUND:
			// do i need this?
			stop = true;
			break;
		}
		i++;
	}
}

void strToLower(std::string &str) {
	std::transform(str.begin(), str.end(), str.begin(), ::tolower);
}