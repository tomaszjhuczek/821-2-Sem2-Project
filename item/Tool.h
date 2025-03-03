#ifndef TOOL_H
#define TOOL_H

#include "Item.h"

class Tool : public Item{
public:
    Tool();
    ~Tool();

private:
//    int x, y; 
//    int aoe[x][y];                // Area of effect
    float yieldAmount;

    friend bool operator==(const Tool &inst1, const Tool &inst2);
    friend ostream& operator<<(ostream &ostr, const Tool &inst1);
};

#endif