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

    friend istream& operator>>(istream &istr, Item &inst1);
    // Lets the player set the name and durability of an item.

    friend bool operator<(const Item &inst1, const Item &inst2);
    friend bool operator>(const Item &inst1, const Item &inst2); 
    // The above functions are utilized to compare the monetary value of the items.
    // At a later stage, within the shops, this will be utilized to sort them in ascending order.

};

#endif

