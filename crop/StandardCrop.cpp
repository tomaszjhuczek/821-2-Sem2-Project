//
// Created by tomasz on 20/02/25.
//

#include <algorithm>
#include "StandardCrop.h"

#include "SpecialCrop.h"
#include "../exception/ItemNotFoundException.h"

StandardCrop::StandardCrop()
: AbstractCrop(), yield(1), immunity(1), growth(1) {//Default, do not use outside of testing
    species = new Species();
}

StandardCrop::StandardCrop(const StandardCrop* original)
: AbstractCrop(original->MAX_AGE), yield(original->yield), immunity(original->immunity), growth(original->growth) {
    // Copy Standard Crop during init
    species = new Species();
    *this->species = *original->species;
    
     for (string effect : original->effects) {
         this->effects.emplace_back(effect.c_str());
     }
}

StandardCrop::StandardCrop(const Species species)
: yield(1), immunity(1), growth(1) {
    this->species = new Species();
    *this->species = species;
    
}

StandardCrop::~StandardCrop() {
    cout << "Object " << this << " Destroyed" << endl;
    if (species != nullptr) {
        cout << "deleted " << species;
        delete species;
        species = nullptr;
    }
};


void StandardCrop::copy(const StandardCrop* original) {
    //Copy StandardCrop later down the line
    *this->species = *original->species;
    this->yield = original->yield;
    this->immunity = original->immunity;
    this->growth = original->growth;
    
    for (const string& effect : original->effects) {
        this->effects.push_back(effect);   
    }
}

StandardCrop & StandardCrop::operator=(const StandardCrop &other) {
    if (this == &other)
        return *this;
    delete species;
    species = other.species;
    yield = other.yield;
    immunity = other.immunity;
    growth = other.growth;
    effects = other.effects;

    if (other.species) {
        species = new Species();
        *species = *other.species;
    } else {
        species = nullptr;
    }

    for (const string& effect : other.effects) {
        this->effects.push_back(effect);   
    }
    return *this;
}

StandardCrop::StandardCrop(StandardCrop *parent1, StandardCrop *parent2) {//Crossbreed two crops
    species = new Species();
    *species = parent1->getSpecies();
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
    if (std::find(effects.begin(), effects.end(), effect) != effects.end()) {
        throw std::invalid_argument("Effect Already Exists");
    }
    this->effects.push_back(effect);
}

void StandardCrop::removeEffect(string effect) {
    if (std::find(effects.begin(), effects.end(), effect) == effects.end()) {
        throw ItemNotFoundException();
    }
    this->effects.remove(effect);
}

StandardCrop::StandardCrop(const Species species, const unsigned short yield, const unsigned short immunity, const unsigned short growth)
: yield(yield), immunity(immunity), growth(growth) { //Custom crop, should be only used for testing
    this->species = new Species();
    *this->species = species;
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

string StandardCrop::getSpeciesAsString() const {
    return this->species->getName();
}

Species StandardCrop::getSpecies() {
    return *species;
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