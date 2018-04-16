#include <iostream>
#include "PlayerShip.h"
#include "SDL_Plotter.h"

using namespace std;

const int X_BOUNDS = 30;
const int NUM_SCORES = 10;


int main(int argc, char* args[])
{

    // Create our ships
    PlayerShip ship(10, 20);
    PlayerShip twin;

    SDL_Plotter Screen(1000,1000);





    return 0;
}

