//
// Created by tomasz on 20/02/25.
//

#ifndef STANDARDCROP_H
#define STANDARDCROP_H
#include "AbstractCrop.h"
#include "species.h"


class StandardCrop : public AbstractCrop {
protected:
    const Species SPECIES;
    const int MAX_AGE;
    
public:
    StandardCrop();
    StandardCrop(Species species);
    StandardCrop(Species species, unsigned short yield, unsigned short immunity, unsigned short growth);

    string getSpecies() const;
};

#endif //STANDARDCROP_H
