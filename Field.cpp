//
// Created by tomasz on 23.02.25.
//

#include "Field.h"

#include <valarray>

#include "crop/StandardCrop.h"

#include "item/Tool.h"



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
    if (field[x][y] == nullptr) { //Check if slot is occupied
        this->field[x][y] = new StandardCrop(specimen);
        return true; //Success
    } else {
        return false; //Fail
    }
}

bool Field::crossBreed(int x, int y) {
    // Combine two crops at random and try to breed
    //TODO
    return false;
}

bool Field::tryToKill(int x, int y) { // Get a crop and then calculate the chance for it to die
    if (field[x][y] == nullptr) {
        return false; //Fail: No Crop Located
    }
    StandardCrop *crop = dynamic_cast<StandardCrop *>(field[x][y]);
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

bool Field::harvest(int x, int y) {//Harvest crop

    if (field[x][y] == nullptr) {
        return false;
    }
    delete field[x][y];
    field[x][y] = nullptr;
    return true;
}

void Field::getInfo(int x, int y) {//Return info for given coordinates
    field[x][y]->showDetails();
}

void Field::tick() const {//Tick entire grid
    // Run each slot in the field
    //TODO: Make this nicer
    for (int x = 0; x < MAX_FIELD_SIZE; ++x) {
        for (int y = 0; y < MAX_FIELD_SIZE; ++y) {
            if (field[x][y] != nullptr) {
                field[x][y]->grow();
            }
        }
    }
}

bool Field::till(Tool tiller, int x, int y){
    if(tiller.getTill() == true){
        if(field[x][y] == nullptr){
            int xBoost = tiller.getXReach();
            int yBoost = tiller.getYReach();
            for(int i = 0; i < xBoost; i++){
                for(int z = 0; z < yBoost; z++){
                    field[x + i][y + z]->setTill(true);
                }
            }
            return true;    // Till successful  
        }
        else if(field[x][y]->checkIfTilled() == true){
            return false;   // Till fail. This cell is tilled.
        }
    }
    else return false;  // Till fail. The tool cannot till.
}


