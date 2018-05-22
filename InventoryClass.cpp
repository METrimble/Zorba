#include <iostream>
#include <string.h>
#include <list>

#include "InventoryClass.h"

using namespace std;

char InventoryClass::addOrManage = 'A';
bool InventoryClass::inOrOutBattle = false;

void InventoryClass::InventoryCommand()
{

    //object for running the functions from the class
    InventoryClass run;

    //if user is adding an item to the inventory
    if(addOrManage == 'a' || addOrManage == 'A')
    {
        run.AddItem();
    }

    //if user is managing inventory
    if(addOrManage == 'b' || addOrManage == 'B')
    {
        run.ManageInventory();
    }
}

/****
Adding an item
Out of battle:
-chests will be determined on certain coordinates
-when the user gets on a coordinate that has a chest then it will open that chest and add it to the inventory

In Battle:
-At the end of the battle the user will be prompted with a reward - this will be added to the inventory
*****/
void InventoryClass::ManageInventory()
{
    //chest is open - true  chest is closed - false
    bool chest00 = false;
    bool chest01 = false;
    bool chest02 = false;
    bool chest03 = false;
    bool chest04 = false;
    bool chest_11 = false;
    bool chest11 = false;
    
    /* Out of battle */
    if (inOrOutBattle == false)
    {
        //check each room for a chest - if they are the coordinates then they will open it - if they have opened it then set it's open or close variable true
        if(cordx == 0 && cordy == 0 && chest00 == false)
        {
        
            //chest is now open
            chest00 = true;
        }
        if(cordx == 0 && cordy == 1 && chest01 == false)
        {
            
            //chest is now open
            chest01 = true;
        }
        if(cordx == 0 && cordy == 2 && chest02 == false)
        {
            
            //chest is now open
            chest02 = true;
        }
        if(cordx == 0 && cordy == 3 && chest03 == false)
        {
            
            //chest is now open 
            chest03 = true;
        }
        if(cordx == 0 && cordy == 4 && chest04 == )
        {
            
        }
        if(cordx == -1 && cordy == 1)
        {
            
        }
        if(cordx == 1 && cordy == 1)
        {
            
        }
        if else
        {
            cout << "\nSorry my dude, There are no chests to be opened in this room";   
        }
    }

    /* In Battle */
    if (inOrOutBattle == true)
    {

    }
}

/******
Managing Inventory
Out of Battle:
user can access menu whenever they need - they can delete items from the inventory and equip weapons and clothing
seeing what the items will do

In Battle:
-seeing what the items will do
-selecting items to use putting on armor and using potions
******/
void InventoryClass::AddItem()
{
    /* Out of battle */
    if (inOrOutBattle == false)
    {

    }

    /* In Battle */
    if (inOrOutBattle == true)
    {

    }

}
