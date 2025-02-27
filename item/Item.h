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
             
    unsigned int durability;            
    unsigned int maxDurability;      
    float monentaryValue; 
    
    static int itemsCount;
 //   static vector<Item*>createdItems;

};

#endif

