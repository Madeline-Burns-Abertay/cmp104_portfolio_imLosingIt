#include <string>
#include <vector>
using namespace std;
#ifndef objects
#define objects

typedef class RoomItem {
	string name;
	RoomItem* use;
public:

	RoomItem() = default;
};
class Inventory;

#endif