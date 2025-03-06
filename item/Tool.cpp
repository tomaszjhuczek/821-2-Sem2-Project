#include "Tool.h"

Tool::Tool() 
{
    
}

Tool::~Tool()
{
    
}

int Tool::getXReach(){
    return xReach;
}

int Tool::getYReach(){
    return yReach;
}

float Tool::getYieldEfficiency(){
    return yieldEfficiency;
}

bool Tool::getTill(){
    return canTill;
}

bool Tool::getHarvest(){
    return canHarvest;
}

bool operator==(const Tool &inst1, const Tool &inst2){
    const Tool* ptr1 = &inst1;
    const Tool* ptr2 = &inst2;

    return *ptr1 == *ptr2; 

     // if(inst1.xReach == inst2.xReach && inst1.yReach == inst2.yReach && )
    
};

// need to update this definition later so it is similar to the Chemical class

ostream& operator<<(ostream &ostr, const Tool &inst1){
    ostr << "\nName: " << inst1.name;
    ostr << "\nDurability: " << inst1.maxDurability << " UP";   
    ostr << "\nValue: $" << inst1.monentaryValue; 
    return ostr;
};