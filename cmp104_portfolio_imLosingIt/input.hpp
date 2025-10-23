#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;
#ifndef input
#define input

typedef enum token {
	ERROR,
	LOOK_AROUND,
	PICK_UP,
	USE,
	UNLOCK
};

static vector<token> tokenize(istream, string);
static auto parse(vector<token>);
static void strToLower(string&);

#endif // !input
