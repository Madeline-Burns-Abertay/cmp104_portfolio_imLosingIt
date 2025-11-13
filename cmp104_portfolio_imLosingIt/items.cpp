#include "items.hpp"

RoomItem::RoomItem(std::string name, bool canPickUp) {
	this->name = name;
	this->canPickUp = canPickUp;
}

RoomItem::~RoomItem() {

}

std::string RoomItem::getName() {
	return name;
}

bool RoomItem::tryPickUp() {
	return canPickUp;
}

bool RoomItem::operator==(RoomItem other) {
	return name == other.name;
}