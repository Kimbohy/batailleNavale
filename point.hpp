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
    bool boatSatus();
private:
    int Id{0};
    int Size{0};
    int Orientation{0}; // North = 0, South = 1, West = 2, East = 3
    int HeadX{0};
    int HeadY{0};
    int Touched{0};
};

class Map
{
public:
    Map();
    void boatAdd(Boat bt);
    void targetInfo(int y, int x);
private:
    int Mp[10][10] = {0};
};

class Player{
public:
    Player(); //creat a bot player
    Player(std::string name); //creat a player with a name
    void boatInit();//!creat a vector to init all boat!
    void mapInit();//!creat a map for this player!
private:
    std::string Name;
    bool playerType; // true if real player and false if bot
};

int inMap(char *txt);
int setOrientation(Boat bt);

#endif
