#include "Shop.h"

int Shop::shopCount = 0; 

Shop::Shop(float initialMoney)
{
    shopCount++; 
    overallstockCount = 0;    
    chemstockCount = 0;  
    toolstockCount = 0;   
    shopMoney = initialMoney;
}

Shop::~Shop()
{
    shopCount--;
}

void Shop::addchemStock(Chemical &newStock){
    chemStock.push_back(newStock);
};

void Shop::removechemStock(Chemical &oldStock){
    for(int i = 0; i++; i<chemStock.size()){
        if(chemStock.at(i) == oldStock){
            chemStock.erase(chemStock.begin()+i);
        }
    }
};

void Shop::displaychemStock(){
    for(int i = 0; i++; i<chemStock.size()){
        cout << chemStock.at(i) << endl;      
    }
}