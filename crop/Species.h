//
// Created by tomasz on 16.05.25.
//

#ifndef SPECIES_H
#define SPECIES_H
#include <string>
using std::string;

class Species {
private:
    string name;
    unsigned short rarity;
    unsigned short maxAge;

public:
    Species();
    Species(const string &name, unsigned short rarity, unsigned short max_age);

    ~Species();

    string getName() const;
    unsigned short getRarity() const;
    unsigned short getMaxAge() const;

    void setName(const string &name);
    void setRarity(unsigned short rarity);
    void setMaxAge(unsigned short max_age);
};



#endif //SPECIES_H
