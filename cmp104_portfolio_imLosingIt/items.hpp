#pragma once
#include <string>
#include <vector>

class RoomItem {
private:
	std::string name;
	bool canPickUp;
public:
	RoomItem(std::string, bool);
	~RoomItem();

	std::string getName();
	bool tryPickUp();
	bool operator==(RoomItem);
};