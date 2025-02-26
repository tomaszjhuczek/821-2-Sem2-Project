//
// Created by tomasz on 26.02.25.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <vector>

#include "item/Item.h"
#include "item/ItemRegistry.h"


class Player {
private:
    int money;
    int fertilizerAmt;
    std::vector<ItemRegistry> tools;

protected:

public:
    static unsigned int playerCount;

    Player();
    virtual ~Player();
    int getMoney() const;
    bool spend(int amount);
    void earn(int amount);
    void setMoney(int amount);
    bool addTool(ItemRegistry tool);
    bool removeTool(ItemRegistry tool);

    static unsigned int getPlayerCount();
    
};



#endif //PLAYER_H
