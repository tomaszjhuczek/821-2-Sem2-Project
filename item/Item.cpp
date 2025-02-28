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

unsigned int Item::getDurability(){return durability;}

unsigned int Item::getMaxDurability(){return maxDurability;}

float Item::getMonetaryValue(){return monentaryValue;}

/*ostream& operator<< (ostream &ostr, const Item &itemInst) 
{
    ostr << itemInst.durability << endl << itemInst.maxDurability << itemInst.monentaryValue << endl;
    return ostr;
}*/
