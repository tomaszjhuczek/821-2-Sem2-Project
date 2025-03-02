//
// Created by tomasz on 20/02/25.
//

#ifndef STANDARDCROP_H
#define STANDARDCROP_H
#include "AbstractCrop.h"
#include "species.h"

// public class StandardCrop extends AbstractCrop //would be nicer
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

    void showDetails() override;


    unsigned short getYield() const;
    unsigned short getImmunity() const;
    unsigned short getGrowth() const;

    Species getSpecies() const;
    string getSpeciesAsString() const;
};

#endif //STANDARDCROP_H
