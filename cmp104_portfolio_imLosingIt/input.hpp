#include <iostream>
#include <string>
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

static vector<token> tokenize(istream stream, string in);
static auto parse(vector<token> tokens);

#endif // !input
