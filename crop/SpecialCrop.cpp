//
// Created by tomasz on 02.03.25.
//

#include "SpecialCrop.h"

#include "../Field.h"

SpecialCrop::SpecialCrop(): ability(Ability::DEFAULT_ABILITY), aoeRadius(MAX_FIELD_SIZE/2) {
}

SpecialCrop::SpecialCrop(Ability::Ability ability): ability(ability), aoeRadius(MAX_FIELD_SIZE/2) {
}

SpecialCrop::SpecialCrop(Ability::Ability ability, int aoeRadius): ability(ability) {
    
    this->aoeRadius = (aoeRadius > 1 && aoeRadius <= MAX_FIELD_SIZE/2) ?
        aoeRadius : MAX_FIELD_SIZE/2;

}

SpecialCrop::~SpecialCrop() {
}

void SpecialCrop::setAoeRadius(const int aoeRadius) {
    
    this->aoeRadius = (aoeRadius > 1 && aoeRadius <= MAX_FIELD_SIZE/2) ?
        aoeRadius : MAX_FIELD_SIZE/2; //Ternary operators are useful here IMO
}

Ability::Ability SpecialCrop::getAbility() const {
    return this->ability;
}

int SpecialCrop::getAoeRadius() const {
    return this->aoeRadius;
}
