#include <iostream>
#include <vector>
#include "point.hpp"

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

void Player::boatInit(){
    //!creat a vector to init all boat!
}


void mapInit(){
    //!creat a map for this player!
}