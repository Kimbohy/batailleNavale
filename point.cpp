#include "point.hpp"
#include <iostream>
#include <vector>

using namespace std;

// add one touched boat section
void Boat::setTouched(int n)
{
    Touched++;
}

// error gestion for Boat.setBoatPosition (test ande add the position if the position is insaid of the Mp)
int inMap(char *txt)
{
    int tmp(0);
    do
    {
        cout << txt << endl;
        cin >> tmp;
        if (tmp <= 10 && tmp > 0)
            break;
    } while (1);
    return tmp;
}

// fonction adding bot position and orientation
void Boat::setBoatPosition(Boat bt)
{
    int tmp;
    cout << "Chouse a boat" << endl;
    cin >> Id; // we need to change something beacause we want to get the boat withe that id, not set a new id
    HeadX = inMap("position line:");
    HeadY = inMap("position row:");
    for (int i = 0; i < 3; i++)
    {
        if (HeadY + 1 >= Size)
            cout << "0 (North)";
        if (10 - (HeadY + 1) >= Size)
            cout << "1 (South)";
        if (HeadX + 1 >= Size)
            cout << "2 (West)";
        if (10 - (HeadX + 1) >= Size)
            cout << "3 (East)";
        if ((HeadY + 1 >= Size) && (10 - (HeadY + 1)) >= Size && (HeadX + 1 >= Size) && (10 - (HeadX + 1) >= Size))
            cout << "impossible, this boat is too big for that possition" << endl;
    }
    Orientation = setOrientation(bt);
}

// orrientation error gestion
int setOrientation(Boat bt)
{
    int o;
    cout << "orientation (North = 0, South = 1, West = 2, East = 3): " << endl;
    cin >> o;
    switch (o)
    {
    case 0:
        if (bt.getHeadY() + 1 >= bt.getSize())
            return o;
        else
            cout << "unexpected valiu, the place isn't enough" << endl;
        return setOrientation(bt);
        break;
    case 1:
        if (10 - (bt.getHeadY() + 1) >= bt.getSize())
            return o;
        else
            cout << "unexpected valiu, the place isn't enough" << endl;
        return setOrientation(bt);
        break;
    case 2:
        if (bt.getHeadX() + 1 >= bt.getSize())
            return o;
        else
            cout << "unexpected valiu, the place isn't enough" << endl;
        return setOrientation(bt);
        break;
    case 3:
        if (10 - (bt.getHeadX() + 1) >= bt.getSize())
            return o;
        else
            cout << "unexpected valiu, the place isn't enough" << endl;
        return setOrientation(bt);
        break;
    default:
        cout << "unexpected valiu" << endl;
        return setOrientation(bt);
        break;
    }
}

// add the boat (bt) to the Mp
void Map::boatAdd(Boat bt)
{
    int a = bt.getOrientation();
    switch (a)
    {
    case 0:
        for (int i(0); i < bt.getSize(); i++)
        {
            Mp[bt.getHeadY() - i][bt.getHeadX()] = bt.getId();
        }
        break;
    case 1:
        for (int i(0); i < bt.getSize(); i++)
        {
            Mp[bt.getHeadY() + i][bt.getHeadX()] = bt.getId();
        }
        break;
    case 2:
        for (int i(0); i < bt.getSize(); i++)
        {
            Mp[bt.getHeadY()][bt.getHeadX() - i] = bt.getId();
        }
        break;
    case 3:
        for (int i(0); i < bt.getSize(); i++)
        {
            Mp[bt.getHeadY()][bt.getHeadX() + 1] = bt.getId();
        }
        break;
    }
}
