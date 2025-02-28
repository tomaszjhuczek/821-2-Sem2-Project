#ifndef CHEMICAL_H
#define CHEMICAL_H

#include "Item.h"

class Chemical : public Item {
public:
    Chemical();
    ~Chemical();

private:
    friend bool operator==(const Chemical &inst1, const Chemical &inst2);
};

#endif