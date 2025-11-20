#include "InputHandler.hpp"

std::vector<Token> InputHandler::tokenize(std::string in) {
	std::istringstream iss(in);
	std::vector<std::string> intermediate{ std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>{} };
	for (int i = 0; i < intermediate.size(); i++) tolower(intermediate[i]);

	if (intermediate.size() == 1 && intermediate[0] == "help") return { Token(HELP) };
	if (intermediate.size() == 2 && intermediate[0] == "look" && intermediate[1] == "around") return { Token(LOOK_AROUND) };
	if (intermediate.size() == 2 && intermediate[0] == "view" && intermediate[1] == "inventory") return { Token(VIEW_INVENTORY) };

	std::vector<Token> result;
	


	if (intermediate[0] == "unlock") result.push_back(Token(UNLOCK));
	if (intermediate[0] == "pick" && intermediate[1] == "up") result.push_back(Token(PICK_UP));


	if (result.size()) return result;
	return { Token(ERROR) };
}

void InputHandler::parse(std::vector<Token> tokens, Inventory inventory, bool &escaped) {
	std::string state = "";
	int i = 0;
	while (state != "stop" && i < tokens.size()) {
		switch (tokens[i].getType()) {
		case HELP:
			std::cout << "Commands:\nlook around\npick up [item]\nunlock [item]\nuse [item]\nview inventory" << std::endl;
			state = "stop";
			break;
		case LOOK_AROUND:
			// do i need this?
			state = "stop";
			break;
		case VIEW_INVENTORY:
			inventory.listItems();
			state = "stop";
			break;
		case UNLOCK:
			if (inventory.hasItem(RoomItem("Key", true))) {
				state = "unlock";
			}
			std::cout << "You don't have the key." << std::endl;
			state = "stop";
		}
		i++;
	}
}

void InputHandler::tolower(std::string &str) {
	std::transform(str.begin(), str.end(), str.begin(), std::tolower);
}