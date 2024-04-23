#include "point.hpp"
#include <iostream>
#include <vector>

using namespace std;
// add the boat (Id of bt) to the Map Mp
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
void targetInfo(int y, int x){
    //!!set the vector before doing the conseption of this function !!
    1;
}
