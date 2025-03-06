//
// Created by tomasz on 13/02/25.
//

#ifndef CROP_H
#define CROP_H
#include <iostream>
using std::string;


//May this serve as a reminder that c++ ain't that great in OOP compared to java or c#
class AbstractCrop {
protected:
    string name;
    int age;
    const int MAX_AGE;
    bool mature;
    bool isTilled; 

public:

    static int amountOfCrops;
    
    AbstractCrop();
    explicit AbstractCrop(int maxAge);
    virtual ~AbstractCrop();
    string getName();
    void setName(const string &name);
    auto getAge() -> int;
    bool checkIfMature();
    bool checkIfTilled();
    void setTill(bool);
    virtual void showDetails() = 0; //Apparently this makes this class abstract. Can't we have `public abstract class` in c++!?


    void grow();
    void grow(unsigned short amount);
    static int getTotalCrops();
    
    
};



#endif //CROP_H
