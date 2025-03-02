#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <iomanip>
using namespace std; 

class Item
{
public:
    Item();
    ~Item();

    string getItemName(){return name;}
    void setItemName(string newName);

    unsigned int getDurability(){return durability;}
    void setDurability(unsigned int newDurability);

    unsigned int getMaxDurability(){return maxDurability;}
    void setMaxDurability(unsigned int newMaxDurability);

    float getMonetaryValue(){return monentaryValue;}
    void setMonetaryValue(float newMonetaryValue);

protected:
    string name; 
                
    unsigned int durability;            
    unsigned int maxDurability;      
    float monentaryValue; 

    static int itemsCount;
private:
   
};

#endif

