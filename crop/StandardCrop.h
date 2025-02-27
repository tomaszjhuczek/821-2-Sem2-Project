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
    unsigned short yield;
    unsigned short immunity;
    unsigned short growth;

    
public:
    StandardCrop();
    explicit StandardCrop(Species species);
    StandardCrop(Species species, unsigned short yield, unsigned short immunity, unsigned short growth);
    StandardCrop(StandardCrop *parent1, StandardCrop *parent2);


    unsigned short getYield();
    unsigned short getImmunity();
    unsigned short getGrowth();

    string getSpecies() const;
};

#endif //STANDARDCROP_H
