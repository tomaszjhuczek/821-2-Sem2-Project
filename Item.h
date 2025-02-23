#ifndef ITEM_H
#define ITEM_H

#include <iostream>
using namespace std; 

class Item
{
public:
    Item();
    ~Item();

    unsigned int fetchitemID();

private:
    string name; 
    enum ItemType {
        CHEMICAL = 1, 
        TOOL, 
    }; 
    unsigned int itemID;                // type range: 0 - 4294967295 ... will need to think about randomizing 
    unsigned int durability;            // assignment. 
    unsigned int maxDurability; 
    float monentaryValue; 
    // static int createdItems;
};

#endif

