//
// Created by tomasz on 13/02/25.
//

#include "AbstractCrop.h"

AbstractCrop::AbstractCrop() {
    
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
    this->growth++;
}

void AbstractCrop::growByMultipleStages(const unsigned short amount) {
    this->growth+=amount;
}
