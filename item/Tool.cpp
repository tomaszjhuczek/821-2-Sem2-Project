#include "Tool.h"

Tool::Tool()
{
    
}

Tool::~Tool()
{
    
}

bool operator==(const Tool &inst1, const Tool &inst2){
    const Tool* ptr1 = &inst1;
    const Tool* ptr2 = &inst2;

    return *ptr1 == *ptr2; 
};


ostream& operator<<(ostream &ostr, const Tool &inst1){
    ostr << "\nName: " << inst1.name;
    ostr << "\nDurability: " << inst1.maxDurability << " UP";   
    ostr << "\nValue: $" << inst1.monentaryValue; 
    return ostr;
};