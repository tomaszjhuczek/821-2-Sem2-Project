#include "Field.h"
#include "item/Item.h"
#include "item/Chemical.h"
#include "shop/Shop.h"
#include "crop/StandardCrop.h"
#include <QApplication>
#include <QMessageBox>

#include "exception/ItemNotFoundException.h"

using namespace std;


int main(int argc, char** argv){

    QApplication a(argc, argv);
    cout << "Hello, from TU821-Sem2-Project!\n";

    cout << "Crop Test" << endl;


    std::vector<string> farmers = {"John", "Peter", "Adolf", "Karl"};
    for (const string& farmer: farmers) {
        cout << farmer << endl;
    }
    cout << endl;
    sort (farmers.begin(), farmers.end());
    for (const string& farmer: farmers) {
        cout << farmer << endl;
    }
    
    auto *wheat = new Species("wheat", 10, 10);
    auto *barley = new Species("wheat", 10, 20);
    
    auto *crop1 = new StandardCrop(*wheat);
    crop1->grow();
    //TODO: Remove this after testing
    cout << crop1->getSpeciesAsString() << endl;
    cout << crop1->getImmunity() << endl;


    // TODO: Work In Progress GUI
    // QMessageBox box;
    // box.setText("GUI IS WORKING!!");
    // box.exec();

    // box.setText("Test2");
    Chemical chem1, chem2;
    chem1.setMaxDurability(5);
    chem1.setDurability(5);
    chem1.setQuantity(2);
    chem1.setMonetaryValue(2);
    chem1.setItemName("PLANT EXECUTOR");

    chem2.setItemName("plant healer");
    chem2.setYieldMultiplier(1.256);
    chem2.setImmunityMultiplier(1.76);
    chem2.setMonetaryValue(3);

    Shop shop1;
    shop1.addchemStock(chem1);
    shop1.addchemStock(chem2);
    shop1.displaychemStock();

    shop1.sortChemStock();
    shop1.displaychemStock();

    Chemical *chemical1 = new Chemical();
    Chemical *chemical2 = chemical1;

    // cout << "\nOPERATOR TESTING" << endl; 
    // cout << (chem1 == chem2) << endl;
    // cout << (chem1 != chem2) << endl;
    // cout << (chem1 < chem2) << endl;
    // cout << (chem1 > chem2) << endl;
    // cout << "Pick a name and sell value, seperated by a whitespace." << endl;
    // // cin.precision(3);
    // // cin >> chem2;
    // cout << chem2; 
    
    crop1->addEffect("test");
    auto *crop2 = new StandardCrop(crop1);

    auto *crop3 = new StandardCrop();
    *crop3 = *crop1;
    cout << crop2->getImmunity() << endl;
    cout << (&chemical1 == &chemical2) << endl;

    try {
        crop1->addEffect("fast_grow");
        // crop1->addEffect("fast_grow");
        // crop2->removeEffect("fast_grow");
        // throw domain_error("");
    } catch (ItemNotFoundException &e) {
        cerr << "Attempted to delete an invalid effect" << endl;
    } catch (invalid_argument &e) {
        cerr << "Tried adding an effect twice" << endl;
    } catch (...) {
        cerr << "Caught an unknown exception: " << endl;
    }

    
    //Destroy Objects c++ style (no gc)
    delete crop1;
    delete crop2;
    delete crop3;
    crop1 = nullptr;
    crop2 = nullptr;
    crop3 = nullptr;
    // TODO
    // auto testfield = new Field();

    // testfield->plantStandardCrop(2,2,Species::WHEAT) ? cout << "Success\n" : cout << "Fail\n";
    // testfield->tick();
    // testfield->getInfo(2,2);

    // delete testfield;
    
}

;
