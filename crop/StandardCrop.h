//
// Created by tomasz on 20/02/25.
//virtual void showDetails() = 0;

#ifndef STANDARDCROP_H
#define STANDARDCROP_H
#include <list>
#include <vector>

#include "AbstractCrop.h"
#include "species.h"
#include "../item/Chemical.h"

// public class StandardCrop extends AbstractCrop //would be nicer
class StandardCrop : public AbstractCrop {
private:
    const Species::Species SPECIES;
    unsigned short yield;
    unsigned short immunity;
    unsigned short growth;
    std::list<string> effects;

    
public:
    
    StandardCrop();

    StandardCrop(const StandardCrop *original);

    explicit StandardCrop(Species::Species species);
    StandardCrop(Species::Species species, unsigned short yield, unsigned short immunity, unsigned short growth);
    StandardCrop(StandardCrop *parent1, StandardCrop *parent2);

    std::list<string> getEffects() const;

    void addEffect(string effect);

    void removeEffect(string effect);

    void showDetails() override;


    unsigned short getYield() const;
    unsigned short getImmunity() const;
    unsigned short getGrowth() const;

    Species::Species getSpecies() const;
    string getSpeciesAsString() const;
};

#endif //STANDARDCROP_H
