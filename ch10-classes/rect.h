#include <iostream>

#include "point.h"

class cRect{

    public:
        cRect(
                cPoint topLeft,
                cPoint topRight,
                cPoint bottomRight,
                cPoint bottomLeft
            ); //constructor
        ~cRect(); //destructor

        void setTopLeft(cPoint topLeft)         { itsTopLeft = topLeft;}
        void setTopRight(cPoint topRight)       { itsTopRight = topRight;}
        void setBottomRight(cPoint bottomRight) { itsBottomRight = bottomRight;}
        void setBottomLeft(cPoint bottomLeft)   { itsBottomLeft = bottomLeft;}

        int getArea()

    private:
        cPoint itsTopLeft;
        cPoint itsTopRight;
        cPoint itsBottomRight;
        cPoint itsBottomLeft;

}

cRect::cRect(cPoint tLeft, cPoint tRight, cPoint bRight, cPoint bLeft){
    itsTopLeft = tLeft;
    itsTopRight = tRight;
    itsBottomRight = bRight;
    itsBottomLeft = bLeft;
}
