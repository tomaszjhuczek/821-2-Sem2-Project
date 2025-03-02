#include "Item.h"

int Item::itemsCount = 0; 

Item::Item(): durability(1), maxDurability(1), monentaryValue(1), name("N/A")
{
    itemsCount++;
}

Item::~Item()
{
    itemsCount--; 
}

void Item::setDurability(unsigned int newDurability){
    if(newDurability < 0 || newDurability > maxDurability){
        cout << "Error. Invalid input." << endl;
    }
    else if(newDurability == 0){
        cout << "Item destroyed!" << endl; 
        durability = newDurability;
    }
    else{
        durability = newDurability;
    }
}

void Item::setMaxDurability(unsigned int newMaxDurability){
    if(newMaxDurability <= 0){
        cout << "\nError. Invalid input.";
    }
    else maxDurability = newMaxDurability;
}

void Item::setMonetaryValue(float newMonetaryValue){
        
    if(newMonetaryValue < 0){
        cout << "Error. Invalid input." << endl; 
    }
    else monentaryValue = newMonetaryValue;
}

void Item::setItemName(string newName){
    name = newName; 
}