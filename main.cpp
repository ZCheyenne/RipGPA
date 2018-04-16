#include <iostream>
#include "PlayerShip.h"
#include "SDL_Plotter.h"

using namespace std;

int main(int argc, char* args[])
{

    // Create our ships
    PlayerShip ship(10, 20);

    SDL_Plotter Screen(1000,1000);

    for(int dx = 0; dx < 1000; dx++){
        for(int dy = 0; dy < 1000; dy++){
            Screen.plotPixel(0 + dx, 0 + dy,0,0,0);
        }
    }
    while(!Screen.getQuit())
    {


        Screen.update();

        Screen.Sleep(5000);

        Screen.setQuit(true);
        Screen.getQuit();
    }






    return 0;
}

