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

    void addchemStock(Chemical&newStock);
    void removechemStock(Chemical&oldStock);
    void addtoolStock(Tool);
    void removetoolStock(Tool);
    // Chemical displaychemStock();

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