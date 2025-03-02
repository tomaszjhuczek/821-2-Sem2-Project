//
// Created by tomasz on 13/02/25.
//

#include "AbstractCrop.h"

int AbstractCrop::amountOfCrops = 0;


int AbstractCrop::getTotalCrops() {
    return AbstractCrop::amountOfCrops;
}

AbstractCrop::AbstractCrop() : age(0), MAX_AGE(10), mature(false) {
    amountOfCrops++;
}

AbstractCrop::AbstractCrop(int maxAge): age(0), MAX_AGE(maxAge), mature(false) {
    amountOfCrops--;
}

AbstractCrop::~AbstractCrop() = default;

string AbstractCrop::getName() {
    return this->name;
}

void AbstractCrop::setName(const string &name) {
    this->name = name;
}

int AbstractCrop::getAge() {
    return this->age;
}

void AbstractCrop::grow() {
    this->age++;
}

void AbstractCrop::grow(const unsigned short amount) {
    if (this->age <= MAX_AGE) {
        this->age+=amount;
    }
}

bool AbstractCrop::checkIfMature() {
    if (this->age >= this->MAX_AGE) {
        this->mature = true;
    }

    return this->mature;

}