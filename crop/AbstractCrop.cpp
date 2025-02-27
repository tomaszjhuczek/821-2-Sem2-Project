//
// Created by tomasz on 13/02/25.
//

#include "AbstractCrop.h"




AbstractCrop::AbstractCrop() : age(0), maxAge(10), mature(false) {
}

AbstractCrop::AbstractCrop(int maxAge): age(0), maxAge(maxAge), mature(false) {
}

AbstractCrop::~AbstractCrop() = default;

string AbstractCrop::getName() {
    return this->name;
}

void AbstractCrop::setName(const string &name) {
    this->name = name;
}


void AbstractCrop::grow() {
    this->age++;
}

void AbstractCrop::grow(const unsigned short amount) {
    this->age+=amount;
}

bool AbstractCrop::checkIfMature() {
    if (this->age >= this->maxAge) {
        this->mature = true;
    }

    return this->mature;

}