#ifndef CHEMICAL_H
#define CHEMICAL_H

#include "Item.h"

class Chemical : public Item {
public:
    Chemical();
    ~Chemical();

    void useChemical();

private:

    float growthMultiplier; 
    float immunityMultiplier;
    float yieldMultiplier;
    
    bool poison;             

    friend bool operator==(const Chemical &inst1, const Chemical &inst2);
    friend ostream& operator<< (ostream &ostr, const Chemical &inst1);
};

#endif