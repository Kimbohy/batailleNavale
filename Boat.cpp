#include <iostream>
#include <vector>
#include "Boat.hpp"

using namespace std;

// constructor
Boat::Boat(int id, int size)
{
    this->id = id;
    this->size = size;
    hit = 0;
}

// geter
int Boat::getId() const
{
    return id;
}

int Boat::getSize() const
{
    return size;
}

int Boat::getOrientation() const
{
    return orinetation;
}

int Boat::getHeadX() const
{
    return headX;
}

int Boat::getHeadY() const
{
    return headY;
}

// add a section of boat hit by enemy fire
void Boat::setHit(int n)
{
    hit++;
}

// error gestion for Boat.setBoatPosition (test ande add the position if the position is insaId of the Mp)
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

// fonction adding bot position and orinetation
void Boat::setBoatPosition()
{
    int tmp;
    headX = inMap("position line:");
    headY = inMap("position row:");
    for (int i = 0; i < 3; i++)
    {
        if (headY + 1 >= size)
            cout << "0 (North)";
        if (10 - (headY + 1) >= size)
            cout << "1 (South)";
        if (headX + 1 >= size)
            cout << "2 (West)";
        if (10 - (headX + 1) >= size)
            cout << "3 (East)";
        if ((headY + 1 >= size) && (10 - (headY + 1)) >= size && (headX + 1 >= size) && (10 - (headX + 1) >= size))
            cout << "impossible, this boat is too big for that possition" << endl;
    }
    orinetation = initOrientation();
}

// orrientation error gestion
int Boat::initOrientation()
{
    int o;
    cout << "orinetation (North = 0, South = 1, West = 2, East = 3): " << endl;
    cin >> o;
    switch (o)
    {
    case 0:
        if (getHeadY() + 1 >= getSize())
            return o;
        else
            cout << "unexpected valiu, the place isn't enough" << endl;
        return initOrientation();
        break;
    case 1:
        if (10 - (getHeadY() + 1) >= getSize())
            return o;
        else
            cout << "unexpected valiu, the place isn't enough" << endl;
        return initOrientation();
        break;
    case 2:
        if (getHeadX() + 1 >= getSize())
            return o;
        else
            cout << "unexpected valiu, the place isn't enough" << endl;
        return initOrientation();
        break;
    case 3:
        if (10 - (getHeadX() + 1) >= getSize())
            return o;
        else
            cout << "unexpected valiu, the place isn't enough" << endl;
        return initOrientation();
        break;
    default:
        cout << "unexpected valiu" << endl;
        return initOrientation();
        break;
    }
}

// if the boat has not yet sunk, return true else returen false
bool Boat::boatSatus()
{
    if (this->size > this->hit)
        return true;
    else
        return false;
}