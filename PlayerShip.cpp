#include <iostream>
#include "PlayerShip.h"
using namespace std;

const int START_X = 10;
const int START_Y = 10;

PlayerShip::PlayerShip()
{
    x = START_X;
    y = START_Y;
}

PlayerShip::PlayerShip(int startX, int startY)
{
    x = startX;
    y = startY;
}

PlayerShip::~PlayerShip()
{
    cout << "Proof that the destructor is getting called" << endl;
}

void PlayerShip::setXPos(double newX)
{
    x = newX;
}

double PlayerShip::getXPos()
{
    return x;
}


void PlayerShip::moveShip(char direction)
{
    switch (direction)
    {
        case 'w':
            y--;
            break;
        case 's':
            y++;
            break;
        case 'a':
            x--;
            break;
        case 'd':
            x++;
            break;
    }
}

void PlayerShip::moveShip(char dir1, char dir2)
{
    // Moves ship either up or down
    if (dir1 == 'w')
    {
        moveShip('w');
    }
    else if (dir1 == 's')
    {
        moveShip('s');
    }

    // Moves ship left or right
    if (dir2 == 'a')
    {
        moveShip('a');
    }
    else if (dir2 == 'd')
    {
        moveShip('d');
    }
}

