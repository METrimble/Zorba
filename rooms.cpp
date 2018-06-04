#include <iostream>

#include "rooms.h"
#include "InventoryClass.h"
#include "Fight.h"

using namespace std;

int puzzle = 0;

void entrance()//Entrance Tile
{   cout << "       N       \n";
    cout << "00000|   |00000\n";
    cout << "0|---|   |---|0\n";
    cout << "0|           |0\n";
    cout << "0| Enterance |0\n";
    cout << "0|           |0\n";
    cout << "0|___________|0\n";
    cout << "000000000000000\n";
    int player = 0;
    cout << "You are in the entrance, there is a door to the north\n";

}

void main_hall()//main hall
{
    cout << "          N          \n";
    cout << " 0o0o0o0|   |o0o0o00 \n";
    cout << " o0|====|   |====|0o \n";
    cout << " 0o|             |o0 \n";
    cout << " o0|             |0o \n";
    cout << " --               -- \n";
    cout << "W                  E\n";
    cout << " __   Main  Hall  __ \n";
    cout << " 0o|             |o0 \n";
    cout << " o0|             |0o \n";
    cout << " 0o|             |o0 \n";
    cout << " o0|====|   |====|0o \n";
    cout << " 0o0o0o0|   |o0o0o0 \n";
    cout << "          S         \n";
    int player = 0;
    cout << "This is the main hall, there are broken tables and junk everywhere, it looks like its been abandoned for years\n";
    cout << "There is an entrance to the NORTH, EAST, SOUTH, and WEST\n";

}
void puzzle1()//puzzle room 1, contains what to say in the main hall
{
    cout << "0o0o00o0o0o0o0o  \n";
    cout << "o0|---------|o0  \n";
    cout << "0o|          --  \n";
    cout << "o0| Storage     E\n";
    cout << "0o|          __  \n";
    cout << "o0|_________|0o  \n";
    cout << "0o0o0o0o0o0o0o0  \n";
    cout <<"This looks like a storage room, there are lots of barrels and crates all around the room.\n";
    cout <<"There is writing on the wall, it says 'Say my name, Say my name, Say my name in another room\n";

}
void puzzle2()//puzzle room 2, contains a statue with the name "Shakira" when the player types "Say my name"
{
    string name;
    cout << " 0o0o00o0o0o0o0o\n";
    cout << " o0|---------|o0\n";
    cout << " --          |0o\n";
    cout << "W    Fuhrers |o0\n";
    cout << " __   place  |0o\n";
    cout << " o0|_________|0o\n";
    cout << " 0o0o0o0o0o0o0o0\n";
    cout << "This room is empty, other than a statue with a strange man with a weird mustache\n";
    cout << "Say my name?: ";
    cin >> name;
    if (name == "HITLER" || name == "hitler" || name == "Hitler")
    {

        cout << "The statue begins to rumble and raise up, reveling letters carved into stone that say: To fight the boss you must type the magic word\n";
    }
    else
    {
        cout << "Not my name thot\n";
    }
}
void mboss()//This is the room where the mini-boss is
{
    cout << "          N           \n";
    cout << " 0o0o0o0 |   |o0o0o0o \n";
    cout << " o0|=====+   +====|0o \n";
    cout << " 0o|              |o0 \n";
    cout << " o0|              |0o \n";
    cout << " o0|              |o0 \n";
    cout << " 0o|              |0o \n";
    cout << " o0|    Putin's   |o0 \n";
    cout << " 0o|Masturbatorium|o0 \n";
    cout << " o0|              |0o \n";
    cout << " 0o|              |o0 \n";
    cout << " o0|=====+   +====|0o \n";
    cout << " 0o0o0o0 |   |o0o0o0o \n";
    cout << "          S           \n";
    string pass;
    cout << "A lot of white stuff covers the floor. Some of it's sticky, others not.(You think it might be ice cream)All there is in the room is a computer with Cheeto stains all over it.";
}
void test()
{
    cout << "Test 1000";
}
void puzzle3()
{
    string q1;
    string q2;
    string q3;
    cout << "           N          \n";
    cout << " 0o0o0o0 |   |o0o0o0o \n";
    cout << " o0|=====+   +====|0o \n";
    cout << " 0o|              |o0 \n";
    cout << " o0|              |0o \n";
    cout << " o0|      | |     |o0 \n";
    cout << " 0o|      | |     |0o \n";
    cout << " o0|  ----+ +---- |o0 \n";
    cout << " 0o|  ----+ +---- |o0 \n";
    cout << " o0|      | |     |0o \n";
    cout << " o0|      | |     |0o \n";
    cout << " o0|    Hallway   |0o \n";
    cout << " o0|      of      |0o \n";
    cout << " o0|     death    |0o \n";
    cout << " o0|              |0o \n";
    cout << " o0|              |0o \n";
    cout << " o0|              |0o \n";
    cout << " o0|              |0o \n";
    cout << " o0|              |0o \n";
    cout << " 0o|              |o0 \n";
    cout << " o0|=====+   +====|0o \n";
    cout << " 0o0o0o0 |   |o0o0o0o \n";
    cout << "           S          \n";
    cout << "You may have brought your pants, but....\n did you study for your MATH TEST!!!\n";
    cout << "What is you're name?: ";
    cin >> q1;
    cout << "\nWhat is your quest?: ";
    cin >> q2;
    cout << "\nWhat is your favorite color?: ";
    cin >> q3;
    system("CLS");
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << ".";
    cout << "Okay, you can go\n";
    system("pause");


}
void hitler1()
{
    cout << "          N           \n";
    cout << " 0o0o0o00o0o0o0o0o0o0 \n";
    cout << " o0|===============|0o \n";
    cout << " 0o|      =o=      |o0 \n";
    cout << " o0|      ###      |0o \n";
    cout << " o0|               |o0 \n";
    cout << " 0o|               |0o \n";
    cout << " o0|    Hitler's   |o0 \n";
    cout << " 0o|     Office    |o0 \n";
    cout << " o0|               |0o \n";
    cout << " 0o|               |o0 \n";
    cout << " o0|=====+    +====|0o \n";
    cout << " 0o0o0o0 |    |o0o0o0o \n";
    cout << "          S           \n";
    cout << "hitler";
    battle(hitler);
}
void maps()
{
    cout << "                    N          \n";
    cout << "         0o0o0o00o0o0o0o0o0o0  \n";
    cout << "         o0|===============|0o \n";
    cout << "         0o|      =o=      |o0 \n";
    cout << "         o0|      ###      |0o \n";
    cout << "         o0|               |o0 \n";
    cout << "         0o|               |0o \n";
    cout << "         o0|    Hitler's   |o0 \n";
    cout << "         0o|     Office    |o0 \n";
    cout << "         o0|               |0o \n";
    cout << "         0o|               |o0 \n";
    cout << "         o0|====+     +====|0o \n";
    cout << "         0o0o0o0|     |o0o0o0o \n";
    cout << "         0o0o0o0|     |0o0o0o  \n";
    cout << "         o0|====+     +===|0o  \n";
    cout << "         0o|              |o0  \n";
    cout << "         o0|              |0o  \n";
    cout << "         o0|      | |     |o0  \n";
    cout << "         0o|      | |     |0o  \n";
    cout << "         o0|  ----+ +---- |o0  \n";
    cout << "         0o|  ----+ +---- |o0  \n";
    cout << "         o0|      | |     |0o  \n";
    cout << "         o0|      | |     |0o  \n";
    cout << "         o0|    Hallway   |0o  \n";
    cout << "         o0|      of      |0o  \n";
    cout << "         o0|     death    |0o  \n";
    cout << "         o0|              |0o  \n";
    cout << "         o0|              |0o  \n";
    cout << "         o0|              |0o  \n";
    cout << "         o0|              |0o  \n";
    cout << "         o0|              |0o  \n";
    cout << "         0o|              |o0  \n";
    cout << "         o0|=====+   +====|0o  \n";
    cout << "         0o0o0o0 |   |o0o0o0o  \n";
    cout << "         0o0o0o0 |   |o0o0o0o  \n";
    cout << "         o0|=====+   +====|0o  \n";
    cout << "         0o|              |o0  \n";
    cout << "         o0|              |0o  \n";
    cout << "         o0|              |o0  \n";
    cout << "         0o|              |0o  \n";
    cout << "         o0|    Putin's   |o0  \n";
    cout << "         0o|Masturbatorium|o0  \n";
    cout << "         o0|              |0o  \n";
    cout << "         0o|              |o0  \n";
    cout << "         o0|=====+   +====|0o  \n";
    cout << "         0o0o0o0o|   |o0o0o0o  \n";
    cout << "         0o0o0o0o|   |o0o0o0o   \n";
    cout << "         o0|-----|   |----|0o  \n";
    cout << "         0o|              |o0  \n";
    cout << "|======| o0|              |0o |========| \n";
    cout << "|       ---                ---         |\n";
    cout << "|storage                        Fuhrers|\n";
    cout << "|       ___   Main Hall    ___   Thing |\n";
    cout << "|______| 0o|              |o0 |________|\n";
    cout << "         o0|              |0o \n";
    cout << "         0o|              |o0 \n";
    cout << "         o0|----|   |-----|0o \n";
    cout << "         0o0o0o0|   |o0o0o0   \n";
    cout << "           00000|   |00000    \n";
    cout << "           0|---|   |---|0    \n";
    cout << "           0|           |0    \n";
    cout << "           0|  Entrance |0    \n";
    cout << "           0|           |0    \n";
    cout << "           0|___________|0    \n";
    cout << "           000000000000000    \n";
    cout << "                   S          \n";
}
