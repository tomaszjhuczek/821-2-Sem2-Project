#include "Shop.h"

int Shop::shopCount = 0; 

Shop::Shop(float initialMoney)
{
    shopCount++; 
    shopMoney = initialMoney;
}

Shop::~Shop()
{
    shopCount--;
}

void addStock(Item*){

};

void removeStock(Item*){

};

Item* displayStock(){

};