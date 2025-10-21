#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"
#include <vector>
#include <optional>

class Inventory {
public:
    void addItem(const Item& item);
    std::optional<Item> getItem(int id) const;
    void updateItem(int id, int quantity, double price);
    void printInventory() const;

private:
    std::vector<Item> items;
};

#endif // INVENTORY_H