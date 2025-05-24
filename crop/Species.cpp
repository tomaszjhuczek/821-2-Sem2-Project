//
// Created by tomasz on 16.05.25.
//

#include "Species.h"


Species::Species() {
}

Species::Species(const string &name, unsigned short rarity, unsigned short max_age): name(name),
                                                                                     rarity(rarity),
                                                                                     maxAge(max_age) {
}

Species::~Species() {
}

string Species::getName() const {
    return name;
}

unsigned short Species::getRarity() const {
    return rarity;
}

unsigned short Species::getMaxAge() const {
    return maxAge;
}

void Species::setName(const string &name) {
    this->name = name;
}

void Species::setRarity(unsigned short rarity) {
    this->rarity = rarity;
}

void Species::setMaxAge(unsigned short max_age) {
    maxAge = max_age;
}


