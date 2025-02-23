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

    auto *crop1 = new StandardCrop();
    //TODO: Remove this after testing
    cout << crop1->getGrowth() << endl;
    crop1->growByOneStage();
    crop1->growByMultipleStages(7);
    cout << crop1->getGrowth() << endl;

    auto *crop2 = new StandardCrop();
    crop2->growByMultipleStages(3);
    cout << crop2->getGrowth() << endl;

    auto *crop3 = new ChildCrop(crop1, crop2);

    cout << crop3->getGrowth() << endl;
    auto *crop4 = new ChildCrop(crop3, crop1);

    cout << crop4->getGrowth() << endl;

    Item item1;
    ItemRegistry registry; 
    registry.registerItem(item1);
    cout << registry.getregistryCount();

};
