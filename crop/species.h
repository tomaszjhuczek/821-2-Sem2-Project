//
// Created by tomasz on 26.02.25.
//

#ifndef SPECIES_H
#define SPECIES_H

enum Species {
    //TODO
    UNKNOWN,
    WHEAT,
    BARLEY,
    CORN,
    COFFEE,
    TEA
};

inline std::string speciesToString(Species species) { //Convert from enum index to a string (why is this not part of C++ enums?)
    switch (species) {
        case WHEAT: return "wheat";
        case BARLEY: return "barley";
        case CORN: return "corn";
        case COFFEE: return "coffee";
        case TEA: return "tea";
        default: return "unknown";
    }
}

inline int speciesMaxAge(Species species) {
    switch (species) {
        case WHEAT: return 20;
        case BARLEY: return 23;
        case CORN: return 15;
        case COFFEE: return 30;
        case TEA: return 39;
        default: return 200;
    }
}

#endif //SPECIES_H
