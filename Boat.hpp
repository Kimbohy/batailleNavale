#ifndef BOAT_HPP
#define BOAT_HPP

class Boat
{
public:
    // constructeurs:
    Boat(int id, int size);
    // accessor:
    int getId() const;
    int getSize() const;
    int getOrientation() const;
    int getHeadX() const;
    int getHeadY() const;
    // setor:
    void setHit(int n);
    void setBoatPosition(Boat bt);
    bool boatSatus();

private:
    int id{0};
    int size{0};
    int orinetation{0}; // North = 0, South = 1, West = 2, East = 3
    int headX{0};
    int headY{0};
    int hit{0};
};

#endif // BOAT_HPP