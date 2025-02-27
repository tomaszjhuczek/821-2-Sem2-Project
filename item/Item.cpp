#include "Item.h"

int Item::itemsCount = 0; 

Item::Item()
{
    itemsCount++;
}

Item::~Item()
{
    itemsCount--; 
}

