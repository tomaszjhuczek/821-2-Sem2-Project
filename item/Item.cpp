#include "Item.h"

int Item::createdItems = 0; 

Item::Item()
{
    createdItems++;
}

Item::~Item()
{
    createdItems--; 
}

/* unsigned int Item::fetchitemID(){   
    return itemID;                  
}; */