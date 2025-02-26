//
// Created by tomasz on 13/02/25.
//

#include "AbstractCrop.h"




AbstractCrop::AbstractCrop() : age(0), yield(0), immunity(0), growth(0) {

}

AbstractCrop::AbstractCrop(unsigned short yield, unsigned short immunity, unsigned short growth)
: age(0), yield(yield), immunity(immunity), growth(growth) { //Why are initializer lists superior again?

}

AbstractCrop::~AbstractCrop() {

}

string AbstractCrop::getName() {
    return this->name;
}

void AbstractCrop::setName(const string &name) {
    this->name = name;
}

unsigned short AbstractCrop::getYield() {
    return this->yield;
}

unsigned short AbstractCrop::getImmunity() {
    return this->immunity;
}

unsigned short AbstractCrop::getGrowth() {
    return this->growth;
}

void AbstractCrop::growByOneStage() {
    this->age++;
}

bool AbstractCrop::isMature() {
    return this->mature;
}

void AbstractCrop::growByMultipleStages(const unsigned short amount) {
    this->age+=amount;
}
