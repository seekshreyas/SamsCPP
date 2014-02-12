// header file for points class
#include <iostream>

class cPoint{

    public:
        void setX(int x) { itsX = x; }
        void setY(int y) { itsY = y; }

        int getX() const { return itsX; }
        int getY() const { return itsY; }



    private:
        int itsX;
        int itsY;
};
