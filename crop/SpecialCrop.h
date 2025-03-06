//
// Created by tomasz on 02.03.25.
//

#ifndef SPECIALCROP_H
#define SPECIALCROP_H
#include "ability.h"
#include "AbstractCrop.h"


class SpecialCrop : public AbstractCrop {

private:
    const Ability::Ability ability;
    int aoeRadius;

public:

    SpecialCrop();
    SpecialCrop(Ability::Ability ability);
    SpecialCrop(Ability::Ability ability, int aoeRadius);
    virtual ~SpecialCrop();
    
    void setAoeRadius(int aoeRadius);

    Ability::Ability getAbility() const;
    int getAoeRadius() const;
    void showDetails();
};



#endif //SPECIALCROP_H