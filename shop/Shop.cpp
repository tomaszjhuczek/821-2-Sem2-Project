#include "Shop.h"

int Shop::shopCount = 0; 

Shop::Shop(float initialMoney)
{
    shopCount++; 
    overallStock = 0;    
    chemicalStock = 0;  
    toolStock = 0;   
    shopMoney = initialMoney;
}

Shop::~Shop()
{
    shopCount--;
}

void Shop::addStock(Item* newStock){
    itemStock.push_back(newStock);
};

void Shop::removeStock(Item* oldStock){
    for(int i = 0; i++; i<itemStock.size()){
        if(itemStock.at(i) == oldStock){
            itemStock.erase(itemStock.begin()+i);
        }
    }
};

void Shop::displayStock(){
    for(int i = 0; i++; i<itemStock.size()){
        cout << itemStock.at(i) << endl;        // This will output addresses for now. 
    }
};