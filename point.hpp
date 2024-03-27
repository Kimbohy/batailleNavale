#ifndef __POINT__
#define __POINT__
class Boat
{
public:
    // constructeurs:
    Boat();
    Boat(int, int, int, int, int);
    // accessor:
    int getId() const;
    int getSize() const;
    int getOrientation() const;
    int getHeadX() const;
    int getHeadY() const;
    // setor:
    void setTouched(int n);
    void setBoatPosition(Boat bt);

private:
    int Id{0};
    int Size{0};
    int Orientation{0}; // North = 0, South = 1, West = 2, East = 3
    int HeadX{0};
    int HeadY{0};
    int Touched{0};
};

// listage dea bateau par un vecteur
vector<Boat> boatList{1, 1, 1, 1};

class Map
{
public:
    Map();
    void boatAdd(Boat bt);

private:
    int Mp[10][10] = {0};
};

int inMap(char *txt);
int setOrientation(Boat bt);

#endif