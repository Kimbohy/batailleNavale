#include "point.hpp"
#include <iostream>

using namespace std;

//Boat constructeur
Boat::Boat(int id, int size){
    this->id = id;
    this->size = size;
}

//geter (return the boat's Id or boat's Size)
int Boat::get(char* info)const{
    if (info == id)
        return id;
    else return size;
} 

int Boat::getPosition(char info){
    if (info == 'y') return headY;
    else if (info == 'x') return headX;
    else return orientation;
}

//add one touched boat section
void Boat::setTouched(int n){
    touched++;
}
// chow the boat list
Boat::list(){
                                        //need some reflection
}
 //fonction adding a boat to the map
void Boat::setBoatPosition(){
    int tmp;
    cout <<"Chouse a boat" << endl;
    cin << Boat.id;                     //we need to change something beacause we want to get the boat withe that id, not set a new id
    Boat.headX = in ("position line:");
    Boat.headY = in ("position row:");
    for (int i = 0; i < 3; i++)
    {
        if (headY + 1 >= size)
            cout << '0';
        if (10 - (headY + 1) >= size)
            cout << '1';
        if (headX + 1 >= size)
            cout << '2';
        if (10 - (headX + 1) >= size)
            cout << '3';
        if ((headY + 1 >= size) && (10 - (headY + 1)) >= size && headX + 1 >= size) && (10 - (headX + 1) >= size ))
        cout <<"impossible, this boat is too big for that possition"<<endl;
    }
    cout <<"orientation (North = 0, South = 1, West = 2, East = 3)" << ndl;
    cin >> Boat.orientation;
}

//error gestion for Boat.setBoatPosition
int in (char* txt){
    int tmp(0);
    do {
    cout << txt << endl;
    cin >> tmp;
    if (tmp <= 10 && tmp > 0)
        break;
    } while (1);
    return tmp;
}

//orrientation error gestion
int setOrientation(int x, int y, int size){
    int o;
    cout <<"orientation: "<< endl;
    cin >> o;
    switch o {
        case 0:
            if (headY + 1 >= size)
                return o;
            else 
                cout <<"unexpected valiu, the place isn't enough"<<endl;
            break;
        case 1:
            if (10 - (headY + 1) >= size)
                return o;
            else 
                cout <<"unexpected valiu, the place isn't enough"<<endl;
            break;
        case 2:
            if (headX + 1 >= size)
                return o;
            else 
                cout <<"unexpected valiu, the place isn't enough"<<endl;
            break;
        case 3:
            if (10 - (headX + 1) >= size)
                return o;
            else 
                cout <<"unexpected valiu, the place isn't enough"<<endl;
            break;
        default :
            cout <<"unexpected valiu"<<endl;
            break;
    }
}

//add the boat to the map
void Map::boatAdd(int id, int orientation,int headX, int headY){
    int a;
    switch (a){
        case 0:
            for (int i(0); i < size; i++){
                map[headY - i][headX] = id;
            }
            break;
        case 1:
            for (int i(0); i < size; i++){
                map[headY + i][headX] = id;
            }
            break;
        case 2:
            for (int i(0); i < size; i++){
                map[headY][headX - i] = id;
            }
            break;
        case 3:
            for (int i(0); i < size; i++){
                map[headY][headX + i] = id;
            }
            break;            
    }
}
