#include <iostream>
#include <vector>
#include "Player.hpp"

using namespace std;

Player::Player(){
    this->Name = "bot";
    this->playerType = false;
}

// true if real player and false if bot
Player::Player(string name){
    this->Name = name;
    this->playerType = true;
}

//a vector to init all boat
void Player::boatInit(){
    playerBoats.push_back(Boat(1, 5));
    playerBoats.push_back(Boat(2, 4));
    playerBoats.push_back(Boat(3, 3));
    playerBoats.push_back(Boat(4, 3));
    playerBoats.push_back(Boat(5, 2));
}

// add all boat to the map
void Player::setBoatToMap(){
    for (int i(0); i < playerBoats.size(); i++)
    {
        playerBoats[i].setBoatPosition();
        playerMap.boatAdd(playerBoats[i]);
    }
}