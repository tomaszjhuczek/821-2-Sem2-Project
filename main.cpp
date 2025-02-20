#include <iostream>

#include "StandardCrop.h"
using namespace std;
int main(int, char**){
    cout << "Hello, from TU821-Sem2-Project!\n";

    cout << "Crop Test" << endl;

    auto *crop1 = new StandardCrop();
    //TODO: Remove this after testing
    cout << crop1->getGrowth() << endl;
    crop1->growByOneStage();
    crop1->growByMultipleStages(7);
    cout << crop1->getGrowth() << endl;
}
