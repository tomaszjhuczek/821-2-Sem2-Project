#ifndef ITEM_H
#define ITEM_H

#include <iostream>
using namespace std; 

class Item
{
public:
    Item();
    ~Item();

    unsigned int getDurability();
    unsigned int getMaxDurability();
    float getMonetaryValue();

private:
    string name; 
             
    unsigned int durability;            
    unsigned int maxDurability;      
    float monentaryValue; 
    
    static int itemsCount;

    // friend ostream& operator<< (ostream &ostr, const Item &itemInst);
};

#endif

