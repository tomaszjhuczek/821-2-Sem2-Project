#ifndef SHOP_H
#define SHOP_H

#include "../item/Chemical.h"
#include "../item/Tool.h"
#include <vector>
#include <algorithm>

class Shop
{
public:
    Shop(); 
    Shop(float);
    ~Shop();

    void supply();

    void addchemStock(Chemical&);
    void removechemStock(Chemical&);
    void displaychemStock();
    void sortchemStock();

    void addtoolStock(Tool&);
    void removetoolStock(Tool&);
    void displaytoolStock();

private:
    string name; 

    vector<Chemical>chemStock; 
    vector<Tool>toolStock; 

    int overallstockCount;    
    int chemstockCount;  
    int toolstockCount;      
    float shopMoney; 

    static int shopCount; // Keeps track of active shops 
};

#endif