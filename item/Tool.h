#ifndef TOOL_H
#define TOOL_H

#include "Item.h"

class Tool : public Item{
public:
    Tool();
    ~Tool();

    int getXReach();
    int getYReach();
    float getYieldEfficiency();
    bool getTill();
    bool getHarvest();

private:
    int xReach;
    int yReach;                 
    float yieldEfficiency;      
    
    bool canTill; 
    bool canHarvest;            // Can it till, or can it harvest? 

    friend bool operator==(const Tool &inst1, const Tool &inst2);
    friend ostream& operator<<(ostream &ostr, const Tool &inst1);
};

#endif