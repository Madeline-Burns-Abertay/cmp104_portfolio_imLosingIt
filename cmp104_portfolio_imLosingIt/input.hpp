#include <iostream>
#include <string>
#include <vector>
using namespace std;
#ifndef input
#define input

typedef enum token {
	LOOK_AROUND,
	PICK_UP,
	USE,
	UNLOCK
};

static vector<token> tokenize(istream stream, string in);
static auto parse(vector<token> tokens);

#endif // !input
