#pragma once
#include "items.hpp"
#include <iostream>

class Inventory
{
private:
	std::vector<RoomItem> inventory;
public:
	Inventory();
	void pickUpItem(RoomItem);
	void deleteItem(RoomItem);
	void listItems();
	bool hasItem(RoomItem);
};

