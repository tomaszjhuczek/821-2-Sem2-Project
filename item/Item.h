#ifndef ITEM_H
#define ITEM_H

#include <iostream>
using namespace std; 

class Item
{
public:
    Item();
    ~Item();

    unsigned int getDurability(){return durability;}
    void setDurability(unsigned int newDurability){
        if(newDurability < 0 || newDurability > maxDurability){
            cout << "Error. Invalid input." << endl;
        }
        else if(newDurability == 0){
            cout << "Item destroyed!" << endl; 
            durability = newDurability;
        }
        else{
            durability = newDurability;
        }
    }


    unsigned int getMaxDurability(){return maxDurability;}
    void setMaxDurability(unsigned int newMaxDurability){
        if(newMaxDurability <= 0){
            cout << "Error. Invalid input." << endl;
        }
        else maxDurability = newMaxDurability;
    }

    float getMonetaryValue(){return monentaryValue;}
    void setMonetaryValue(float newMonetaryValue){
        
        if(newMonetaryValue < 0){
            cout << "Error. Invalid input." << endl; 
        }
        else monentaryValue = newMonetaryValue;
    }

    string getItemName(){return name;}
    void setItemName(string newName){
        name = newName; 
    }

protected:
    string name; 
                
    unsigned int durability;            
    unsigned int maxDurability;      
    float monentaryValue; 

    static int itemsCount;
private:
   
};

#endif

