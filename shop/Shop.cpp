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


/* void Shop::removechemStock(Chemical &oldStock){
    Chemical *ptr1, *ptr2; 
    ptr1 = &oldStock;

    for(int i = 0; i++; i<chemStock.size()){
        ptr2 = &chemStock.at(i);
        if(ptr1 == ptr2){
            chemStock.erase(chemStock.begin()+i);
        }
    }
};

Chemical Shop::displaychemStock(){
    for(int i = 0; i++; i<chemStock.size()){
        return chemStock.at(i);      
    }
}*/