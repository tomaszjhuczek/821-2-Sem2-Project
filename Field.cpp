//
// Created by tomasz on 23.02.25.
//

#include "Field.h"

#include <valarray>

#include "crop/SpecialCrop.h"
#include "crop/StandardCrop.h"

#include "item/Tool.h"
#include "player/Player.h"

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
    }
    return false; //Fail
}

bool Field::plantSpecialCrop(int x, int y, Ability::Ability ability) {
    if (field[x][y] == nullptr) {
        this->field[x][y] = new SpecialCrop(ability);
        return true;
    }
    return false;
}

bool Field::plantSpecialCrop(int x, int y, Ability::Ability ability, int aoeRadius) {
    if (field[x][y] == nullptr) {
        this->field[x][y] = new SpecialCrop(ability, aoeRadius);
        return true;
    }
    return false;
}


bool Field::crossBreed(int x, int y) {
    // Combine two crops at random and try to breed
    if (field[x][y] == nullptr) {
        return false;
    }
    int randomIndex = rand() % 6 + 1; // Generate a random number between 1 and 6
    int x1,y1,x2,y2;
    switch (randomIndex) {
        case 1:
            x1 = x - 1; y1 = y;
            x2 = x + 1; y2 = y;
        break;

        case 2:
            x1 = x; y1 = y - 1;
            x2 = x; y2 = y + 1;
        break;

        case 3:
            x1 = x - 1; y1 = y;
            x2 = x; y2 = y + 1;
        break;
        
        case 4:
            x1 = x - 1; y1 = y;
            x2 = x; y2 = y - 1;
        break;
        
        case 5:
            x1 = x; y1 = y -1;
            x2 = x + 1; y2 = y;
        break;
        
        case 6:
            x1 = x; y1 = y + 1;
            x2 = x + 1; y2 = y;
        break;
        
        default:
        return false;
    }
    
    if (dynamic_cast<StandardCrop*>(field[x1][y1]) && dynamic_cast<StandardCrop*>(field[x2][y2])) {//Double check if these two positions are of type StandardCrop
        field[x][y] = new StandardCrop(dynamic_cast<StandardCrop *>(field[x1][y1]),
                                       dynamic_cast<StandardCrop *>(field[x2][y2]));
        return true;
    }   
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

void Field::tick() const {
    // Tick each slot in the field
    for (const auto & x : field) {
        for (auto y : x) {
            if (y != nullptr) {
                y->grow();
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
            globaltilesTilled++;
            return true;    // Till successful
        }
        else if(field[x][y]->checkIfTilled() == true){
            return false;   // Till fail. This cell is tilled.
        }
    }
    return false;  // Till fail. The tool cannot till.
}


