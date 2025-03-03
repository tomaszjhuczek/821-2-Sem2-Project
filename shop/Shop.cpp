#include "Shop.h"

int Shop::shopCount = 0; 

Shop::Shop(): overallstockCount(0), chemstockCount(0), toolstockCount(0), shopMoney(1000)
{

}

Shop::Shop(float initialMoney): overallstockCount(0), chemstockCount(0), toolstockCount(0), shopMoney(initialMoney)
{
    shopCount++; 
}

Shop::~Shop()
{
    shopCount--;
}

void Shop::addchemStock(Chemical &newStock){
    chemStock.push_back(newStock);
    chemstockCount++; 
};

void Shop::removechemStock(Chemical &oldStock){
    for(int i = 0; i++; i<chemStock.size()){
        if(chemStock.at(i) == oldStock){
            chemStock.erase(chemStock.begin()+i);
            chemstockCount--; 
        }
    }
};
 
void Shop::displaychemStock(){
    for(int i = 0; i<chemStock.size(); i++){
        cout << "\n" << chemStock.at(i);     
    }
}