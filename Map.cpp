#include <iostream>
#include <vector>
#include "Map.hpp"

using namespace std;
// add the boat (id of bt) to the Map Mp
void Map::boatAdd(Boat bt)
{
    int a = bt.getOrientation();
    switch (a)
    {
    case 0:
        for (int i(0); i < bt.getSize(); i++)
        {
            this->Mp[bt.getHeadY() - i][bt.getHeadX()] = bt.getId();
        }
        break;
    case 1:
        for (int i(0); i < bt.getSize(); i++)
        {
            this->Mp[bt.getHeadY() + i][bt.getHeadX()] = bt.getId();
        }
        break;
    case 2:
        for (int i(0); i < bt.getSize(); i++)
        {
            this->Mp[bt.getHeadY()][bt.getHeadX() - i] = bt.getId();
        }
        break;
    case 3:
        for (int i(0); i < bt.getSize(); i++)
        {
            this->Mp[bt.getHeadY()][bt.getHeadX() + 1] = bt.getId();
        }
        break;
    }
}

// return the target state after a shot
string Map::targetInfo(int y, int x)
{
    if (this->Mp[y][x] == 0)
    {
        return "Missed";
    }
    else
    {
        return "Hit";
    }
    // ! this function will be updated to return sank if the boat is sank
}
