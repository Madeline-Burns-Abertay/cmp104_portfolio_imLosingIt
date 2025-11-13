#pragma once
#include <string>

enum Type {
	ERROR,
	HELP,
	LOOK_AROUND,
	PICK_UP,
	USE,
	UNLOCK,
	ITEM,
	VIEW_INVENTORY
};

class Token {
	Type tokenType;
	std::string name;
public:
	Token(Type);
	Token(Type, std::string);
	~Token();

	Type getType();
	std::string getName();
};