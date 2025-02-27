//
// Created by tomasz on 23.02.25.
//

#ifndef FIELD_H
#define FIELD_H
#include "crop/AbstractCrop.h"
#include "crop/StandardCrop.h"


class Field {

protected:
    StandardCrop* field[7][7];

public:
    Field();

    bool plantStandardCrop(int x, int y);
    bool plantStandardCrop(int x, int y, Species specimen);
    bool crossBreed(int x, int y);
    void tick();
    bool tryToKill(int x, int y);
};



#endif //FIELD_H
