//
// Created by tomasz on 26.02.25.
//

#include "Player.h"

// Define the static member variable
unsigned int Player::playerCount = 0; //C++ Moment

//Create new Player object
Player::Player() : money(100), fertilizerAmt(0) {
    Player::playerCount++;
}

//Delete Player object
Player::~Player() {
    Player::playerCount--;
}

int Player::getMoney() const { //Returns the amount of money the player has
    return this->money;
}

bool Player::spend(int amount) { //Spend X amount of money
    if (this->money >= amount) { //Check if Player has enough money
        this->money-=amount;
        return true; //Sucess
    } else {
        return false; //Fail
    }
}

void Player::earn(int amount) {
    this->money+=amount;
}

void Player::setMoney(int amount) {
    this->money=amount;
}

// bool Player::addTool(ItemRegistry tool) {}

// bool Player::removeTool(ItemRegistry tool) {}

unsigned int Player::getPlayerCount() {
    return Player::playerCount;
}
