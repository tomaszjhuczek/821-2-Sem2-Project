//
// Created by tomasz on 24.05.25.
//

#include "ItemNotFoundException.h"

const char* ItemNotFoundException::what() const throw() {
    return "Could not find item in the list";
}

