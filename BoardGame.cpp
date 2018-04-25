#include <iostream>
#include "SDL_Plotter.h"
#include "PlayerShip.h"
#include "BoardGame.h"

using namespace std;


void drawScoreBoard(SDL_Plotter& ScoreBoard, int x, int y){
    for(int dx = 0; dx < 50; dx++){
        for(int dy = 0; dy < 50; dy++){
            ScoreBoard.plotPixel(x + dx, y+dy,90,60,90);
        }
    }

    return;
}
