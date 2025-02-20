//
// Created by tomasz on 13/02/25.
//

#ifndef CROP_H
#define CROP_H
#include <string>
using std::string;

enum Species {
    
};


class Crop {
private:
    string name;
    int age;
    Species specimen; 

public:
    Crop();
    virtual ~Crop();
    virtual string getName();
    virtual void setName(string name);
    
    
};



#endif //CROP_H
