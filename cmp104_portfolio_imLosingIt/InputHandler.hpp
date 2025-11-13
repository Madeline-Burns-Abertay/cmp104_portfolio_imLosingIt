#pragma once
#include <iostream>
#include "Token.h"
#include <algorithm>
#include <sstream>
#include <vector>
#include "Inventory.h"

class InputHandler {
public:
	std::vector<Token> tokenize(std::string);
	void parse(std::vector<Token>, Inventory);
	void tolower(std::string&);
};