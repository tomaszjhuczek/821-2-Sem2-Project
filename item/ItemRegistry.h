#ifndef ITEMREGISTRY_H
#define ITEMREGISTRY_H

#include "Item.h"
#include <iostream> 
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
};
 

#endif