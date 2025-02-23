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

void ItemRegistry::deregisterItem(unsigned int a){
    // ItemVector.pop_back(registeredItem);
    registryCount--; 
};

int ItemRegistry::getregistryCount(){
    return registryCount; 
}

