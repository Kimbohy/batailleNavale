#ifndef __POINT__
    #define __POINT__
    class Boat{
        public :
            list();
            Boat();
            int get(char* info)const;
            void setTouched(n);
            void setBoatPosition();
        private :
            int id(0);
            int size(0);
            int orientation(0); // North = 0, South = 1, West = 2, East = 3
            int headX(0);
            int headY(0);
            int touched(0);
    };

    clas Map{
        public :
            Map();
            void boatAdd();
        private :
            int map[10][10]={0};
    };

int in (char* txt);
int setOrientation(int x, int y, int size);

#endif