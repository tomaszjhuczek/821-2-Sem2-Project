#include "Chemical.h"

Chemical::Chemical(): growthMultiplier(1), immunityMultiplier(1), yieldMultiplier(1), poison(0)
{
    
}

Chemical::~Chemical()
{

}

void Chemical::setGrowthMultiplier(float newGrowthMultiplier){
    if(newGrowthMultiplier < 0 ){
        cout << "\nError. Invalid input.";
    }
    else growthMultiplier = newGrowthMultiplier;
}

void Chemical::setImmunityMultiplier(float newImmunityMultiplier){
    if(newImmunityMultiplier < 0 ){
        cout << "\nError. Invalid input.";
    }
    else immunityMultiplier = newImmunityMultiplier;
}

void Chemical::setYieldMultiplier(float newYieldMultiplier){
    if(newYieldMultiplier < 0 ){
        throw "Invalid input";
    }
    else yieldMultiplier = newYieldMultiplier;
}


bool operator==(const Chemical &inst1, const Chemical &inst2){
    if(inst1.yieldMultiplier == inst2.yieldMultiplier && inst1.immunityMultiplier == inst2.yieldMultiplier && inst1.growthMultiplier == inst2.growthMultiplier){
        return true;
    }
    else return false; 
}

// Compares the contents of the addresses of two Chemical objects 
// to test if they are equal.

ostream& operator<< (ostream &ostr, const Chemical &inst1){
    ostr << "\nName: " << inst1.name;
    ostr << "\nDurability: " << inst1.maxDurability << " UP";   
    ostr << "\nValue: $" << inst1.monentaryValue; 
    ostr << "\nMultipliers:\n";
    if(inst1.growthMultiplier != 1){
    ostr << "\tGrowth: x" << setprecision(3) << inst1.growthMultiplier << "\n";
    }
    if(inst1.immunityMultiplier != 1){
    ostr << "\tImmunity: x" << setprecision(3) << inst1.immunityMultiplier << "\n";
    }
    if(inst1.yieldMultiplier != 1){
    ostr << "\tYield: x" << setprecision(3) << inst1.yieldMultiplier << "\n";
    }
    return ostr;
}

// UP stands for "Use Points", this is the alternative term to "Hit Points" (HP) which describes
// the durability of a tool.

bool operator!=(const Chemical &inst1, const Chemical &inst2){
    if(inst1.yieldMultiplier == inst2.yieldMultiplier && inst1.immunityMultiplier == inst2.yieldMultiplier && inst1.growthMultiplier == inst2.growthMultiplier){
        return false;
    }
    else return true;
} 

