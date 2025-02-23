//
// Created by tomasz on 23.02.25.
//

#ifndef CHILDCROP_H
#define CHILDCROP_H
#include "StandardCrop.h"


class ChildCrop : public StandardCrop {
private:
    const StandardCrop *parent1;
    const StandardCrop *parent2;

public:
    ChildCrop(StandardCrop *parent1, StandardCrop *parent2);
    
};



#endif //CHILDCROP_H
