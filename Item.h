#ifndef ITEM_H
#define ITEM_H

#include <iostream>
using namespace std; 

class Item
{
public:
    Item();
    ~Item();

private:
    string name; 
    unsigned int ID; 
    unsigned int durability; 
    unsigned int maxDurability; 

};

#endif