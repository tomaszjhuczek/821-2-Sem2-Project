#ifndef ITEMREGISTRY_H
#define ITEMREGISTRY_H

#include <iostream> 
#include "Item.h"
#include <vector>

using namespace std; 
using std::vector; 

class ItemRegistry
{
public:
    ItemRegistry();
    ~ItemRegistry();

    Item getItem(int);          // Will take the ID of the Item object 
    void registerItem(Item);    

private:
    vector<Item> ItemVector; 
    vector<Item>::iterator registryParse; 
};

#endif