#include "Inventory.h"

Inventory::Inventory() {
	inventory = {};
}

void Inventory::pickUpItem(RoomItem item) {
	inventory.push_back(item);
}

void Inventory::useItem(RoomItem item) {
	item.use();
	auto element = std::find(inventory.begin(), inventory.end(), item);
	if (element != inventory.end()) {
		inventory.erase(element);
	}
}

void Inventory::listItems() {
	std::cout << "You have:" << std::endl;
	for (RoomItem item : inventory) {
		std::cout << item.getName() << std::endl;
	}
}