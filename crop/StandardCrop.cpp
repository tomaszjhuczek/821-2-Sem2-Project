//
// Created by tomasz on 20/02/25.
//

#include "StandardCrop.h"

#include "SpecialCrop.h"

int calculateMaxAge(Species::Species species) {
    //TODO: Implement algorithm for calculating age

    return 10;
    // int maxPossibleAge = speciesMaxAge(species);

}



StandardCrop::StandardCrop()
: AbstractCrop(calculateMaxAge(Species::DEFAULT_SPECIES)), species(Species::DEFAULT_SPECIES), yield(1), immunity(1), growth(1) {//Default, do not use outside of testing
    
}

StandardCrop::~StandardCrop() {
    cout << "Object " << this << " Destroyed" << endl; 
};

StandardCrop::StandardCrop(const StandardCrop* original)
: AbstractCrop(original->MAX_AGE), species(original->species), yield(original->yield), immunity(original->immunity), growth(original->growth) {
    //Copy Standard Crop during init
    for (string effect : original->effects) {
        this->effects.emplace_back(effect.c_str());
    }
}

StandardCrop::StandardCrop(const Species::Species species)
: AbstractCrop(calculateMaxAge(species)), species(species), yield(1), immunity(1), growth(1) {//Set the species basic crop
    
}


void StandardCrop::copy(const StandardCrop* original) {
    //Copy StandardCrop later down the line
    this->species = original->species;
    this->yield = original->yield;
    this->immunity = original->immunity;
    this->growth = original->growth;
    
    for (const string& effect : original->effects) {
        this->effects.push_back(effect);   
    }
}

StandardCrop::StandardCrop(StandardCrop *parent1, StandardCrop *parent2)
: species(parent1->getSpecies()) {//Crossbreed two crops

    //TODO: Crossbreeding Algorithm, following is temporary

    //Compact if else exist in C++?
    //TLDR: (if statement) ? (set this if true) : (set this if false);
    this->growth = (parent1->getGrowth() + parent2->getGrowth() < 10) ?
        (parent1->getGrowth() + parent2->getGrowth()) : 10;
    
    this->immunity = (parent1->getImmunity() + parent2->getImmunity() < 10) ?
        (parent1->getImmunity() + parent2->getImmunity()) : 10;
    
    this->yield = (parent1->getYield() + parent2->getImmunity() < 10) ?
        (parent1->getYield() + parent2->getImmunity()) : 10;

    
}

std::list<string> StandardCrop::getEffects() const {
    return effects;
}

void StandardCrop::addEffect(string effect) {
    this->effects.push_back(effect);
}

void StandardCrop::removeEffect(string effect) {
    this->effects.remove(effect);
}

StandardCrop::StandardCrop(const Species::Species species, const unsigned short yield, const unsigned short immunity, const unsigned short growth)
: species(species), yield(yield), immunity(immunity), growth(growth){ //Custom crop, should be only used for testing
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

Species::Species StandardCrop::getSpecies() const {
    return this->species;
}

string StandardCrop::getSpeciesAsString() const {
    return speciesToString(this->species);
}

void StandardCrop::showDetails() {//DEBUG: Print details to console
    using std::cout, std::endl;
    cout << "Info for Crop: " << this << endl
        << "Species: " << this->getSpeciesAsString() << endl
        << "Growth" << this->getGrowth() << endl
        << "Yield" << this->getYield() << endl
        << "Immunity" << this->getImmunity() << endl
        << "Age" << this->getAge() << endl << endl;
}

