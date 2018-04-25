#include <iostream>
#include <cmath>
#include <ctime>
#include "PlayerShip.h"
#include "SDL_Plotter.h"
using namespace std;

int main(int argc, char* args[])
{
    SDL_Plotter Screen(1000,1000);
    char key;
    int dir;
    int x=450,y=800;

    while(!Screen.getQuit())
    {
        for(int dx = 0; dx < 1000; dx++){
            for(int dy = 0; dy < 1000; dy++){
                Screen.plotPixel(dx, dy,0,0,0);
            }
        }
        drawShip(Screen,x,y);
        Screen.update();
        eraseShip(Screen,x,y);
        moveShip(x,y,dir);

        if(Screen.kbhit()){
            key = Screen.getKey();
            switch(key){
                case RIGHT_ARROW: dir = RIGHT;
                                  break;
                case LEFT_ARROW:  dir = LEFT;
                                  break;
                case UP_ARROW:    dir = UP;
                                  break;
                case DOWN_ARROW:  dir = DOWN;
                                  break;
             }
        }

        }
    return 0;
}

