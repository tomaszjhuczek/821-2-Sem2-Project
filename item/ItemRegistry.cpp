#include "ItemRegistry.h"

ItemRegistry::ItemRegistry(){

}

ItemRegistry::~ItemRegistry(){

}

unsigned int getitemID(Item a){
    return a.fetchitemID();
};


void ItemRegistry::registerItem(Item unregItem){
    ItemVector.push_back(unregItem);    
    registryCount++;
};

void ItemRegistry::deregisterItem(unsigned int deregitemID){
    for(int i = 0; i++; i<ItemVector.size()){
        if(ItemVector.at(i).fetchitemID() == deregitemID){
            ItemVector.erase(ItemVector.begin() + i-1);
        }
    }
    // ItemVector.pop_back(registeredItem);
    registryCount--; 
};

// This will index the individual items of the ItemRegistry vector, and check each one for a 
// matching item ID in order to locate the item that needs to be removed. 

int ItemRegistry::getregistryCount(){
    return registryCount; 
}

