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
    int maxAge;
    bool mature;

public:
    AbstractCrop();
    explicit AbstractCrop(int maxAge);
    virtual ~AbstractCrop();
    string getName();
    void setName(const string &name);
    bool checkIfMature();


    void grow();
    void grow(unsigned short amount);
    
    
};



#endif //CROP_H
