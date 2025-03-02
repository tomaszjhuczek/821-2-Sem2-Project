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

/*ostream& operator<< (ostream &ostr, const Item &itemInst) 
{
    ostr << itemInst.durability << endl << itemInst.maxDurability << itemInst.monentaryValue << endl;
    return ostr;
}*/
