//
// Created by tomasz on 13/02/25.
//

#ifndef CROP_H
#define CROP_H
#include <iostream>
using std::string;

enum Species {
    
};


class AbstractCrop {
private:
    string name;
    int age;
    Species specimen;
    unsigned short yield;
    unsigned short immunity;
    unsigned short growth;

public:
    AbstractCrop();
    virtual ~AbstractCrop();
    string getName();
    void setName(string name);

    unsigned short getYield();
    unsigned short getImmunity();
    unsigned short getGrowth();

    void growByOneStage();
    void growByMultipleStages(unsigned short amount);
    
};



#endif //CROP_H
