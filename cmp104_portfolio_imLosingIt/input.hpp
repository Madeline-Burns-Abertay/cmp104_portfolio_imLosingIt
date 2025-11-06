#pragma once
#include <iostream>
#include "Token.h"
#include <algorithm>
#include <sstream>
#include <vector>
#include "Inventory.h"

std::vector<Token> tokenize(std::string);
void parse(std::vector<Token>);
void strToLower(std::string&);
