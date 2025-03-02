//
// Created by tomasz on 02.03.25.
//

#ifndef ABILITY_H
#define ABILITY_H
#include <string>

enum Ability {
    DEFAULT_ABILITY,
    GROWTH_BOOST,
    FERTILITY
};

inline std::string getAbilityAsString(Ability ability) {
    switch (ability) {
        case GROWTH_BOOST: return "GROWTH_BOOST";
        case FERTILITY: return "FERTILITY";
        default: return "UNKNOWN";
    }
}

#endif //ABILITY_H
