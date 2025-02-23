//
// Created by tomasz on 23.02.25.
//

#include "ChildCrop.h"

ChildCrop::ChildCrop(StandardCrop *parent1, StandardCrop *parent2) {
    this->parent1 = parent1;
    this->parent2 = parent2;

    this->growth = parent1->getGrowth() + parent2->getGrowth();
}
