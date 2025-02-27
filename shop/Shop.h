#ifndef SHOP_H
#define SHOP_H

#include "../item/Chemical.h"
#include "../item/Tool.h"
#include <vector> 

class Shop
{
public:
    Shop(float);
    ~Shop();

    void addStock(Item*);
    void removeStock(Item*);
    void displayStock();

private:
    string name; 

    vector<Item*>itemStock; 

    int overallStock;    
    int chemicalStock;  
    int toolStock;      
    float shopMoney; 

    static int shopCount; // Keeps track of active shops 
};

#endif