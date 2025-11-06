#include "Token.h"

Token::Token(Type type) {
	tokenType = type;
}

Token::Token(Type type, std::string itemName = "") {
	tokenType = type;
	name = itemName;
}

Token::~Token() = default;

Type Token::getType() {
	return tokenType;
}

std::string Token::getName() {
	return name;
}