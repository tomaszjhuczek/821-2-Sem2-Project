#include "Chemical.h"

Chemical::Chemical()
{
    
}

Chemical::~Chemical()
{

}

bool operator==(const Chemical &inst1, const Chemical &inst2){
    const Chemical * ptr1;
    const Chemical * ptr2;
    
    ptr1 = &inst1;
    ptr2 = &inst2; 

    return *ptr1 == *ptr2;
}

ostream& operator<< (ostream &ostr, const Chemical &inst1){
    ostr << "\nName: " << inst1.name;
    ostr << "\nDurability: [" << inst1.durability << "/" << inst1.maxDurability << "]";
    return ostr;
}

