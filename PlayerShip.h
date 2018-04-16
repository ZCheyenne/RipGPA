#ifndef PLAYERSHIP_H_INCLUDED
#define PLAYERSHIP_H_INCLUDED
class PlayerShip
{
    private:
        double x, y;

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
