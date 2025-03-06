//
// Created by tomasz on 13/02/25.
//

#include "AbstractCrop.h"

int AbstractCrop::amountOfCrops = 0;

int AbstractCrop::getTotalCrops() {
    return AbstractCrop::amountOfCrops;
}

AbstractCrop::AbstractCrop() : age(0), MAX_AGE(10), mature(false), isTilled(0) {//Default crop type
    amountOfCrops++;
}

AbstractCrop::AbstractCrop(int maxAge): age(0), MAX_AGE(maxAge), mature(false), isTilled(0) {//Destructor
    amountOfCrops--;
}

AbstractCrop::~AbstractCrop() = default;

string AbstractCrop::getName() {//Return name of crop
    return this->name;
}

void AbstractCrop::setName(const string &name) {//Set name of crop
    this->name = name;
}

int AbstractCrop::getAge() {//Get age of crop
    return this->age;
}

void AbstractCrop::grow() {//Grow by one stage if below MAX_AGE
    if (this->age <= MAX_AGE) {
        this->age++;
    }
}

void AbstractCrop::grow(const unsigned short amount) {//Grow by n stages if below MAX_AGE
    //TODO: Fix bug
    if (this->age <= MAX_AGE) {
        this->age+=amount;
    }
}

bool AbstractCrop::checkIfMature() {//check if the given crop reached its max age
    if (this->age >= this->MAX_AGE) {
        this->mature = true;
    }

    return this->mature;

}

bool AbstractCrop::checkIfTilled(){
    if(this->isTilled == true){
        return true;
    }
    else return false; 
}

void AbstractCrop::setTill(bool tillState){
    if(tillState == true){
    this->isTilled = true;
    }
    else this->isTilled = false;
}

