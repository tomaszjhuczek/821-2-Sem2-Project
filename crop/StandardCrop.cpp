//
// Created by tomasz on 20/02/25.
//

#include "StandardCrop.h"

StandardCrop::StandardCrop() : AbstractCrop(), SPECIES(UNKNOWN), MAX_AGE(speciesMaxAge(UNKNOWN)) {
}

StandardCrop::StandardCrop(const Species species) : AbstractCrop(), SPECIES(species), MAX_AGE(speciesMaxAge(species)) {
}

StandardCrop::StandardCrop(Species species, unsigned short yield, unsigned short immunity, unsigned short growth)
: AbstractCrop(yield,immunity,growth), SPECIES(species), MAX_AGE(speciesMaxAge(species)) {
}

string StandardCrop::getSpecies() const {
    return speciesToString(this->SPECIES);
}
