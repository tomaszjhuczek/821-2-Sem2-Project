//
// Created by tomasz on 23.02.25.
//

#include "Field.h"

#include <valarray>

#include "crop/StandardCrop.h"

Field::Field() {
    
}

bool Field::plantStandardCrop(int x, int y) {
    if (field[x][y] == nullptr) { //Check if slot is occupied
        this->field[x][y] = new StandardCrop();
        return true; //Success
    } else {
        return false; //Fail
    }
}

bool Field::plantStandardCrop(int x, int y, Species specimen){
    
}

bool Field::crossBreed(int x, int y) {
    // Combine two crops at random and try to breed
}

bool Field::tryToKill(int x, int y) { // Get a crop and then calculate the chance for it to die
    if (field[x][y] == nullptr) {
        return false; //Fail: No Crop Located
    }
    StandardCrop *crop = field[x][y];
    int immunity = crop->getImmunity(); //Get immunity of the crop

    //Calculate if the crop dies
    int chance = floor(((0.511*std::pow(immunity, 2)) - (13.716 * immunity) + (96.250)));
    srand((unsigned)time(0));
    int roll = (rand()%100)+1l;

    if (chance < roll) {
        //Kill crop
        delete field[x][y];
        field[x][y] = nullptr;
        return true;
    }
    return false; //Fail otherwise
}

void Field::tick() {
    // Run each slot in the field
}

