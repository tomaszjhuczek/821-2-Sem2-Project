#include "item/ItemRegistry.h"
// #include "item/Chemical.h"
// #include "item/Tool.h"
#include "crop/ChildCrop.h"
#include "crop/StandardCrop.h"

using namespace std;

int ItemRegistry::registryCount = 0;                              
int main(int, char**){
    cout << "Hello, from TU821-Sem2-Project!\n";

    cout << "Crop Test" << endl;

    auto *crop1 = new StandardCrop(Species::WHEAT);
    //TODO: Remove this after testing
    cout << crop1->getSpecies() << endl;
    cout << crop1->getImmunity() << endl;

    Item item1;
    ItemRegistry registry; 
    registry.registerItem(item1);
    cout << registry.getregistryCount();

};
