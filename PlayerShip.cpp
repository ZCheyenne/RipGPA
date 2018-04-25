/*
* Author: David Park, Isaias Lozano, Cheyenne Zhang, Chengyu Hong
* Assignment Title:  Galaga
* Assignment Description: This program mimics the game Galaga.
* Due Date: 4/25/2018
* Date Created: 3/25/2018
* Date Last Modified: 4/25/2018
 */

#include <iostream>
#include "PlayerShip.h"
#include "SDL_Plotter.h"
using namespace std;

void drawShip(SDL_Plotter& Screen, int x, int y){
    for(int dx = 0; dx < 50; dx++){
        for(int dy = 0; dy < 50; dy++){
            Screen.plotPixel(x + dx, y+dy,90,60,90);
        }
    }
    return;
}

void eraseShip(SDL_Plotter& Screen, int x, int y){
    for(int dx = 0; dx < 50; dx++){
        for(int dy = 0; dy < 50; dy++){
            Screen.plotPixel(x + dx, y+dy,255,255,255);
        }
    }
    return;
}


void moveShip(int& x, int& y, int dir){
    switch (dir)
    {
        case RIGHT: if(x < 840)
                        x++;
                    break;
        case LEFT:  if(x > 80)
                        x--;
                    break;
        case UP:    if(y > 40)
                        y--;
                    break;
        case DOWN:  if(y < 940)
                        y++;
                    break;
    }
}


