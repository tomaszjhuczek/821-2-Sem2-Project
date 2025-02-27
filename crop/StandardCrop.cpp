//
// Created by tomasz on 20/02/25.
//

#include "StandardCrop.h"

int calculateMaxAge(Species species) {

    int maxPossibleAge = speciesMaxAge(species);
    
}

StandardCrop::StandardCrop() : AbstractCrop(), SPECIES(UNKNOWN), growth(0), yield(0), immunity(0) {
    
}

StandardCrop::StandardCrop(const Species species) : AbstractCrop(), SPECIES(species) {
}

StandardCrop::StandardCrop(StandardCrop *parent1, StandardCrop *parent2): SPECIES(/*do Algorithm here*/) {
}

StandardCrop::StandardCrop(Species species, unsigned short yield, unsigned short immunity, unsigned short growth)
: AbstractCrop(), SPECIES(species), growth(growth), yield(yield), immunity(immunity){
}

unsigned short StandardCrop::getYield() {
    return this->yield;
}

unsigned short StandardCrop::getImmunity() {
    return this->immunity;
}

unsigned short StandardCrop::getGrowth() {
    return this->growth;
}



string StandardCrop::getSpecies() const {
    return speciesToString(this->SPECIES);
}
