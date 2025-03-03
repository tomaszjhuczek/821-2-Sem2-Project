//
// Created by tomasz on 02.03.25.
//

#ifndef ABILITY_H
#define ABILITY_H
#include <avx512fp16vlintrin.h>
#include <string>


// Ability enum for this program. Using java enum naming convention.
namespace Ability {
    enum Ability {
        DEFAULT_ABILITY,
        GROWTH_BOOST,
        FERTILITY
    };

    inline std::string getAbilityAsString(Ability ability) { //Return this as a string because toString doesn't exist
        switch (ability) {
            case GROWTH_BOOST: return "GROWTH_BOOST";
            case FERTILITY: return "FERTILITY";
            default: return "UNKNOWN";
        }
    }
}
#endif //ABILITY_H
