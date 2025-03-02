//
// Created by tomasz on 02.03.25.
//

#ifndef SPECIALCROP_H
#define SPECIALCROP_H
#include "ability.h"
#include "AbstractCrop.h"


class SpecialCrop : public AbstractCrop {

private:
    const Ability ability;
    int aoeRadius;

public:

    SpecialCrop();
    SpecialCrop(Ability ability);
    SpecialCrop(Ability ability, int aoeRadius);
    virtual ~SpecialCrop();
    
    void setAoeRadius(int aoeRadius);

    Ability getAbility() const;
    int getAoeRadius() const;
};



#endif //SPECIALCROP_H
