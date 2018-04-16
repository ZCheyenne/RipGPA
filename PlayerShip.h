#ifndef PLAYERSHIP_H_INCLUDED
#define PLAYERSHIP_H_INCLUDED
class PlayerShip
{
    private:
        double x, y;
        const int RIGHT = 0;
        const int DOWN  = 1;
        const int LEFT  = 2;
        const int UP    = 3;

    public:
        PlayerShip();
        PlayerShip(int startX, int startY);
        ~PlayerShip();

        void setXPos(double newX);
        double getXPos();
        void setYPos(double newY) {y = newY;}
        double getYPos() {return y;}

        void moveShip(char direction);
        void moveShip(char dir1, char dir2);

};


#endif // PLAYERSHIP_H_INCLUDED
