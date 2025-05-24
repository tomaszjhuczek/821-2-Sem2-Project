//
// Created by tomasz on 23.02.25.
//

#ifndef FIELD_H
#define FIELD_H
#include "crop/ability.h"
#include "crop/StandardCrop.h"
#include "item/Tool.h"
//#include "player/Player.h"

constexpr int MAX_FIELD_SIZE = 7;

class Field {

protected:
    AbstractCrop* field[MAX_FIELD_SIZE][MAX_FIELD_SIZE];

public:
    Field();
    
    bool plantStandardCrop(int x, int y);
    bool plantStandardCrop(int x, int y, Species specimen);
    bool plantSpecialCrop(int x, int y, Ability::Ability ability);
    bool plantSpecialCrop(int x, int y, Ability::Ability ability, int aoeRadius);
    bool crossBreed(int x, int y);
    void tick() const;
    bool tryToKill(int x, int y);
    bool harvest(int x, int y);
    void getInfo(int x, int y);
    bool till(Tool tiller, int x, int y);

    //TODO: Implement methods that interact with all parameters in crops
};



#endif //FIELD_H
