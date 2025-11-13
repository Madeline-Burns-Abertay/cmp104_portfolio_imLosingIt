#include "Inventory.h"

Inventory::Inventory() {
	inventory = {};
}

void Inventory::pickUpItem(RoomItem item) {
	inventory.push_back(item);
}

void Inventory::deleteItem(RoomItem item) {
	auto element = std::find(inventory.begin(), inventory.end(), item);
	if (element != inventory.end()) {
		inventory.erase(element);
	}
}

void Inventory::listItems() {
	std::cout << "You have:" << std::endl;
	if (inventory.size() == 0) std::cout << "nothing" << std::endl;
	for (RoomItem item : inventory) {
		std::cout << item.getName() << std::endl;
	}
}