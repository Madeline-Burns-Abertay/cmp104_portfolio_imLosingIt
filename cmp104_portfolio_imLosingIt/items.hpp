#include <string>
#include <vector>
using namespace std;
#ifndef objects
#define objects

typedef class RoomItem {
	string name;
	RoomItem* use;
public:
	bool operator==(RoomItem other) { return this->getName() == other.getName(); }
	RoomItem() = default;
	string getName() {
		return name;
	}
};
class Inventory;

#endif