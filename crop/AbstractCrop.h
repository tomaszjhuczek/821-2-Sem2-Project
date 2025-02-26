//
// Created by tomasz on 13/02/25.
//

#ifndef CROP_H
#define CROP_H
#include <iostream>
using std::string;


class AbstractCrop {
protected:
    string name;
    int age;
    unsigned short yield;
    unsigned short immunity;
    unsigned short growth;
    bool mature;

public:
    AbstractCrop();
    AbstractCrop(unsigned short yield, unsigned short immunity, unsigned short growth);
    virtual ~AbstractCrop();
    string getName();
    void setName(const string &name);

    unsigned short getYield();
    unsigned short getImmunity();
    unsigned short getGrowth();

    void growByOneStage();
    void growByMultipleStages(unsigned short amount);
    
    bool isMature();
    
};



#endif //CROP_H
