//
// Created by tomasz on 13/02/25.
//

#include "AbstractCrop.h"

AbstractCrop::AbstractCrop() : age(0), yield(0), immunity(0), growth(0) {

}

AbstractCrop::~AbstractCrop() {
}

string AbstractCrop::getName() {
    return this->name;
}

void AbstractCrop::setName(string name) {
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

void AbstractCrop::growByMultipleStages(const unsigned short amount) {
    this->age+=amount;
}
