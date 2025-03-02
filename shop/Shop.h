#ifndef SHOP_H
#define SHOP_H

#include "../item/Chemical.h"
#include "../item/Tool.h"
#include <vector> 

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

    void addtoolStock(Tool&);
    void removetoolStock(Tool&);
    void displaytoolStock();    // These definitions need to be copied from those of the chemicals.
    
    // Have considered using Item pointers to refer to child objects. Not a priority at the moment. 

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