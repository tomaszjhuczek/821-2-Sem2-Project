//
// Created by tomasz on 20/02/25.
//

#include "StandardCrop.h"

int calculateMaxAge(Species species) {
    //TODO: Implement algorithm for calculating age

    return 10;
    // int maxPossibleAge = speciesMaxAge(species);

}


StandardCrop::StandardCrop() : AbstractCrop(calculateMaxAge(DEFAULT_SPECIES)), SPECIES(DEFAULT_SPECIES), yield(1), immunity(1), growth(1) {//Default, do not use outside of testing
    
}

StandardCrop::StandardCrop(const Species species) : AbstractCrop(calculateMaxAge(species)), SPECIES(species), yield(1), immunity(1), growth(1) {//Set the species basic crop
    
}

StandardCrop::StandardCrop(StandardCrop *parent1, StandardCrop *parent2) : SPECIES(parent1->getSpecies()) {//Crossbreed two crops

    //TODO: Crossbreeding Algorithm, following is temporary

    //Compact if else exist in C++?
    //TLDR: (if statement) ? (do this if true) : (do this if false);
    this->growth = (parent1->getGrowth() + parent2->getGrowth() < 10) ?
        (parent1->getGrowth() + parent2->getGrowth()) : 10;
    
    this->immunity = (parent1->getImmunity() + parent2->getImmunity() < 10) ?
        (parent1->getImmunity() + parent2->getImmunity()) : 10;
    
    this->yield = (parent1->getYield() + parent2->getImmunity() < 10) ?
        (parent1->getYield() + parent2->getImmunity()) : 10;

    
}

StandardCrop::StandardCrop(const Species species, const unsigned short yield, const unsigned short immunity, const unsigned short growth)
: SPECIES(species), yield(yield), immunity(immunity), growth(growth){ //Custom crop, should be only used for testing
}

//Getters and setters should be self-explanatory
unsigned short StandardCrop::getYield() const {
    return this->yield;
}

unsigned short StandardCrop::getImmunity() const {
    return this->immunity;
}

unsigned short StandardCrop::getGrowth() const {
    return this->growth;
}

Species StandardCrop::getSpecies() const {
    return this->SPECIES;
}

string StandardCrop::getSpeciesAsString() const {
    return speciesToString(this->SPECIES);
}

void StandardCrop::showDetails() {//DEBUG: Print details to console
    using std::cout, std::endl;
    cout << "Info for Crop: " << this << endl
        << "Growth" << this->getGrowth() << endl
        << "Yield" << this->getYield() << endl
        << "Immunity" << this->getImmunity() << endl
        << "Age" << this->getAge() << endl << endl;
}
