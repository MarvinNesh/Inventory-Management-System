#include <iostream>
#include "Inventory.h"

int main() {
    Inventory inventory;

    inventory.addItem(Item(1, "Apple", 10, 0.50));
    inventory.addItem(Item(2, "Orange", 20, 0.75));
    inventory.addItem(Item(3, "Banana", 15, 0.40));

    inventory.printInventory();

    return 0;
}