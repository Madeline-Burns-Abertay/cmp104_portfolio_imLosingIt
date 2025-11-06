#pragma once
#include "items.hpp"
#include <iostream>

class Inventory
{
private:
	std::vector<RoomItem> inventory;
public:
	Inventory();
	void pickUpItem(RoomItem item);
	void useItem(RoomItem item);
	void listItems();
};

