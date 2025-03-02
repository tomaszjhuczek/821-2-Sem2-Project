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

// Placeholder code.

void Chemical::setYieldMultiplier(float newYieldMultiplier){
    if(newYieldMultiplier < 0 ){
        cout << "\nError. Invalid input.";
    }
    else yieldMultiplier = newYieldMultiplier;
}

bool operator==(const Chemical &inst1, const Chemical &inst2){
    const Chemical * ptr1;
    const Chemical * ptr2;
    
    ptr1 = &inst1;
    ptr2 = &inst2; 

    return *ptr1 == *ptr2;
}

// Compares the contents of the addresses of two Chemical objects 
// to test if they are equal.

ostream& operator<< (ostream &ostr, const Chemical &inst1){
    ostr << "\nName: " << inst1.name;
    ostr << "\nDurability: " << inst1.maxDurability << " UP";   
    ostr << "\nValue: $" << inst1.monentaryValue; 
    ostr << "\nMultipliers:\n" << "\tYield: x" << setprecision(3) << inst1.yieldMultiplier << "\n";
    return ostr;
}

// UP stands for "Use Points", this is the alternative term to "Hit Points" (HP) which describes
// the durability of a tool.

