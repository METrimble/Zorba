#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED

#include <string.h>

using namespace std;

struct item
{
    string name; //stores the name
    char type; //stores the type of the item
    int modifyStat; //how much the item should modify
    bool inuse; //if the item is in use or not
    string message; //the message that plays when you equip it
};

//item global definitions



/*WEAPONS*/
item stick = {
    .name = "Stick",
    .type = 'W',
    .modifyStat = 1,
    .inuse = false,
    .message = "Can't wait to see you on the new watchmojo video; top ten worst anime weapons"
};

item basicsword = {
    .name = "Basic Sword",
    .type = 'w',
    .modifyStat = 3,
    .inuse = false,
    .message = "Wow maybe you'll actually make a dent in em."
};

item knife = {
    .name = "Knife",
    .type = 'w',
    .modifyStat = 2,
    .inuse = false,
    .message = "Not very useful from far way, but good luck."
};

item genericgun = {
    .name = "Generic Gun",
    .type = 'w',
    .modifyStat = 4,
    .inuse = false,
    .message = "This is gun. Have fun. Pleb."
};

item dragonslayer = {
    .name = "Dragon Slayer",
    .type = 'w',
    .modifyStat = 7,
    .inuse = false,
    .message = "The sword has to be almost 8 feet long and the handle has a bandage wrapped around it, \nyou wonder how anyone can pick this thing up.\n With a lot of effort you are able to lift it off the ground. \nOn the bandage there is something written in scrambled letters: W arni ng  y ou  must hav e  a tragi c back  s tory to use thi s  weapon."
};

item thestaff = {
    .name = "THE Staff",
    .type = 'w',
    .modifyStat = 5,
    .inuse = false,
    .message = "Not staff as in a worker but staff as in the weapon. It's wooden except for the blade on the end which is steal."
};

item bootgun = {
    .name = "Boot Gun",
    .type = 'w',
    .modifyStat = 6,
    .inuse = false,
    .message = "The weapon is a weirdly shaped boot, you wonder if you can even put it on. \nattached to the front is what looks like the front of a gun. \nWritten mysteriously on the side with a sharpie is the words: Kick to Shoot."
};

item theswordgunknife = {
    .name = "The Sword Gun Knife",
    .type = 'w',
    .modifyStat = 100,
    .inuse = false,
    .message = "This is the most OP weapon in the game. It's a sword, a gun, and a knife all at once. Good luck with the last battle!"
};



/*CLOTHING*/
item tatteredcloth = {
    .name = "Tattered Cloth",
    .type = 'c',
    .modifyStat = 1,
    .inuse = false,
    .message = "It has a few questionable holes in it, but otherwise it will shield you from the cold. Eh, it'll work"
};

item beret = {
    .name = "Beret",
    .type = 'c',
    .modifyStat = 2,
    .inuse = false,
    .message = "It looks a bit worn, but kind of neat. Some of the string sewing it together has unraveled and is barely holding a pin to the front. \n(Are you cosplaying as Phillip?)"
};

item blackandwhitejacket = {
    .name = "Black and White Jacket",
    .type = 'c',
    .modifyStat = 2,
    .inuse = false,
    .message = "It is a thin jacket with a zipper in the front, you don't know who left this behind. \n(You can almost be as edgy as Alexi with this)"
};

item bluehairdye = {
    .name = "Blue Hair Dye",
    .type = 'c',
    .modifyStat = 1,
    .inuse = false,
    .message = "It's a tin bottle with neon blue paint across the front, on the top there is a black cap keeping it closed "
};

item jeanjacket = {
    .name = "Jean Jacket",
    .type = 'c',
    .modifyStat = 2,
    .inuse = false,
    .message = "The Jacket is a rough material, and is a sharp dark blue color. Maybe wearing it will make you look pretty cool."
};

item leatherarmor = {
    .name = "Leather Armor",
    .type = 'c',
    .modifyStat = 3,
    .inuse = false,
    .message = "The armor is made of what looks like leather, \nbut when you put it under the light you can see that it is just a fuax leather. \nUpon closer inspection it's appears to just be a t-shirt that looks leather."
};

item steelarmor = {

};

#endif