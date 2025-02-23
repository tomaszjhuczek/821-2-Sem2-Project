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
          
    void registerItem(Item); 
    void deregisterItem(unsigned int);    
    unsigned int getitemID(Item);
    int getregistryCount();

    static int registryCount;

private:
    vector<Item> ItemVector; 
    vector<Item>::iterator registryParse; 
};
 

#endif