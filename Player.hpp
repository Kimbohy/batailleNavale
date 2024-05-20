#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string> 
#include "Boat.hpp"
#include "Map.hpp"


class Player
{
public:
    Player();                 // creat a bot player
    Player(std::string name); // creat a player with a name
    void boatInit();          // creat a vector to init all boat
private:
    Map playerMap;
    vector<Boat> playerBoats;
    std::string Name;
    bool playerType; // true if real player and false if bot
};

int inMap(char *txt);
int setOrientation(Boat bt);

#endif // PLAYER_HPP
