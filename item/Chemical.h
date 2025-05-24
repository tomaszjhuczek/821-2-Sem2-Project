#ifndef CHEMICAL_H
#define CHEMICAL_H

#include "Item.h"

class Chemical : public Item {
public:
    Chemical();
    ~Chemical();

    float getGrowthMultiplier(){return growthMultiplier;}
    void setGrowthMultiplier(float newGrowthMultiplier);
    float getImmunityMultiplier(){return immunityMultiplier;}
    void setImmunityMultiplier(float newImmunityMultiplier);
    float getYieldMultiplier(){return yieldMultiplier;}
    void setYieldMultiplier(float newYieldMultiplier);
    float getQuantity(){return quantity;}
    void setQuantity(float newQuantity){quantity = newQuantity;}

private:

    float growthMultiplier; 
    float immunityMultiplier;
    float yieldMultiplier;       
    float quantity;      
    int turnLength;             // How long a chemical is effective for ... will be based on 
    bool poison;                // how much of a chemical is used. 

    // If true, the chemical in question has malicious properties on crops (aka negative Multipliers).
    // If false, the chemical has benefical properties (positive Multipliers).

    friend bool operator==(const Chemical &inst1, const Chemical &inst2);
    friend bool operator!=(const Chemical &inst1, const Chemical &inst2);
    friend ostream& operator<<(ostream &ostr, const Chemical &inst1);

    // Overloaded operators to allow comparison and insertion of Chemical objects.
    // To be replicated for Tool objects, eventually.


    
};

#endif