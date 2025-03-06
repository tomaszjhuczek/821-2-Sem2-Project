#include "Field.h"
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
    crop1->grow();
    //TODO: Remove this after testing
    cout << crop1->getSpecies() << endl;
    cout << crop1->getImmunity() << endl;

    delete crop1; 

    Chemical chem1, chem2;
    chem1.setMaxDurability(5);
    chem1.setDurability(5);
    chem1.setMonetaryValue(-1);
    chem1.setItemName("PLANT EXECUTOR");
    cout << chem1;

    chem2.setItemName("plant healer");
    chem2.setYieldMultiplier(1.256);
    chem2.setImmunityMultiplier(1.76);

    Shop shop1; 
    shop1.addchemStock(chem1);
    shop1.addchemStock(chem2);
    shop1.displaychemStock();

    Chemical *chemical1 = new Chemical();
    Chemical *chemical2 = chemical1;

    cout << (&chemical1 == &chemical2) << endl;

    auto testfield = new Field();

    testfield->plantStandardCrop(2,2,Species::WHEAT) ? cout << "Success\n" : cout << "Fail\n";
    testfield->tick();
    testfield->getInfo(2,2);
};
