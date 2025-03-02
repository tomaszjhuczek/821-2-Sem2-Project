#include "Chemical.h"

Chemical::Chemical(): growthMultiplier(1), immunityMultiplier(1), yieldMultiplier(1), poison(0)
{
    
}

Chemical::~Chemical()
{

}

void Chemical::useChemical(){
    int doesNothing = 0; 
    if(poison = 1){
        doesNothing = 2;
    }
    else doesNothing = 1; 
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
    ostr << "\nValue: $" << inst1.monentaryValue;
    return ostr;
}

