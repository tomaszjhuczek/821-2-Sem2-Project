#include "Item.h"

Item::Item()
{
    
}

Item::~Item()
{
    
}

unsigned int Item::fetchitemID(){   // Bypassing encapsulation to pass the ItemID up to the 
    return itemID;                  // ItemRegistry class. 
}; 