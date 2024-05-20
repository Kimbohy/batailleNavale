#ifndef MAP_HPP
#define MAP_HPP

#include "Boat.hpp"

class Map
{
public:
    Map();
    void boatAdd(Boat bt);
    std::string targetInfo(int y, int x);

private:
    int Mp[10][10] = {0};
};

#endif // MAP_HPP