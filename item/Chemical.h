#ifndef CHEMICAL_H
#define CHEMICAL_H

#include "Item.h"

class Chemical : public Item {
public:
    Chemical();
    ~Chemical();

    void useChemical();

    float getYieldMultiplier(){return yieldMultiplier;}
    void setYieldMultiplier(float newYieldMultiplier);

private:

    float growthMultiplier; 
    float immunityMultiplier;
    float yieldMultiplier;
    int turnLength;  
    


    bool poison;
    
    // If true, the chemical in question has malicious properties on crops (aka negative Multipliers).
    // If false, the chemical has benefical properties (positive Multipliers).
    // Grow is calculated by multiplying the 

    friend bool operator==(const Chemical &inst1, const Chemical &inst2);
    friend ostream& operator<< (ostream &ostr, const Chemical &inst1);

    // Overloaded operators to allow comparison and insertion of Chemical objects.
    // To be replicated for Tool objects.

};

#endif