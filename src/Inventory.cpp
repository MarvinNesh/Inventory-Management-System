#include "Inventory.h"
#include <iostream>
#include <algorithm>

void Inventory::addItem(const Item& item) {
    items.push_back(item);
}

std::optional<Item> Inventory::getItem(int id) const {
    for (const auto& item : items) {
        if (item.getId() == id) {
            return item;
        }
    }
    return std::nullopt;
}

void Inventory::updateItem(int id, int quantity, double price) {
    for (auto& item : items) {
        if (item.getId() == id) {
            item.setQuantity(quantity);
            item.setPrice(price);
            return;
        }
    }
}

void Inventory::printInventory() const {
    std::cout << "Current Inventory:\n";
    for (const auto& item : items) {
        std::cout << "  ID: " << item.getId()
                  << ", Name: " << item.getName()
                  << ", Quantity: " << item.getQuantity()
                  << ", Price: " << item.getPrice() << std::endl;
    }
}