#include "item/Item.h"
#include "item/Chemical.h"
#include "item/Tool.h"
#include "shop/Shop.h"
#include "crop/StandardCrop.h"

using namespace std;

int currentTurn = 1; 

int main(int, char**){
    cout << "Hello, from TU821-Sem2-Project!\n";

    cout << "Crop Test" << endl;

    auto *crop1 = new StandardCrop(Species::WHEAT);
    //TODO: Remove this after testing
    cout << crop1->getSpecies() << endl;
    cout << crop1->getImmunity() << endl;

    delete crop1; 

    Chemical chem1;
    cout << chem1;

};
