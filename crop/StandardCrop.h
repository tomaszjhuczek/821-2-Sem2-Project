//
// Created by tomasz on 20/02/25.
//virtual void showDetails() = 0;

#ifndef STANDARDCROP_H
#define STANDARDCROP_H
#include <list>
#include <vector>

#include "AbstractCrop.h"
#include "Species.h"
#include "../item/Chemical.h"

// public class StandardCrop extends AbstractCrop //would be nicer
class StandardCrop : public AbstractCrop {
private:
    Species *species;
    unsigned short yield;
    unsigned short immunity;
    unsigned short growth;
    std::list<string> effects;

    
public:
    
    StandardCrop();

    explicit StandardCrop(const StandardCrop *original);

    explicit StandardCrop(const Species species);

    StandardCrop & operator=(const StandardCrop &other);

    ~StandardCrop() override;

    void copy(const StandardCrop *original);

    StandardCrop(const Species species, unsigned short yield, unsigned short immunity, unsigned short growth);

    StandardCrop(StandardCrop *parent1, StandardCrop *parent2);

    std::list<string> getEffects() const;

    void addEffect(string effect);

    void removeEffect(string effect);

    void showDetails() override;

    unsigned short getYield() const;
    unsigned short getImmunity() const;
    unsigned short getGrowth() const;

    string getSpeciesAsString() const;
    Species getSpecies();
};

#endif //STANDARDCROP_H
