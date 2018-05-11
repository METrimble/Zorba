#ifndef INVENTORYCLASS_H_INCLUDED
#define INVENTORYCLASS_H_INCLUDED

#include <iostream>
#include <string.h>
#include <list>
#include "Item.h"

using namespace std;

class InventoryClass
{
    public:
    //functions
    void InventoryCommand(); //commands the inventory functions and calls
    void AddItem(); //adds an item to the list based off of coordinates or winning a battle
    void ManageInventory(); //allows player to see the inventory and delete from the inventory, but also if the character is in battle they can select an item to use

    private:

};

#endif // INVENTORYCLASS_H_INCLUDED
