#ifndef __POINT__
#define __POINT__
class Boat
{
public:
    Boat();
    int get(char *info) const;
    void setTouched(int n);
    void setBoatPosition();
    int Boat::getPosition(char info);

private:
    int id{0};
    int size{0};
    int orientation{0}; // North = 0, South = 1, West = 2, East = 3
    int headX{0};
    int headY{0};
    int touched{0};
};

class Map
{
public:
    Map();
    void boatAdd(int id, int orientation,int headX, int headY);

private:
    int map[10][10] = {0};
};

int in(char *txt);
int setOrientation(int x, int y, int size);

#endif