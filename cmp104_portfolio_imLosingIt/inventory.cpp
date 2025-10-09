#include "items.hpp"

class Inventory {
private:
	vector<RoomItem> inventory;
public:
	Inventory() {
		inventory = {};
	}
	void pickUpItem(RoomItem item) {
		inventory.push_back(item);
	}
	void useItem(RoomItem item) {
		auto element = std::find(inventory.begin(), inventory.end(), item);
		if (element != inventory.end()) {
			inventory.erase(element);
		}
		else {
			
		}
	}
};