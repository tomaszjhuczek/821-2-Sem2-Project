#include "ItemRegistry.h"

ItemRegistry::ItemRegistry(){

}

ItemRegistry::~ItemRegistry(){

}

Item ItemRegistry::getItem(int itemID){
    
};      


void ItemRegistry::registerItem(Item unregisteredItem){
    ItemVector.push_back(unregisteredItem);
};